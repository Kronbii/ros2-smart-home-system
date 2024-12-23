// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from house_interface:msg/LightStateMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/light_state_msg.h"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__LIGHT_STATE_MSG__STRUCT_H_
#define HOUSE_INTERFACE__MSG__DETAIL__LIGHT_STATE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'light_state_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LightStateMsg in the package house_interface.
typedef struct house_interface__msg__LightStateMsg
{
  rosidl_runtime_c__String light_state_msg;
} house_interface__msg__LightStateMsg;

// Struct for a sequence of house_interface__msg__LightStateMsg.
typedef struct house_interface__msg__LightStateMsg__Sequence
{
  house_interface__msg__LightStateMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__msg__LightStateMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOUSE_INTERFACE__MSG__DETAIL__LIGHT_STATE_MSG__STRUCT_H_
