// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from house_interface:srv/LightState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "house_interface/srv/detail/light_state__rosidl_typesupport_introspection_c.h"
#include "house_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "house_interface/srv/detail/light_state__functions.h"
#include "house_interface/srv/detail/light_state__struct.h"


// Include directives for member types
// Member `light_state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  house_interface__srv__LightState_Request__init(message_memory);
}

void house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_fini_function(void * message_memory)
{
  house_interface__srv__LightState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_message_member_array[1] = {
  {
    "light_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(house_interface__srv__LightState_Request, light_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_message_members = {
  "house_interface__srv",  // message namespace
  "LightState_Request",  // message name
  1,  // number of fields
  sizeof(house_interface__srv__LightState_Request),
  false,  // has_any_key_member_
  house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_message_member_array,  // message members
  house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_message_type_support_handle = {
  0,
  &house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_message_members,
  get_message_typesupport_handle_function,
  &house_interface__srv__LightState_Request__get_type_hash,
  &house_interface__srv__LightState_Request__get_type_description,
  &house_interface__srv__LightState_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_house_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Request)() {
  if (!house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_message_type_support_handle.typesupport_identifier) {
    house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "house_interface/srv/detail/light_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "house_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "house_interface/srv/detail/light_state__functions.h"
// already included above
// #include "house_interface/srv/detail/light_state__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  house_interface__srv__LightState_Response__init(message_memory);
}

void house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_fini_function(void * message_memory)
{
  house_interface__srv__LightState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(house_interface__srv__LightState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(house_interface__srv__LightState_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_message_members = {
  "house_interface__srv",  // message namespace
  "LightState_Response",  // message name
  2,  // number of fields
  sizeof(house_interface__srv__LightState_Response),
  false,  // has_any_key_member_
  house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_message_member_array,  // message members
  house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_message_type_support_handle = {
  0,
  &house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_message_members,
  get_message_typesupport_handle_function,
  &house_interface__srv__LightState_Response__get_type_hash,
  &house_interface__srv__LightState_Response__get_type_description,
  &house_interface__srv__LightState_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_house_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Response)() {
  if (!house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_message_type_support_handle.typesupport_identifier) {
    house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "house_interface/srv/detail/light_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "house_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "house_interface/srv/detail/light_state__functions.h"
// already included above
// #include "house_interface/srv/detail/light_state__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "house_interface/srv/light_state.h"
// Member `request`
// Member `response`
// already included above
// #include "house_interface/srv/detail/light_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  house_interface__srv__LightState_Event__init(message_memory);
}

void house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_fini_function(void * message_memory)
{
  house_interface__srv__LightState_Event__fini(message_memory);
}

size_t house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__size_function__LightState_Event__request(
  const void * untyped_member)
{
  const house_interface__srv__LightState_Request__Sequence * member =
    (const house_interface__srv__LightState_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_const_function__LightState_Event__request(
  const void * untyped_member, size_t index)
{
  const house_interface__srv__LightState_Request__Sequence * member =
    (const house_interface__srv__LightState_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_function__LightState_Event__request(
  void * untyped_member, size_t index)
{
  house_interface__srv__LightState_Request__Sequence * member =
    (house_interface__srv__LightState_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__fetch_function__LightState_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const house_interface__srv__LightState_Request * item =
    ((const house_interface__srv__LightState_Request *)
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_const_function__LightState_Event__request(untyped_member, index));
  house_interface__srv__LightState_Request * value =
    (house_interface__srv__LightState_Request *)(untyped_value);
  *value = *item;
}

void house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__assign_function__LightState_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  house_interface__srv__LightState_Request * item =
    ((house_interface__srv__LightState_Request *)
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_function__LightState_Event__request(untyped_member, index));
  const house_interface__srv__LightState_Request * value =
    (const house_interface__srv__LightState_Request *)(untyped_value);
  *item = *value;
}

bool house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__resize_function__LightState_Event__request(
  void * untyped_member, size_t size)
{
  house_interface__srv__LightState_Request__Sequence * member =
    (house_interface__srv__LightState_Request__Sequence *)(untyped_member);
  house_interface__srv__LightState_Request__Sequence__fini(member);
  return house_interface__srv__LightState_Request__Sequence__init(member, size);
}

size_t house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__size_function__LightState_Event__response(
  const void * untyped_member)
{
  const house_interface__srv__LightState_Response__Sequence * member =
    (const house_interface__srv__LightState_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_const_function__LightState_Event__response(
  const void * untyped_member, size_t index)
{
  const house_interface__srv__LightState_Response__Sequence * member =
    (const house_interface__srv__LightState_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_function__LightState_Event__response(
  void * untyped_member, size_t index)
{
  house_interface__srv__LightState_Response__Sequence * member =
    (house_interface__srv__LightState_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__fetch_function__LightState_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const house_interface__srv__LightState_Response * item =
    ((const house_interface__srv__LightState_Response *)
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_const_function__LightState_Event__response(untyped_member, index));
  house_interface__srv__LightState_Response * value =
    (house_interface__srv__LightState_Response *)(untyped_value);
  *value = *item;
}

void house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__assign_function__LightState_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  house_interface__srv__LightState_Response * item =
    ((house_interface__srv__LightState_Response *)
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_function__LightState_Event__response(untyped_member, index));
  const house_interface__srv__LightState_Response * value =
    (const house_interface__srv__LightState_Response *)(untyped_value);
  *item = *value;
}

bool house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__resize_function__LightState_Event__response(
  void * untyped_member, size_t size)
{
  house_interface__srv__LightState_Response__Sequence * member =
    (house_interface__srv__LightState_Response__Sequence *)(untyped_member);
  house_interface__srv__LightState_Response__Sequence__fini(member);
  return house_interface__srv__LightState_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(house_interface__srv__LightState_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(house_interface__srv__LightState_Event, request),  // bytes offset in struct
    NULL,  // default value
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__size_function__LightState_Event__request,  // size() function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_const_function__LightState_Event__request,  // get_const(index) function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_function__LightState_Event__request,  // get(index) function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__fetch_function__LightState_Event__request,  // fetch(index, &value) function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__assign_function__LightState_Event__request,  // assign(index, value) function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__resize_function__LightState_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(house_interface__srv__LightState_Event, response),  // bytes offset in struct
    NULL,  // default value
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__size_function__LightState_Event__response,  // size() function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_const_function__LightState_Event__response,  // get_const(index) function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__get_function__LightState_Event__response,  // get(index) function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__fetch_function__LightState_Event__response,  // fetch(index, &value) function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__assign_function__LightState_Event__response,  // assign(index, value) function pointer
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__resize_function__LightState_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_members = {
  "house_interface__srv",  // message namespace
  "LightState_Event",  // message name
  3,  // number of fields
  sizeof(house_interface__srv__LightState_Event),
  false,  // has_any_key_member_
  house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_member_array,  // message members
  house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_type_support_handle = {
  0,
  &house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_members,
  get_message_typesupport_handle_function,
  &house_interface__srv__LightState_Event__get_type_hash,
  &house_interface__srv__LightState_Event__get_type_description,
  &house_interface__srv__LightState_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_house_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Event)() {
  house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Request)();
  house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Response)();
  if (!house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_type_support_handle.typesupport_identifier) {
    house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "house_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "house_interface/srv/detail/light_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_service_members = {
  "house_interface__srv",  // service namespace
  "LightState",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_Request_message_type_support_handle,
  NULL,  // response message
  // house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_Response_message_type_support_handle
  NULL  // event_message
  // house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_Response_message_type_support_handle
};


static rosidl_service_type_support_t house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_service_type_support_handle = {
  0,
  &house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_service_members,
  get_service_typesupport_handle_function,
  &house_interface__srv__LightState_Request__rosidl_typesupport_introspection_c__LightState_Request_message_type_support_handle,
  &house_interface__srv__LightState_Response__rosidl_typesupport_introspection_c__LightState_Response_message_type_support_handle,
  &house_interface__srv__LightState_Event__rosidl_typesupport_introspection_c__LightState_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    house_interface,
    srv,
    LightState
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    house_interface,
    srv,
    LightState
  ),
  &house_interface__srv__LightState__get_type_hash,
  &house_interface__srv__LightState__get_type_description,
  &house_interface__srv__LightState__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_house_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState)(void) {
  if (!house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_service_type_support_handle.typesupport_identifier) {
    house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, LightState_Event)()->data;
  }

  return &house_interface__srv__detail__light_state__rosidl_typesupport_introspection_c__LightState_service_type_support_handle;
}
