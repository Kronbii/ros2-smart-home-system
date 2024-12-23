// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from house_interface:msg/MotionDetect.idl
// generated code does not contain a copyright notice

#include "house_interface/msg/detail/motion_detect__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_house_interface
const rosidl_type_hash_t *
house_interface__msg__MotionDetect__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x28, 0xa1, 0x37, 0x18, 0x09, 0xdc, 0x76,
      0x9e, 0xa0, 0x4a, 0x4a, 0xe9, 0xd5, 0xe5, 0xf8,
      0x5f, 0x98, 0x28, 0xa5, 0x08, 0x96, 0x71, 0x03,
      0x2b, 0xf6, 0xe3, 0x74, 0xea, 0x45, 0x59, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char house_interface__msg__MotionDetect__TYPE_NAME[] = "house_interface/msg/MotionDetect";

// Define type names, field names, and default values
static char house_interface__msg__MotionDetect__FIELD_NAME__motion[] = "motion";

static rosidl_runtime_c__type_description__Field house_interface__msg__MotionDetect__FIELDS[] = {
  {
    {house_interface__msg__MotionDetect__FIELD_NAME__motion, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
house_interface__msg__MotionDetect__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {house_interface__msg__MotionDetect__TYPE_NAME, 32, 32},
      {house_interface__msg__MotionDetect__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool motion";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
house_interface__msg__MotionDetect__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {house_interface__msg__MotionDetect__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 12, 12},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
house_interface__msg__MotionDetect__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *house_interface__msg__MotionDetect__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
