// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from house_interface:srv/SetTemp.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "house_interface/srv/detail/set_temp__functions.h"
#include "house_interface/srv/detail/set_temp__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetTemp_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTemp_Request_type_support_ids_t;

static const _SetTemp_Request_type_support_ids_t _SetTemp_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetTemp_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTemp_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTemp_Request_type_support_symbol_names_t _SetTemp_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, srv, SetTemp_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, srv, SetTemp_Request)),
  }
};

typedef struct _SetTemp_Request_type_support_data_t
{
  void * data[2];
} _SetTemp_Request_type_support_data_t;

static _SetTemp_Request_type_support_data_t _SetTemp_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTemp_Request_message_typesupport_map = {
  2,
  "house_interface",
  &_SetTemp_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetTemp_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetTemp_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTemp_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTemp_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__srv__SetTemp_Request__get_type_hash,
  &house_interface__srv__SetTemp_Request__get_type_description,
  &house_interface__srv__SetTemp_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::srv::SetTemp_Request>()
{
  return &::house_interface::srv::rosidl_typesupport_cpp::SetTemp_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, srv, SetTemp_Request)() {
  return get_message_type_support_handle<house_interface::srv::SetTemp_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/srv/detail/set_temp__functions.h"
// already included above
// #include "house_interface/srv/detail/set_temp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetTemp_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTemp_Response_type_support_ids_t;

static const _SetTemp_Response_type_support_ids_t _SetTemp_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetTemp_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTemp_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTemp_Response_type_support_symbol_names_t _SetTemp_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, srv, SetTemp_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, srv, SetTemp_Response)),
  }
};

typedef struct _SetTemp_Response_type_support_data_t
{
  void * data[2];
} _SetTemp_Response_type_support_data_t;

static _SetTemp_Response_type_support_data_t _SetTemp_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTemp_Response_message_typesupport_map = {
  2,
  "house_interface",
  &_SetTemp_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetTemp_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetTemp_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTemp_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTemp_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__srv__SetTemp_Response__get_type_hash,
  &house_interface__srv__SetTemp_Response__get_type_description,
  &house_interface__srv__SetTemp_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::srv::SetTemp_Response>()
{
  return &::house_interface::srv::rosidl_typesupport_cpp::SetTemp_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, srv, SetTemp_Response)() {
  return get_message_type_support_handle<house_interface::srv::SetTemp_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/srv/detail/set_temp__functions.h"
// already included above
// #include "house_interface/srv/detail/set_temp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetTemp_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTemp_Event_type_support_ids_t;

static const _SetTemp_Event_type_support_ids_t _SetTemp_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetTemp_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTemp_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTemp_Event_type_support_symbol_names_t _SetTemp_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, srv, SetTemp_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, srv, SetTemp_Event)),
  }
};

typedef struct _SetTemp_Event_type_support_data_t
{
  void * data[2];
} _SetTemp_Event_type_support_data_t;

static _SetTemp_Event_type_support_data_t _SetTemp_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTemp_Event_message_typesupport_map = {
  2,
  "house_interface",
  &_SetTemp_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetTemp_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetTemp_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTemp_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTemp_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__srv__SetTemp_Event__get_type_hash,
  &house_interface__srv__SetTemp_Event__get_type_description,
  &house_interface__srv__SetTemp_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::srv::SetTemp_Event>()
{
  return &::house_interface::srv::rosidl_typesupport_cpp::SetTemp_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, srv, SetTemp_Event)() {
  return get_message_type_support_handle<house_interface::srv::SetTemp_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "house_interface/srv/detail/set_temp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetTemp_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTemp_type_support_ids_t;

static const _SetTemp_type_support_ids_t _SetTemp_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetTemp_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTemp_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTemp_type_support_symbol_names_t _SetTemp_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, srv, SetTemp)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, srv, SetTemp)),
  }
};

typedef struct _SetTemp_type_support_data_t
{
  void * data[2];
} _SetTemp_type_support_data_t;

static _SetTemp_type_support_data_t _SetTemp_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTemp_service_typesupport_map = {
  2,
  "house_interface",
  &_SetTemp_service_typesupport_ids.typesupport_identifier[0],
  &_SetTemp_service_typesupport_symbol_names.symbol_name[0],
  &_SetTemp_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetTemp_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTemp_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<house_interface::srv::SetTemp_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<house_interface::srv::SetTemp_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<house_interface::srv::SetTemp_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<house_interface::srv::SetTemp>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<house_interface::srv::SetTemp>,
  &house_interface__srv__SetTemp__get_type_hash,
  &house_interface__srv__SetTemp__get_type_description,
  &house_interface__srv__SetTemp__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<house_interface::srv::SetTemp>()
{
  return &::house_interface::srv::rosidl_typesupport_cpp::SetTemp_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, srv, SetTemp)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<house_interface::srv::SetTemp>();
}

#ifdef __cplusplus
}
#endif
