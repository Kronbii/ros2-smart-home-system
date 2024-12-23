// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from house_interface:msg/MotionDetect.idl
// generated code does not contain a copyright notice
#include "house_interface/msg/detail/motion_detect__rosidl_typesupport_fastrtps_cpp.hpp"
#include "house_interface/msg/detail/motion_detect__functions.h"
#include "house_interface/msg/detail/motion_detect__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace house_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
cdr_serialize(
  const house_interface::msg::MotionDetect & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motion
  cdr << (ros_message.motion ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  house_interface::msg::MotionDetect & ros_message)
{
  // Member: motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motion = tmp ? true : false;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
get_serialized_size(
  const house_interface::msg::MotionDetect & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motion
  {
    size_t item_size = sizeof(ros_message.motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
max_serialized_size_MotionDetect(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: motion
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = house_interface::msg::MotionDetect;
    is_plain =
      (
      offsetof(DataType, motion) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
cdr_serialize_key(
  const house_interface::msg::MotionDetect & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motion
  cdr << (ros_message.motion ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
get_serialized_size_key(
  const house_interface::msg::MotionDetect & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motion
  {
    size_t item_size = sizeof(ros_message.motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_house_interface
max_serialized_size_key_MotionDetect(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: motion
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = house_interface::msg::MotionDetect;
    is_plain =
      (
      offsetof(DataType, motion) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MotionDetect__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const house_interface::msg::MotionDetect *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotionDetect__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<house_interface::msg::MotionDetect *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotionDetect__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const house_interface::msg::MotionDetect *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotionDetect__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotionDetect(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotionDetect__callbacks = {
  "house_interface::msg",
  "MotionDetect",
  _MotionDetect__cdr_serialize,
  _MotionDetect__cdr_deserialize,
  _MotionDetect__get_serialized_size,
  _MotionDetect__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MotionDetect__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotionDetect__callbacks,
  get_message_typesupport_handle_function,
  &house_interface__msg__MotionDetect__get_type_hash,
  &house_interface__msg__MotionDetect__get_type_description,
  &house_interface__msg__MotionDetect__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace house_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_house_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::msg::MotionDetect>()
{
  return &house_interface::msg::typesupport_fastrtps_cpp::_MotionDetect__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, msg, MotionDetect)() {
  return &house_interface::msg::typesupport_fastrtps_cpp::_MotionDetect__handle;
}

#ifdef __cplusplus
}
#endif
