// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from house_interface:msg/MotionDetect.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/motion_detect.h"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__STRUCT_H_
#define HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotionDetect in the package house_interface.
typedef struct house_interface__msg__MotionDetect
{
  bool motion;
} house_interface__msg__MotionDetect;

// Struct for a sequence of house_interface__msg__MotionDetect.
typedef struct house_interface__msg__MotionDetect__Sequence
{
  house_interface__msg__MotionDetect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__msg__MotionDetect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__STRUCT_H_
