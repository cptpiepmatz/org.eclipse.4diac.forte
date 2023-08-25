/*******************************************************************************
 * Copyright (c) 2011-2014 fortiss and TU Wien ACIN.
 *               2023 Martin Erich Jobst
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    Alois Zoitl - initial implementation and bug fixes
 *    Patrik Smejkal - rename interrupt in interruptCCommFB
 *    Martin Jobst - account for new FB layout and varying data type size
 *******************************************************************************/
#include "localcomlayer.h"
#include "commfb.h"
#include "../resource.h"
#include "../device.h"
#include "../utils/criticalregion.h"


using namespace forte::com_infra;

CLocalComLayer::CLocalCommGroupsManager CLocalComLayer::smLocalCommGroupsManager;

CLocalComLayer::CLocalComLayer(CComLayer* paUpperLayer, CBaseCommFB * paFB) :
  CComLayer(paUpperLayer, paFB), mLocalCommGroup(nullptr){
}

CLocalComLayer::~CLocalComLayer(){
  closeConnection();
}

EComResponse CLocalComLayer::sendData(void *, unsigned int){
  CCriticalRegion criticalRegion(mFb->getResource().mResDataConSync);
  CIEC_ANY **aSDs = mFb->getSDs();
  TPortId unNumSDs = mFb->getNumSD();

  // go through GroupList and trigger all Subscribers
  for(CSinglyLinkedList<CLocalComLayer*>::Iterator listiter(mLocalCommGroup->mSublList.begin()); listiter != mLocalCommGroup->mSublList.end(); ++listiter){
    setRDs((*listiter), aSDs, unNumSDs);
  }
  return e_ProcessDataOk;
}

void CLocalComLayer::setRDs(CLocalComLayer *paSublLayer, CIEC_ANY **paSDs, TPortId paNumSDs){
  CSyncObject *poTargetResDataConSync = nullptr;
  if(mFb->getResourcePtr() != paSublLayer->mFb->getResourcePtr()){
    poTargetResDataConSync = &(paSublLayer->mFb->getResourcePtr()->mResDataConSync);
    poTargetResDataConSync->lock();
  }

  CIEC_ANY **aRDs = paSublLayer->mFb->getRDs();

  for(TPortId i = 0; (i < paNumSDs) && (i < paSublLayer->mFb->getNumRD()); ++i){
    if(aRDs[i]->getDataTypeID() == paSDs[i]->getDataTypeID()){
      aRDs[i]->setValue(*paSDs[i]);
    }
  }

  paSublLayer->mFb->interruptCommFB(paSublLayer);
  mFb->getResource().getDevice().getDeviceExecution().startNewEventChain(paSublLayer->mFb);

  if(nullptr != poTargetResDataConSync){
    poTargetResDataConSync->unlock();
  }
}

EComResponse CLocalComLayer::openConnection(char *paLayerParameter){
  CStringDictionary::TStringId nId = CStringDictionary::getInstance().insert(paLayerParameter);

  switch (mFb->getComServiceType()){
    case e_Server:
    case e_Client:
      break;
    case e_Publisher:
      mLocalCommGroup = smLocalCommGroupsManager.registerPubl(nId, this);
      break;
    case e_Subscriber:
      mLocalCommGroup = smLocalCommGroupsManager.registerSubl(nId, this);
      break;
  }
  return (nullptr != mLocalCommGroup) ? e_InitOk : e_InitInvalidId;
}

void CLocalComLayer::closeConnection(){
  if(nullptr != mLocalCommGroup){
    if(e_Publisher == mFb->getComServiceType()){
      smLocalCommGroupsManager.unregisterPubl(mLocalCommGroup, this);
    }
    else{
      smLocalCommGroupsManager.unregisterSubl(mLocalCommGroup, this);
    }
    mLocalCommGroup = nullptr;
  }
}

