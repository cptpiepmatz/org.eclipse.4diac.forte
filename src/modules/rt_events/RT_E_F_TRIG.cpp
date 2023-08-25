/*******************************************************************************
 * Copyright (c) 2006 - 2013 ACIN, Profactor GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Alois Zoitl, Gerhard Ebenhofer, Ingo Hegny, Monika Wenger,
 *    - initial API and implementation and/or initial documentation
 *******************************************************************************/
#include "RT_E_F_TRIG.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RT_E_F_TRIG_gen.cpp"
#endif

#include "criticalregion.h"
#include "resource.h"

DEFINE_FIRMWARE_FB(FORTE_RT_E_F_TRIG, g_nStringIdRT_E_F_TRIG)

const CStringDictionary::TStringId FORTE_RT_E_F_TRIG::scmDataInputNames[] = {g_nStringIdQI, g_nStringIdTmin, g_nStringIdDeadline, g_nStringIdWCET};
const CStringDictionary::TStringId FORTE_RT_E_F_TRIG::scmDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdTIME, g_nStringIdTIME, g_nStringIdTIME};
const CStringDictionary::TStringId FORTE_RT_E_F_TRIG::scmDataOutputNames[] = {g_nStringIdQO};
const CStringDictionary::TStringId FORTE_RT_E_F_TRIG::scmDataOutputTypeIds[] = {g_nStringIdBOOL};
const TDataIOID FORTE_RT_E_F_TRIG::scmEIWith[] = {0, 1, 2, 3, scmWithListDelimiter, 0, scmWithListDelimiter};
const TForteInt16 FORTE_RT_E_F_TRIG::scmEIWithIndexes[] = {0, 5};
const CStringDictionary::TStringId FORTE_RT_E_F_TRIG::scmEventInputNames[] = {g_nStringIdINIT, g_nStringIdEI};
const TDataIOID FORTE_RT_E_F_TRIG::scmEOWith[] = {0, scmWithListDelimiter};
const TForteInt16 FORTE_RT_E_F_TRIG::scmEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_RT_E_F_TRIG::scmEventOutputNames[] = {g_nStringIdINITO, g_nStringIdEO};
const SFBInterfaceSpec FORTE_RT_E_F_TRIG::scmFBInterfaceSpec = {
  2, scmEventInputNames, scmEIWith, scmEIWithIndexes,
  2, scmEventOutputNames, scmEOWith, scmEOWithIndexes,
  4, scmDataInputNames, scmDataInputTypeIds,
  1, scmDataOutputNames, scmDataOutputTypeIds,
  0, nullptr,
  0, nullptr
};

FORTE_RT_E_F_TRIG::FORTE_RT_E_F_TRIG(const CStringDictionary::TStringId paInstanceNameId, CResource *paSrcRes) :
        CRTEventSingle(paSrcRes, &scmFBInterfaceSpec, paInstanceNameId),
    var_conn_QO(var_QO),
    conn_INITO(this, 0),
    conn_EO(this, 1),
    conn_QI(nullptr),
    conn_Tmin(nullptr),
    conn_Deadline(nullptr),
    conn_WCET(nullptr),
    conn_QO(this, 0, &var_conn_QO) {
};

void FORTE_RT_E_F_TRIG::setInitialValues() {
  var_QI = 0_BOOL;
  var_Tmin = 0_TIME;
  var_Deadline = 0_TIME;
  var_WCET = 0_TIME;
  var_QO = 0_BOOL;
}

bool FORTE_RT_E_F_TRIG::checkActivation(TEventID){
  bool bRetval = false;

  if(!var_QI && mWasHigh) {
    bRetval = true;
  }
  mWasHigh = var_QI;
  return bRetval;
}

void FORTE_RT_E_F_TRIG::readInputData(TEventID paEIID) {
  switch(paEIID) {
    case scmEventINITID: {
      RES_DATA_CON_CRITICAL_REGION();
      readData(0, var_QI, conn_QI);
      readData(1, var_Tmin, conn_Tmin);
      readData(2, var_Deadline, conn_Deadline);
      readData(3, var_WCET, conn_WCET);
      break;
    }
    case scmEventEIID: {
      RES_DATA_CON_CRITICAL_REGION();
      readData(0, var_QI, conn_QI);
      break;
    }
    default:
      break;
  }
}

void FORTE_RT_E_F_TRIG::writeOutputData(TEventID paEIID) {
  switch(paEIID) {
    case scmEventINITOID: {
      RES_DATA_CON_CRITICAL_REGION();
      writeData(0, var_QO, conn_QO);
      break;
    }
    case scmEventEOID: {
      RES_DATA_CON_CRITICAL_REGION();
      break;
    }
    default:
      break;
  }
}

CIEC_ANY *FORTE_RT_E_F_TRIG::getDI(size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_QI;
    case 1: return &var_Tmin;
    case 2: return &var_Deadline;
    case 3: return &var_WCET;
  }
  return nullptr;
}

CIEC_ANY *FORTE_RT_E_F_TRIG::getDO(size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_QO;
  }
  return nullptr;
}

CIEC_ANY *FORTE_RT_E_F_TRIG::getDIO(size_t) {
  return nullptr;
}

CEventConnection *FORTE_RT_E_F_TRIG::getEOConUnchecked(TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_INITO;
    case 1: return &conn_EO;
  }
  return nullptr;
}

CDataConnection **FORTE_RT_E_F_TRIG::getDIConUnchecked(TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_QI;
    case 1: return &conn_Tmin;
    case 2: return &conn_Deadline;
    case 3: return &conn_WCET;
  }
  return nullptr;
}

CDataConnection *FORTE_RT_E_F_TRIG::getDOConUnchecked(TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_QO;
  }
  return nullptr;
}

CInOutDataConnection **FORTE_RT_E_F_TRIG::getDIOInConUnchecked(TPortId) {
  return nullptr;
}

CInOutDataConnection *FORTE_RT_E_F_TRIG::getDIOOutConUnchecked(TPortId) {
  return nullptr;
}


