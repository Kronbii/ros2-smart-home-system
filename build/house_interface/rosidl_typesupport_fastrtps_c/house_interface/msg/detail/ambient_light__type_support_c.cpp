// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from house_interface:msg/AmbientLight.idl
// generated code does not contain a copyright notice
#include "house_interface/msg/detail/ambient_light__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "house_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "house_interface/msg/detail/ambient_light__struct.h"
#include "house_interface/msg/detail/ambient_light__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AmbientLight__ros_msg_type = house_interface__msg__AmbientLight;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
bool cdr_serialize_house_interface__msg__AmbientLight(
  const house_interface__msg__AmbientLight * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
bool cdr_deserialize_house_interface__msg__AmbientLight(
  eprosima::fastcdr::Cdr & cdr,
  house_interface__msg__AmbientLight * ros_message)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
size_t get_serialized_size_house_interface__msg__AmbientLight(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AmbientLight__ros_msg_type * ros_message = static_cast<const _AmbientLight__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
size_t max_serialized_size_house_interface__msg__AmbientLight(
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

  // Field name: structure_needs_at_least_one_member
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
    using DataType = house_interface__msg__AmbientLight;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
bool cdr_serialize_key_house_interface__msg__AmbientLight(
  const house_interface__msg__AmbientLight * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
size_t get_serialized_size_key_house_interface__msg__AmbientLight(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AmbientLight__ros_msg_type * ros_message = static_cast<const _AmbientLight__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_house_interface
size_t max_serialized_size_key_house_interface__msg__AmbientLight(
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
  // Field name: structure_needs_at_least_one_member
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
    using DataType = house_interface__msg__AmbientLight;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _AmbientLight__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const house_interface__msg__AmbientLight * ros_message = static_cast<const house_interface__msg__AmbientLight *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_house_interface__msg__AmbientLight(ros_message, cdr);
}

static bool _AmbientLight__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  house_interface__msg__AmbientLight * ros_message = static_cast<house_interface__msg__AmbientLight *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_house_interface__msg__AmbientLight(cdr, ros_message);
}

static uint32_t _AmbientLight__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_house_interface__msg__AmbientLight(
      untyped_ros_message, 0));
}

static size_t _AmbientLight__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_house_interface__msg__AmbientLight(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AmbientLight = {
  "house_interface::msg",
  "AmbientLight",
  _AmbientLight__cdr_serialize,
  _AmbientLight__cdr_deserialize,
  _AmbientLight__get_serialized_size,
  _AmbientLight__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AmbientLight__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AmbientLight,
  get_message_typesupport_handle_function,
  &house_interface__msg__AmbientLight__get_type_hash,
  &house_interface__msg__AmbientLight__get_type_description,
  &house_interface__msg__AmbientLight__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, msg, AmbientLight)() {
  return &_AmbientLight__type_support;
}

#if defined(__cplusplus)
}
#endif
