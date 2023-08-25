/*******************************************************************************
 * Copyright (c) 2007 - 2011 ACIN
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Alois Zoitl, Ingo Hegny
 *     - initial API and implementation and/or initial documentation
 *******************************************************************************/

#pragma once

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class FORTE_E_F_TRIG: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_E_F_TRIG)

private:
  static const CStringDictionary::TStringId scmDataInputNames[];
  static const CStringDictionary::TStringId scmDataInputTypeIds[];
  static const TEventID scmEventEIID = 0;
  static const TDataIOID scmEIWith[];
  static const TForteInt16 scmEIWithIndexes[];
  static const CStringDictionary::TStringId scmEventInputNames[];
  static const TEventID scmEventEOID = 0;
  static const TForteInt16 scmEOWithIndexes[];
  static const CStringDictionary::TStringId scmEventOutputNames[];

  static const SFBInterfaceSpec scmFBInterfaceSpec;

  static const SCFB_FBInstanceData scmInternalFBs[];
  static const SCFB_FBParameter scmParamters[];
  static const SCFB_FBConnectionData scmEventConnections[];
  static const SCFB_FBFannedOutConnectionData scmFannedOutEventConnections[];
  static const SCFB_FBConnectionData scmDataConnections[];
  static const SCFB_FBFannedOutConnectionData scmFannedOutDataConnections[];
  static const SCFB_FBNData scmFBNData;

  void readInputData(TEventID paEIID) override;
  void writeOutputData(TEventID paEIID) override;

public:
  FORTE_E_F_TRIG(const CStringDictionary::TStringId paInstanceNameId, CResource *paSrcRes);

  CIEC_BOOL var_QI;
  CEventConnection conn_EO;
  CDataConnection *conn_QI;
  CIEC_ANY *getDI(size_t) override;
  CIEC_ANY *getDO(size_t) override;
  CEventConnection *getEOConUnchecked(TPortId) override;
  CDataConnection **getDIConUnchecked(TPortId) override;
  CDataConnection *getDOConUnchecked(TPortId) override;
  void evt_EI(const CIEC_BOOL &pa_QI) {
    var_QI = pa_QI;
    receiveInputEvent(scmEventEIID, nullptr);
  }
  void operator()(const CIEC_BOOL &pa_QI) {
    evt_EI(pa_QI);
  }
};



