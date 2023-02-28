#ifndef _ROS2_STD_MSGS__STRING_H_
#define _ROS2_STD_MSGS__STRING_H_

#include "forte_struct.h"

#include "forte_string.h"
#include "forte_array_at.h"


class CIEC_ROS2_std_msgs__String: public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_std_msgs__String)

  public:
      CIEC_ROS2_std_msgs__String();

      virtual ~CIEC_ROS2_std_msgs__String() {
      }

          CIEC_STRING &data() {
            return *static_cast<CIEC_STRING*>(getMember(0));
          }
          

  private:
    static const CStringDictionary::TStringId scmElementTypes[];
    static const CStringDictionary::TStringId scmElementNames[];

};

#endif // _ROS2_STD_MSGS__STRING_H_


