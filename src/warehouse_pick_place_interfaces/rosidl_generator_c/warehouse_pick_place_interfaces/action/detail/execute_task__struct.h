// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from warehouse_pick_place_interfaces:action/ExecuteTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/action/execute_task.h"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__ACTION__DETAIL__EXECUTE_TASK__STRUCT_H_
#define WAREHOUSE_PICK_PLACE_INTERFACES__ACTION__DETAIL__EXECUTE_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'destination'
// Member 'box_name'
#include "rosidl_runtime_c/string.h"
// Member 'box_poses'
#include "warehouse_pick_place_interfaces/msg/detail/box_pose__struct.h"

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_Goal
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String destination;
  rosidl_runtime_c__String box_name;
  warehouse_pick_place_interfaces__msg__BoxPose__Sequence box_poses;
  double x;
  double y;
  double z;
} warehouse_pick_place_interfaces__action__ExecuteTask_Goal;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_Goal.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_Result
{
  bool success;
  rosidl_runtime_c__String message;
} warehouse_pick_place_interfaces__action__ExecuteTask_Result;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_Result.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_Feedback
{
  rosidl_runtime_c__String state;
  float progress;
} warehouse_pick_place_interfaces__action__ExecuteTask_Feedback;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_Feedback.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "warehouse_pick_place_interfaces/action/detail/execute_task__struct.h"

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  warehouse_pick_place_interfaces__action__ExecuteTask_Goal goal;
} warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence request;
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence response;
} warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "warehouse_pick_place_interfaces/action/detail/execute_task__struct.h"

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response
{
  int8_t status;
  warehouse_pick_place_interfaces__action__ExecuteTask_Result result;
} warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence request;
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence response;
} warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "warehouse_pick_place_interfaces/action/detail/execute_task__struct.h"

/// Struct defined in action/ExecuteTask in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  warehouse_pick_place_interfaces__action__ExecuteTask_Feedback feedback;
} warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage;

// Struct for a sequence of warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage.
typedef struct warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence
{
  warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__ACTION__DETAIL__EXECUTE_TASK__STRUCT_H_
