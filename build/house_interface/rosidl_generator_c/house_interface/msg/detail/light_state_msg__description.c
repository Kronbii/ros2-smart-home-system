// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from house_interface:msg/LightStateMsg.idl
// generated code does not contain a copyright notice

#include "house_interface/msg/detail/light_state_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_house_interface
const rosidl_type_hash_t *
house_interface__msg__LightStateMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x54, 0x6f, 0xf5, 0x10, 0xfe, 0x2d, 0x4c,
      0xc4, 0x72, 0xeb, 0xfe, 0x35, 0x07, 0x2d, 0x15,
      0xd9, 0x8d, 0xbe, 0x06, 0x3e, 0x01, 0xc1, 0xf8,
      0xf5, 0x6a, 0x6e, 0x45, 0x1f, 0x3e, 0xeb, 0x33,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char house_interface__msg__LightStateMsg__TYPE_NAME[] = "house_interface/msg/LightStateMsg";

// Define type names, field names, and default values
static char house_interface__msg__LightStateMsg__FIELD_NAME__light_state_msg[] = "light_state_msg";

static rosidl_runtime_c__type_description__Field house_interface__msg__LightStateMsg__FIELDS[] = {
  {
    {house_interface__msg__LightStateMsg__FIELD_NAME__light_state_msg, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
house_interface__msg__LightStateMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {house_interface__msg__LightStateMsg__TYPE_NAME, 33, 33},
      {house_interface__msg__LightStateMsg__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string light_state_msg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
house_interface__msg__LightStateMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {house_interface__msg__LightStateMsg__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
house_interface__msg__LightStateMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *house_interface__msg__LightStateMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
