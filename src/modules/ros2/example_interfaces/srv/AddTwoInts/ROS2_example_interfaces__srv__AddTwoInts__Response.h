/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_example_interfaces__srv__AddTwoInts__Response
 *** Description: 
 *** Version:
***     1.0: 2023-03-15/Tim Hesse -  - 
 *************************************************************************/

#ifndef _ROS2_EXAMPLE_INTERFACES__SRV__ADDTWOINTS__RESPONSE_H_
#define _ROS2_EXAMPLE_INTERFACES__SRV__ADDTWOINTS__RESPONSE_H_

#include "forte_struct.h"

#include "forte_lint.h"
#include "forte_array_at.h"


class CIEC_ROS2_example_interfaces__srv__AddTwoInts__Response: public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_example_interfaces__srv__AddTwoInts__Response)

  public:
      CIEC_ROS2_example_interfaces__srv__AddTwoInts__Response();

      virtual ~CIEC_ROS2_example_interfaces__srv__AddTwoInts__Response() {
      }

          CIEC_LINT &sum() {
            return *static_cast<CIEC_LINT*>(getMember(0));
          }
          

  private:
    static const CStringDictionary::TStringId scmElementTypes[];
    static const CStringDictionary::TStringId scmElementNames[];

};

#endif // _ROS2_EXAMPLE_INTERFACES__SRV__ADDTWOINTS__RESPONSE_H_


