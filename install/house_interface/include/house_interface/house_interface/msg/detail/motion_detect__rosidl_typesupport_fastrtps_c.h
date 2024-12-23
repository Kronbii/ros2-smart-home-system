// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from house_interface:msg/MotionDetect.idl
// generated code does not contain a copyright notice
#ifndef HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "house_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "house_interface/msg/detail/motion_detect__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
bool cdr_serialize_house_interface__msg__MotionDetect(
  const house_interface__msg__MotionDetect * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
bool cdr_deserialize_house_interface__msg__MotionDetect(
  eprosima::fastcdr::Cdr &,
  house_interface__msg__MotionDetect * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
size_t get_serialized_size_house_interface__msg__MotionDetect(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
size_t max_serialized_size_house_interface__msg__MotionDetect(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
bool cdr_serialize_key_house_interface__msg__MotionDetect(
  const house_interface__msg__MotionDetect * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
size_t get_serialized_size_key_house_interface__msg__MotionDetect(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
size_t max_serialized_size_key_house_interface__msg__MotionDetect(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, msg, MotionDetect)();

#ifdef __cplusplus
}
#endif

#endif  // HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
