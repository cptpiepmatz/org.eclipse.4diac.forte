/*******************************************************************************
 * Copyright (c) 2006 - 2014 ACIN, Profactor GmbH, fortiss GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Alois Zoitl, Gerhard Ebenhofer
 *    - initial API and implementation and/or initial documentation
 *******************************************************************************/

#pragma once

#include "cfb.h"
#include "typelib.h"
#include "forte_time.h"
#include "forte_uint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class FORTE_RT_E_TRAIN final : public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_RT_E_TRAIN)

private:
  static const CStringDictionary::TStringId scmDataInputNames[];
  static const CStringDictionary::TStringId scmDataInputTypeIds[];
  static const CStringDictionary::TStringId scmDataOutputNames[];
  static const CStringDictionary::TStringId scmDataOutputTypeIds[];
  static const TEventID scmEventSTARTID = 0;
  static const TEventID scmEventSTOPID = 1;
  static const TDataIOID scmEIWith[];
  static const TForteInt16 scmEIWithIndexes[];
  static const CStringDictionary::TStringId scmEventInputNames[];
  static const TEventID scmEventEOID = 0;
  static const TDataIOID scmEOWith[]; 
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
  void setInitialValues() override;

public:
  FORTE_RT_E_TRAIN(const CStringDictionary::TStringId paInstanceNameId, CResource *paSrcRes);

  CIEC_TIME var_DT;
  CIEC_UINT var_N;
  CIEC_TIME var_Deadline;
  CIEC_TIME var_WCET;
  CIEC_UINT var_CV;
  CIEC_UINT var_conn_CV;
  CEventConnection conn_EO;
  CDataConnection *conn_DT;
  CDataConnection *conn_N;
  CDataConnection *conn_Deadline;
  CDataConnection *conn_WCET;
  CDataConnection conn_CV;
  CIEC_ANY *getDI(size_t) override;
  CIEC_ANY *getDO(size_t) override;
  CIEC_ANY *getDIO(size_t) override;
  CEventConnection *getEOConUnchecked(TPortId) override;
  CDataConnection **getDIConUnchecked(TPortId) override;
  CDataConnection *getDOConUnchecked(TPortId) override;
  CInOutDataConnection **getDIOInConUnchecked(TPortId) override;
  CInOutDataConnection *getDIOOutConUnchecked(TPortId) override;
  void evt_START(const CIEC_TIME &pa_DT, const CIEC_UINT &pa_N, const CIEC_TIME &pa_Deadline, const CIEC_TIME &pa_WCET, CIEC_UINT &pa_CV) {
    var_DT = pa_DT;
    var_N = pa_N;
    var_Deadline = pa_Deadline;
    var_WCET = pa_WCET;
    receiveInputEvent(scmEventSTARTID, nullptr);
    pa_CV = var_CV;
  }
  void evt_STOP(const CIEC_TIME &pa_DT, const CIEC_UINT &pa_N, const CIEC_TIME &pa_Deadline, const CIEC_TIME &pa_WCET, CIEC_UINT &pa_CV) {
    var_DT = pa_DT;
    var_N = pa_N;
    var_Deadline = pa_Deadline;
    var_WCET = pa_WCET;
    receiveInputEvent(scmEventSTOPID, nullptr);
    pa_CV = var_CV;
  }
  void operator()(const CIEC_TIME &pa_DT, const CIEC_UINT &pa_N, const CIEC_TIME &pa_Deadline, const CIEC_TIME &pa_WCET, CIEC_UINT &pa_CV) {
    evt_START(pa_DT, pa_N, pa_Deadline, pa_WCET, pa_CV);
  }
};



