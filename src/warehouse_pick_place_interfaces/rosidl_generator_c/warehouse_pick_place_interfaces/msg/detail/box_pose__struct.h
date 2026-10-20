// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from warehouse_pick_place_interfaces:msg/BoxPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/msg/box_pose.h"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__STRUCT_H_
#define WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/BoxPose in the package warehouse_pick_place_interfaces.
typedef struct warehouse_pick_place_interfaces__msg__BoxPose
{
  double x;
  double y;
  double z;
  double yaw;
} warehouse_pick_place_interfaces__msg__BoxPose;

// Struct for a sequence of warehouse_pick_place_interfaces__msg__BoxPose.
typedef struct warehouse_pick_place_interfaces__msg__BoxPose__Sequence
{
  warehouse_pick_place_interfaces__msg__BoxPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_pick_place_interfaces__msg__BoxPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__STRUCT_H_
