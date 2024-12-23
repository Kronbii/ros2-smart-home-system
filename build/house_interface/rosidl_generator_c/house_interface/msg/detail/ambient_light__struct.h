// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from house_interface:msg/AmbientLight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/ambient_light.h"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__AMBIENT_LIGHT__STRUCT_H_
#define HOUSE_INTERFACE__MSG__DETAIL__AMBIENT_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/AmbientLight in the package house_interface.
typedef struct house_interface__msg__AmbientLight
{
  uint8_t structure_needs_at_least_one_member;
} house_interface__msg__AmbientLight;

// Struct for a sequence of house_interface__msg__AmbientLight.
typedef struct house_interface__msg__AmbientLight__Sequence
{
  house_interface__msg__AmbientLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__msg__AmbientLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOUSE_INTERFACE__MSG__DETAIL__AMBIENT_LIGHT__STRUCT_H_
