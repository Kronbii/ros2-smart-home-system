// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from house_interface:action/DimLight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/action/dim_light.h"


#ifndef HOUSE_INTERFACE__ACTION__DETAIL__DIM_LIGHT__STRUCT_H_
#define HOUSE_INTERFACE__ACTION__DETAIL__DIM_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_Goal
{
  float target_light_level;
} house_interface__action__DimLight_Goal;

// Struct for a sequence of house_interface__action__DimLight_Goal.
typedef struct house_interface__action__DimLight_Goal__Sequence
{
  house_interface__action__DimLight_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_Result
{
  float reached_light_level;
} house_interface__action__DimLight_Result;

// Struct for a sequence of house_interface__action__DimLight_Result.
typedef struct house_interface__action__DimLight_Result__Sequence
{
  house_interface__action__DimLight_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_Feedback
{
  float current_light_level;
} house_interface__action__DimLight_Feedback;

// Struct for a sequence of house_interface__action__DimLight_Feedback.
typedef struct house_interface__action__DimLight_Feedback__Sequence
{
  house_interface__action__DimLight_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "house_interface/action/detail/dim_light__struct.h"

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  house_interface__action__DimLight_Goal goal;
} house_interface__action__DimLight_SendGoal_Request;

// Struct for a sequence of house_interface__action__DimLight_SendGoal_Request.
typedef struct house_interface__action__DimLight_SendGoal_Request__Sequence
{
  house_interface__action__DimLight_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} house_interface__action__DimLight_SendGoal_Response;

// Struct for a sequence of house_interface__action__DimLight_SendGoal_Response.
typedef struct house_interface__action__DimLight_SendGoal_Response__Sequence
{
  house_interface__action__DimLight_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  house_interface__action__DimLight_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  house_interface__action__DimLight_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  house_interface__action__DimLight_SendGoal_Request__Sequence request;
  house_interface__action__DimLight_SendGoal_Response__Sequence response;
} house_interface__action__DimLight_SendGoal_Event;

// Struct for a sequence of house_interface__action__DimLight_SendGoal_Event.
typedef struct house_interface__action__DimLight_SendGoal_Event__Sequence
{
  house_interface__action__DimLight_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} house_interface__action__DimLight_GetResult_Request;

// Struct for a sequence of house_interface__action__DimLight_GetResult_Request.
typedef struct house_interface__action__DimLight_GetResult_Request__Sequence
{
  house_interface__action__DimLight_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_GetResult_Response
{
  int8_t status;
  house_interface__action__DimLight_Result result;
} house_interface__action__DimLight_GetResult_Response;

// Struct for a sequence of house_interface__action__DimLight_GetResult_Response.
typedef struct house_interface__action__DimLight_GetResult_Response__Sequence
{
  house_interface__action__DimLight_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  house_interface__action__DimLight_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  house_interface__action__DimLight_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  house_interface__action__DimLight_GetResult_Request__Sequence request;
  house_interface__action__DimLight_GetResult_Response__Sequence response;
} house_interface__action__DimLight_GetResult_Event;

// Struct for a sequence of house_interface__action__DimLight_GetResult_Event.
typedef struct house_interface__action__DimLight_GetResult_Event__Sequence
{
  house_interface__action__DimLight_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"

/// Struct defined in action/DimLight in the package house_interface.
typedef struct house_interface__action__DimLight_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  house_interface__action__DimLight_Feedback feedback;
} house_interface__action__DimLight_FeedbackMessage;

// Struct for a sequence of house_interface__action__DimLight_FeedbackMessage.
typedef struct house_interface__action__DimLight_FeedbackMessage__Sequence
{
  house_interface__action__DimLight_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__action__DimLight_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOUSE_INTERFACE__ACTION__DETAIL__DIM_LIGHT__STRUCT_H_
