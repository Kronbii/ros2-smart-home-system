// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from house_interface:msg/AmbientLight.idl
// generated code does not contain a copyright notice

#include "house_interface/msg/detail/ambient_light__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_house_interface
const rosidl_type_hash_t *
house_interface__msg__AmbientLight__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x3a, 0xb8, 0xd7, 0x6b, 0x37, 0x67, 0x57,
      0x56, 0xfe, 0x0c, 0x7e, 0x6d, 0x0d, 0x1a, 0x80,
      0x1e, 0x4a, 0xe6, 0xf0, 0xe2, 0xeb, 0x40, 0x82,
      0xf1, 0x0e, 0x92, 0x4a, 0x08, 0x70, 0x2d, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char house_interface__msg__AmbientLight__TYPE_NAME[] = "house_interface/msg/AmbientLight";

// Define type names, field names, and default values
static char house_interface__msg__AmbientLight__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field house_interface__msg__AmbientLight__FIELDS[] = {
  {
    {house_interface__msg__AmbientLight__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
house_interface__msg__AmbientLight__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {house_interface__msg__AmbientLight__TYPE_NAME, 32, 32},
      {house_interface__msg__AmbientLight__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}


static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
house_interface__msg__AmbientLight__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {house_interface__msg__AmbientLight__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
house_interface__msg__AmbientLight__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *house_interface__msg__AmbientLight__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
