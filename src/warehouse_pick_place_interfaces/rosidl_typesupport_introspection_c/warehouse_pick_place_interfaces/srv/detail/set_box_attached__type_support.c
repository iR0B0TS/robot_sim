// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from warehouse_pick_place_interfaces:srv/SetBoxAttached.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__rosidl_typesupport_introspection_c.h"
#include "warehouse_pick_place_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__functions.h"
#include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__struct.h"


// Include directives for member types
// Member `box_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__init(message_memory);
}

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_fini_function(void * message_memory)
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_member_array[2] = {
  {
    "box_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Request, box_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attached",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Request, attached),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_members = {
  "warehouse_pick_place_interfaces__srv",  // message namespace
  "SetBoxAttached_Request",  // message name
  2,  // number of fields
  sizeof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Request),
  false,  // has_any_key_member_
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_member_array,  // message members
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_type_support_handle = {
  0,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_members,
  get_message_typesupport_handle_function,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__get_type_hash,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__get_type_description,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_warehouse_pick_place_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Request)() {
  if (!warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_type_support_handle.typesupport_identifier) {
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__rosidl_typesupport_introspection_c.h"
// already included above
// #include "warehouse_pick_place_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__functions.h"
// already included above
// #include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__init(message_memory);
}

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_fini_function(void * message_memory)
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Response, success),  // bytes offset in struct
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
    offsetof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_members = {
  "warehouse_pick_place_interfaces__srv",  // message namespace
  "SetBoxAttached_Response",  // message name
  2,  // number of fields
  sizeof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Response),
  false,  // has_any_key_member_
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_member_array,  // message members
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_type_support_handle = {
  0,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_members,
  get_message_typesupport_handle_function,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__get_type_hash,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__get_type_description,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_warehouse_pick_place_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Response)() {
  if (!warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_type_support_handle.typesupport_identifier) {
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__rosidl_typesupport_introspection_c.h"
// already included above
// #include "warehouse_pick_place_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__functions.h"
// already included above
// #include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "warehouse_pick_place_interfaces/srv/set_box_attached.h"
// Member `request`
// Member `response`
// already included above
// #include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__init(message_memory);
}

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_fini_function(void * message_memory)
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__fini(message_memory);
}

size_t warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__size_function__SetBoxAttached_Event__request(
  const void * untyped_member)
{
  const warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence * member =
    (const warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_const_function__SetBoxAttached_Event__request(
  const void * untyped_member, size_t index)
{
  const warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence * member =
    (const warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_function__SetBoxAttached_Event__request(
  void * untyped_member, size_t index)
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence * member =
    (warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__fetch_function__SetBoxAttached_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const warehouse_pick_place_interfaces__srv__SetBoxAttached_Request * item =
    ((const warehouse_pick_place_interfaces__srv__SetBoxAttached_Request *)
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_const_function__SetBoxAttached_Event__request(untyped_member, index));
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request * value =
    (warehouse_pick_place_interfaces__srv__SetBoxAttached_Request *)(untyped_value);
  *value = *item;
}

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__assign_function__SetBoxAttached_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request * item =
    ((warehouse_pick_place_interfaces__srv__SetBoxAttached_Request *)
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_function__SetBoxAttached_Event__request(untyped_member, index));
  const warehouse_pick_place_interfaces__srv__SetBoxAttached_Request * value =
    (const warehouse_pick_place_interfaces__srv__SetBoxAttached_Request *)(untyped_value);
  *item = *value;
}

bool warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__resize_function__SetBoxAttached_Event__request(
  void * untyped_member, size_t size)
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence * member =
    (warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence *)(untyped_member);
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence__fini(member);
  return warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence__init(member, size);
}

size_t warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__size_function__SetBoxAttached_Event__response(
  const void * untyped_member)
{
  const warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence * member =
    (const warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_const_function__SetBoxAttached_Event__response(
  const void * untyped_member, size_t index)
{
  const warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence * member =
    (const warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_function__SetBoxAttached_Event__response(
  void * untyped_member, size_t index)
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence * member =
    (warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__fetch_function__SetBoxAttached_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const warehouse_pick_place_interfaces__srv__SetBoxAttached_Response * item =
    ((const warehouse_pick_place_interfaces__srv__SetBoxAttached_Response *)
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_const_function__SetBoxAttached_Event__response(untyped_member, index));
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response * value =
    (warehouse_pick_place_interfaces__srv__SetBoxAttached_Response *)(untyped_value);
  *value = *item;
}

void warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__assign_function__SetBoxAttached_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response * item =
    ((warehouse_pick_place_interfaces__srv__SetBoxAttached_Response *)
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_function__SetBoxAttached_Event__response(untyped_member, index));
  const warehouse_pick_place_interfaces__srv__SetBoxAttached_Response * value =
    (const warehouse_pick_place_interfaces__srv__SetBoxAttached_Response *)(untyped_value);
  *item = *value;
}

bool warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__resize_function__SetBoxAttached_Event__response(
  void * untyped_member, size_t size)
{
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence * member =
    (warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence *)(untyped_member);
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence__fini(member);
  return warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Event, info),  // bytes offset in struct
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
    offsetof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Event, request),  // bytes offset in struct
    NULL,  // default value
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__size_function__SetBoxAttached_Event__request,  // size() function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_const_function__SetBoxAttached_Event__request,  // get_const(index) function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_function__SetBoxAttached_Event__request,  // get(index) function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__fetch_function__SetBoxAttached_Event__request,  // fetch(index, &value) function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__assign_function__SetBoxAttached_Event__request,  // assign(index, value) function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__resize_function__SetBoxAttached_Event__request  // resize(index) function pointer
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
    offsetof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Event, response),  // bytes offset in struct
    NULL,  // default value
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__size_function__SetBoxAttached_Event__response,  // size() function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_const_function__SetBoxAttached_Event__response,  // get_const(index) function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__get_function__SetBoxAttached_Event__response,  // get(index) function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__fetch_function__SetBoxAttached_Event__response,  // fetch(index, &value) function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__assign_function__SetBoxAttached_Event__response,  // assign(index, value) function pointer
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__resize_function__SetBoxAttached_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_members = {
  "warehouse_pick_place_interfaces__srv",  // message namespace
  "SetBoxAttached_Event",  // message name
  3,  // number of fields
  sizeof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Event),
  false,  // has_any_key_member_
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_member_array,  // message members
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_type_support_handle = {
  0,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_members,
  get_message_typesupport_handle_function,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__get_type_hash,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__get_type_description,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_warehouse_pick_place_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Event)() {
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Request)();
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Response)();
  if (!warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_type_support_handle.typesupport_identifier) {
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "warehouse_pick_place_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_service_members = {
  "warehouse_pick_place_interfaces__srv",  // service namespace
  "SetBoxAttached",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_type_support_handle,
  NULL,  // response message
  // warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_type_support_handle
  NULL  // event_message
  // warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_type_support_handle
};


static rosidl_service_type_support_t warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_service_type_support_handle = {
  0,
  &warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_service_members,
  get_service_typesupport_handle_function,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__rosidl_typesupport_introspection_c__SetBoxAttached_Request_message_type_support_handle,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__rosidl_typesupport_introspection_c__SetBoxAttached_Response_message_type_support_handle,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__rosidl_typesupport_introspection_c__SetBoxAttached_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    warehouse_pick_place_interfaces,
    srv,
    SetBoxAttached
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    warehouse_pick_place_interfaces,
    srv,
    SetBoxAttached
  ),
  &warehouse_pick_place_interfaces__srv__SetBoxAttached__get_type_hash,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached__get_type_description,
  &warehouse_pick_place_interfaces__srv__SetBoxAttached__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_warehouse_pick_place_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached)(void) {
  if (!warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_service_type_support_handle.typesupport_identifier) {
    warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, warehouse_pick_place_interfaces, srv, SetBoxAttached_Event)()->data;
  }

  return &warehouse_pick_place_interfaces__srv__detail__set_box_attached__rosidl_typesupport_introspection_c__SetBoxAttached_service_type_support_handle;
}
