// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from warehouse_pick_place_interfaces:srv/SetBoxAttached.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/srv/set_box_attached.h"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__STRUCT_H_
#define WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'box_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBoxAttached in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__srv__SetBoxAttached_Request
{
  rosidl_runtime_c__String box_name;
  bool attached;
} warehouse_pick_place_interfaces__srv__SetBoxAttached_Request;

// Struct for a sequence of warehouse_pick_place_interfaces__srv__SetBoxAttached_Request.
typedef struct warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBoxAttached in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__srv__SetBoxAttached_Response
{
  bool success;
  rosidl_runtime_c__String message;
} warehouse_pick_place_interfaces__srv__SetBoxAttached_Response;

// Struct for a sequence of warehouse_pick_place_interfaces__srv__SetBoxAttached_Response.
typedef struct warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__request__MAX_SIZE = 1
};
// response
enum
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetBoxAttached in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__srv__SetBoxAttached_Event
{
  service_msgs__msg__ServiceEventInfo info;
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence request;
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence response;
} warehouse_pick_place_interfaces__srv__SetBoxAttached_Event;

// Struct for a sequence of warehouse_pick_place_interfaces__srv__SetBoxAttached_Event.
typedef struct warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__Sequence
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__STRUCT_H_
