// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from warehouse_pick_place_interfaces:srv/SetBoxAttached.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__struct.h"
#include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__type_support.h"
#include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__functions.h"
#include "rosidl_typesupport_interface/macros.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  warehouse_pick_place_interfaces,
  srv,
  SetBoxAttached
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event * event_msg = (warehouse_pick_place_interfaces__srv__SetBoxAttached_Event *)(allocator->allocate(sizeof(warehouse_pick_place_interfaces__srv__SetBoxAttached_Event), allocator->state));
  if (!warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__copy((const warehouse_pick_place_interfaces__srv__SetBoxAttached_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__copy((const warehouse_pick_place_interfaces__srv__SetBoxAttached_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  warehouse_pick_place_interfaces,
  srv,
  SetBoxAttached
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event * _event_msg = (warehouse_pick_place_interfaces__srv__SetBoxAttached_Event *)(event_msg);

  warehouse_pick_place_interfaces__srv__SetBoxAttached_Event__fini((warehouse_pick_place_interfaces__srv__SetBoxAttached_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