/********************** CLocalCommGroupsManager *************************************/
CLocalComLayer::CLocalCommGroup* CLocalComLayer::CLocalCommGroupsManager::registerPubl(const CStringDictionary::TStringId paID, CLocalComLayer *paLayer){
  CCriticalRegion criticalRegion(mSync);
  CLocalCommGroup *poGroup = findLocalCommGroup(paID);
  if(nullptr == poGroup){
    poGroup = createLocalCommGroup(paID);
  }
  poGroup->mPublList.pushBack(paLayer);

  return poGroup;
}

void CLocalComLayer::CLocalCommGroupsManager::unregisterPubl(CLocalCommGroup *paGroup, CLocalComLayer *paLayer){
  CCriticalRegion criticalRegion(mSync);
  removeListEntry(paGroup->mPublList, paLayer);

  if((paGroup->mPublList.isEmpty()) && (paGroup->mSublList.isEmpty())){
    removeCommGroup(paGroup);
  }

}

CLocalComLayer::CLocalCommGroup* CLocalComLayer::CLocalCommGroupsManager::registerSubl(const CStringDictionary::TStringId paID, CLocalComLayer *paLayer){
  CCriticalRegion criticalRegion(mSync);
  CLocalCommGroup *poGroup = findLocalCommGroup(paID);
  if(nullptr == poGroup){
    poGroup = createLocalCommGroup(paID);
  }
  poGroup->mSublList.pushBack(paLayer);

  return poGroup;
}

void CLocalComLayer::CLocalCommGroupsManager::unregisterSubl(CLocalCommGroup *paGroup, CLocalComLayer *paLayer){
  CCriticalRegion criticalRegion(mSync);
  removeListEntry(paGroup->mSublList, paLayer);

  if((paGroup->mPublList.isEmpty()) && (paGroup->mSublList.isEmpty())){
    removeCommGroup(paGroup);
  }
}

CLocalComLayer::CLocalCommGroup* CLocalComLayer::CLocalCommGroupsManager::findLocalCommGroup(CStringDictionary::TStringId paID){
  CLocalCommGroup *poGroup = nullptr;

  if(!mLocalCommGroups.isEmpty()){
    CSinglyLinkedList<CLocalCommGroup>::Iterator it = mLocalCommGroups.begin();
    while(it != mLocalCommGroups.end()){
      if((*it).mGroupName == paID){
        poGroup = &(*it);
        break;
      }
      ++it;
    }
  }

  return poGroup;
}

CLocalComLayer::CLocalCommGroup* CLocalComLayer::CLocalCommGroupsManager::createLocalCommGroup(CStringDictionary::TStringId paID){
  mLocalCommGroups.pushFront(CLocalCommGroup(paID));
  CSinglyLinkedList<CLocalCommGroup>::Iterator it = mLocalCommGroups.begin();
  return &(*it);
}

void CLocalComLayer::CLocalCommGroupsManager::removeListEntry(CSinglyLinkedList<CLocalComLayer*> &pa_rlstList, CLocalComLayer *paLayer){
  CSinglyLinkedList<CLocalComLayer*>::Iterator itRunner = pa_rlstList.begin();
  CSinglyLinkedList<CLocalComLayer*>::Iterator itRevNode = pa_rlstList.end();

  while(itRunner != pa_rlstList.end()){
    if((*itRunner) == paLayer){
      if(itRevNode == pa_rlstList.end()){
        pa_rlstList.popFront();
      }
      else{
        pa_rlstList.eraseAfter(itRevNode);
      }
      break;
    }
    itRevNode = itRunner;
    ++itRunner;
  }
}

void CLocalComLayer::CLocalCommGroupsManager::removeCommGroup(CLocalCommGroup *paGroup){
  CSinglyLinkedList<CLocalCommGroup>::Iterator itRunner = mLocalCommGroups.begin();
  CSinglyLinkedList<CLocalCommGroup>::Iterator itRevNode = mLocalCommGroups.end();

  while(itRunner != mLocalCommGroups.end()){
    if((*itRunner).mGroupName == paGroup->mGroupName){
      if(itRevNode == mLocalCommGroups.end()){
        mLocalCommGroups.popFront();
      }
      else{
        mLocalCommGroups.eraseAfter(itRevNode);
      }
      break;
    }
    itRevNode = itRunner;
    ++itRunner;
  }
}
