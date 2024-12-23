// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from house_interface:msg/LightStateMsg.idl
// generated code does not contain a copyright notice

#ifndef HOUSE_INTERFACE__MSG__DETAIL__LIGHT_STATE_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HOUSE_INTERFACE__MSG__DETAIL__LIGHT_STATE_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "house_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "house_interface/msg/detail/light_state_msg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace house_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
cdr_serialize(
  const house_interface::msg::LightStateMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  house_interface::msg::LightStateMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
get_serialized_size(
  const house_interface::msg::LightStateMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
max_serialized_size_LightStateMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
cdr_serialize_key(
  const house_interface::msg::LightStateMsg & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
get_serialized_size_key(
  const house_interface::msg::LightStateMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
max_serialized_size_key_LightStateMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, msg, LightStateMsg)();

#ifdef __cplusplus
}
#endif

#endif  // HOUSE_INTERFACE__MSG__DETAIL__LIGHT_STATE_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
