/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_unique_identifier_msgs__msg__UUID
 *** Description: 
 *** Version:
***     1.0: 2023-03-15/Tim Hesse -  - 
 *************************************************************************/

#ifndef _ROS2_UNIQUE_IDENTIFIER_MSGS__MSG__UUID_H_
#define _ROS2_UNIQUE_IDENTIFIER_MSGS__MSG__UUID_H_

#include "forte_struct.h"

#include "forte_usint.h"
#include "forte_array.h"
#include "forte_array_at.h"


class CIEC_ROS2_unique_identifier_msgs__msg__UUID: public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_unique_identifier_msgs__msg__UUID)

  public:
      CIEC_ROS2_unique_identifier_msgs__msg__UUID();

      virtual ~CIEC_ROS2_unique_identifier_msgs__msg__UUID() {
      }

          CIEC_USINT *uuid() {
            return static_cast<CIEC_USINT*>((*static_cast<CIEC_ARRAY *>(getMember(0)))[0]); //the first element marks the start of the array
          }
          

  private:
    static const CStringDictionary::TStringId scmElementTypes[];
    static const CStringDictionary::TStringId scmElementNames[];

};

#endif // _ROS2_UNIQUE_IDENTIFIER_MSGS__MSG__UUID_H_


