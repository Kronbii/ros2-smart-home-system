// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from house_interface:msg/SecurityStateMsg.idl
// generated code does not contain a copyright notice

#include "house_interface/msg/detail/security_state_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_house_interface
const rosidl_type_hash_t *
house_interface__msg__SecurityStateMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0xdf, 0x4a, 0x79, 0x2e, 0x7d, 0x57, 0xbb,
      0x33, 0x25, 0xef, 0x26, 0x6c, 0xdc, 0x7b, 0x37,
      0x07, 0xad, 0xb7, 0x00, 0x64, 0x05, 0x95, 0x62,
      0x8a, 0xac, 0x96, 0xcc, 0xfb, 0x1d, 0x76, 0x18,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char house_interface__msg__SecurityStateMsg__TYPE_NAME[] = "house_interface/msg/SecurityStateMsg";

// Define type names, field names, and default values
static char house_interface__msg__SecurityStateMsg__FIELD_NAME__security_state_msg[] = "security_state_msg";

static rosidl_runtime_c__type_description__Field house_interface__msg__SecurityStateMsg__FIELDS[] = {
  {
    {house_interface__msg__SecurityStateMsg__FIELD_NAME__security_state_msg, 18, 18},
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
house_interface__msg__SecurityStateMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {house_interface__msg__SecurityStateMsg__TYPE_NAME, 36, 36},
      {house_interface__msg__SecurityStateMsg__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string security_state_msg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
house_interface__msg__SecurityStateMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {house_interface__msg__SecurityStateMsg__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
house_interface__msg__SecurityStateMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *house_interface__msg__SecurityStateMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
