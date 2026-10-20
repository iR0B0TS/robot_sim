// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from warehouse_pick_place_interfaces:msg/BoxPose.idl
// generated code does not contain a copyright notice

#include "warehouse_pick_place_interfaces/msg/detail/box_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_warehouse_pick_place_interfaces
const rosidl_type_hash_t *
warehouse_pick_place_interfaces__msg__BoxPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0x91, 0x89, 0x52, 0x0b, 0xda, 0x6e, 0xae,
      0xa2, 0x08, 0xf0, 0xa7, 0x2e, 0x2d, 0x2b, 0x74,
      0x8d, 0x29, 0x7e, 0xf3, 0xbb, 0x1f, 0xa4, 0xe1,
      0x03, 0x52, 0x62, 0x0b, 0x45, 0xf4, 0x15, 0x7b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char warehouse_pick_place_interfaces__msg__BoxPose__TYPE_NAME[] = "warehouse_pick_place_interfaces/msg/BoxPose";

// Define type names, field names, and default values
static char warehouse_pick_place_interfaces__msg__BoxPose__FIELD_NAME__x[] = "x";
static char warehouse_pick_place_interfaces__msg__BoxPose__FIELD_NAME__y[] = "y";
static char warehouse_pick_place_interfaces__msg__BoxPose__FIELD_NAME__z[] = "z";
static char warehouse_pick_place_interfaces__msg__BoxPose__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field warehouse_pick_place_interfaces__msg__BoxPose__FIELDS[] = {
  {
    {warehouse_pick_place_interfaces__msg__BoxPose__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__msg__BoxPose__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__msg__BoxPose__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__msg__BoxPose__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
warehouse_pick_place_interfaces__msg__BoxPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {warehouse_pick_place_interfaces__msg__BoxPose__TYPE_NAME, 43, 43},
      {warehouse_pick_place_interfaces__msg__BoxPose__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 z\n"
  "float64 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
warehouse_pick_place_interfaces__msg__BoxPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {warehouse_pick_place_interfaces__msg__BoxPose__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 41, 41},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
warehouse_pick_place_interfaces__msg__BoxPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *warehouse_pick_place_interfaces__msg__BoxPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
