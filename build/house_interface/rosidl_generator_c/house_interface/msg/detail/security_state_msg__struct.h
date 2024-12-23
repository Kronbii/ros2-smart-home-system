// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from house_interface:msg/SecurityStateMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/security_state_msg.h"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__SECURITY_STATE_MSG__STRUCT_H_
#define HOUSE_INTERFACE__MSG__DETAIL__SECURITY_STATE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'security_state_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SecurityStateMsg in the package house_interface.
typedef struct house_interface__msg__SecurityStateMsg
{
  rosidl_runtime_c__String security_state_msg;
} house_interface__msg__SecurityStateMsg;

// Struct for a sequence of house_interface__msg__SecurityStateMsg.
typedef struct house_interface__msg__SecurityStateMsg__Sequence
{
  house_interface__msg__SecurityStateMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__msg__SecurityStateMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOUSE_INTERFACE__MSG__DETAIL__SECURITY_STATE_MSG__STRUCT_H_
