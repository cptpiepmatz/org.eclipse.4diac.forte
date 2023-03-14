/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_std_msgs__msg__String
 *** Description: Primitive Type: String
 *** Version:
 *************************************************************************/

#ifndef _ROS2_STD_MSGS__MSG__STRING_H_
#define _ROS2_STD_MSGS__MSG__STRING_H_

#include "forte_struct.h"

#include "forte_string.h"
#include "forte_array_at.h"


class CIEC_ROS2_std_msgs__msg__String: public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_std_msgs__msg__String)

  public:
      CIEC_ROS2_std_msgs__msg__String();

      virtual ~CIEC_ROS2_std_msgs__msg__String() {
      }

          CIEC_STRING &data() {
            return *static_cast<CIEC_STRING*>(getMember(0));
          }
          

  private:
    static const CStringDictionary::TStringId scmElementTypes[];
    static const CStringDictionary::TStringId scmElementNames[];

};

#endif // _ROS2_STD_MSGS__MSG__STRING_H_


