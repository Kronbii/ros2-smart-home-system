// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from house_interface:msg/TempStateMsg.idl
// generated code does not contain a copyright notice

#include "house_interface/msg/detail/temp_state_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_house_interface
const rosidl_type_hash_t *
house_interface__msg__TempStateMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x28, 0xbc, 0x62, 0x6c, 0xe0, 0x59, 0x5f,
      0xb7, 0x4c, 0x9a, 0x80, 0x3f, 0x70, 0xac, 0x02,
      0xb0, 0x57, 0xb9, 0x86, 0xb0, 0x72, 0xff, 0x44,
      0x80, 0x2f, 0x96, 0x93, 0xdb, 0x0c, 0x67, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char house_interface__msg__TempStateMsg__TYPE_NAME[] = "house_interface/msg/TempStateMsg";

// Define type names, field names, and default values
static char house_interface__msg__TempStateMsg__FIELD_NAME__temp_state_msg[] = "temp_state_msg";

static rosidl_runtime_c__type_description__Field house_interface__msg__TempStateMsg__FIELDS[] = {
  {
    {house_interface__msg__TempStateMsg__FIELD_NAME__temp_state_msg, 14, 14},
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
house_interface__msg__TempStateMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {house_interface__msg__TempStateMsg__TYPE_NAME, 32, 32},
      {house_interface__msg__TempStateMsg__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string temp_state_msg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
house_interface__msg__TempStateMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {house_interface__msg__TempStateMsg__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 22, 22},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
house_interface__msg__TempStateMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *house_interface__msg__TempStateMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
