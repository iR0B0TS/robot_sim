// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from warehouse_pick_place_interfaces:srv/DetectBoxes.idl
// generated code does not contain a copyright notice

#include "warehouse_pick_place_interfaces/srv/detail/detect_boxes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_warehouse_pick_place_interfaces
const rosidl_type_hash_t *
warehouse_pick_place_interfaces__srv__DetectBoxes__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0xd1, 0xac, 0xcd, 0x4a, 0x54, 0x3f, 0x2f,
      0xda, 0x71, 0x76, 0x81, 0x41, 0x60, 0xec, 0xda,
      0xbc, 0x85, 0x61, 0xcd, 0x9d, 0xf1, 0x70, 0x1c,
      0x47, 0xad, 0x4c, 0x7b, 0xe4, 0x01, 0x82, 0xc6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_warehouse_pick_place_interfaces
const rosidl_type_hash_t *
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0xa9, 0x1e, 0xac, 0xa3, 0x42, 0xe1, 0x67,
      0xd9, 0x0f, 0xc7, 0x3e, 0xe9, 0x3d, 0xb7, 0x5b,
      0x9f, 0x22, 0xf1, 0xec, 0xb9, 0x19, 0xc2, 0xa4,
      0xea, 0xce, 0xbf, 0x93, 0xc5, 0x97, 0x5b, 0xb5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_warehouse_pick_place_interfaces
const rosidl_type_hash_t *
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x1e, 0x08, 0x8f, 0x4e, 0xd9, 0x24, 0x16,
      0x8d, 0x4f, 0x1e, 0x33, 0xcb, 0x5b, 0xad, 0xdb,
      0x4e, 0x7e, 0x6a, 0x4f, 0xbd, 0xd2, 0xde, 0x79,
      0xdd, 0xaf, 0x18, 0xe8, 0x30, 0x2d, 0x2f, 0x3e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_warehouse_pick_place_interfaces
const rosidl_type_hash_t *
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x15, 0x9b, 0x90, 0x3c, 0x31, 0xba, 0xff,
      0x0d, 0x5c, 0x61, 0x5a, 0x34, 0xea, 0xc9, 0x61,
      0xc5, 0x9e, 0x54, 0xc7, 0xf7, 0xfa, 0x26, 0x38,
      0xbc, 0x49, 0x4a, 0x9a, 0x1d, 0x96, 0x7c, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "warehouse_pick_place_interfaces/msg/detail/box_pose__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t warehouse_pick_place_interfaces__msg__BoxPose__EXPECTED_HASH = {1, {
    0xbd, 0x91, 0x89, 0x52, 0x0b, 0xda, 0x6e, 0xae,
    0xa2, 0x08, 0xf0, 0xa7, 0x2e, 0x2d, 0x2b, 0x74,
    0x8d, 0x29, 0x7e, 0xf3, 0xbb, 0x1f, 0xa4, 0xe1,
    0x03, 0x52, 0x62, 0x0b, 0x45, 0xf4, 0x15, 0x7b,
  }};
#endif

static char warehouse_pick_place_interfaces__srv__DetectBoxes__TYPE_NAME[] = "warehouse_pick_place_interfaces/srv/DetectBoxes";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char warehouse_pick_place_interfaces__msg__BoxPose__TYPE_NAME[] = "warehouse_pick_place_interfaces/msg/BoxPose";
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Event__TYPE_NAME[] = "warehouse_pick_place_interfaces/srv/DetectBoxes_Event";
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Request__TYPE_NAME[] = "warehouse_pick_place_interfaces/srv/DetectBoxes_Request";
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Response__TYPE_NAME[] = "warehouse_pick_place_interfaces/srv/DetectBoxes_Response";

// Define type names, field names, and default values
static char warehouse_pick_place_interfaces__srv__DetectBoxes__FIELD_NAME__request_message[] = "request_message";
static char warehouse_pick_place_interfaces__srv__DetectBoxes__FIELD_NAME__response_message[] = "response_message";
static char warehouse_pick_place_interfaces__srv__DetectBoxes__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field warehouse_pick_place_interfaces__srv__DetectBoxes__FIELDS[] = {
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Event__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription warehouse_pick_place_interfaces__srv__DetectBoxes__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__msg__BoxPose__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Event__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
warehouse_pick_place_interfaces__srv__DetectBoxes__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {warehouse_pick_place_interfaces__srv__DetectBoxes__TYPE_NAME, 47, 47},
      {warehouse_pick_place_interfaces__srv__DetectBoxes__FIELDS, 3, 3},
    },
    {warehouse_pick_place_interfaces__srv__DetectBoxes__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&warehouse_pick_place_interfaces__msg__BoxPose__EXPECTED_HASH, warehouse_pick_place_interfaces__msg__BoxPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = warehouse_pick_place_interfaces__msg__BoxPose__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = warehouse_pick_place_interfaces__srv__DetectBoxes_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = warehouse_pick_place_interfaces__srv__DetectBoxes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = warehouse_pick_place_interfaces__srv__DetectBoxes_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field warehouse_pick_place_interfaces__srv__DetectBoxes_Request__FIELDS[] = {
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 55, 55},
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Response__FIELD_NAME__success[] = "success";
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Response__FIELD_NAME__message[] = "message";
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Response__FIELD_NAME__boxes[] = "boxes";

static rosidl_runtime_c__type_description__Field warehouse_pick_place_interfaces__srv__DetectBoxes_Response__FIELDS[] = {
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__FIELD_NAME__boxes, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {warehouse_pick_place_interfaces__msg__BoxPose__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription warehouse_pick_place_interfaces__srv__DetectBoxes_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {warehouse_pick_place_interfaces__msg__BoxPose__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 56, 56},
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__FIELDS, 3, 3},
    },
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&warehouse_pick_place_interfaces__msg__BoxPose__EXPECTED_HASH, warehouse_pick_place_interfaces__msg__BoxPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = warehouse_pick_place_interfaces__msg__BoxPose__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Event__FIELD_NAME__info[] = "info";
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Event__FIELD_NAME__request[] = "request";
static char warehouse_pick_place_interfaces__srv__DetectBoxes_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field warehouse_pick_place_interfaces__srv__DetectBoxes_Event__FIELDS[] = {
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription warehouse_pick_place_interfaces__srv__DetectBoxes_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__msg__BoxPose__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Event__TYPE_NAME, 53, 53},
      {warehouse_pick_place_interfaces__srv__DetectBoxes_Event__FIELDS, 3, 3},
    },
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&warehouse_pick_place_interfaces__msg__BoxPose__EXPECTED_HASH, warehouse_pick_place_interfaces__msg__BoxPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = warehouse_pick_place_interfaces__msg__BoxPose__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = warehouse_pick_place_interfaces__srv__DetectBoxes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = warehouse_pick_place_interfaces__srv__DetectBoxes_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "---\n"
  "bool success\n"
  "string message\n"
  "BoxPose[] boxes";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
warehouse_pick_place_interfaces__srv__DetectBoxes__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {warehouse_pick_place_interfaces__srv__DetectBoxes__TYPE_NAME, 47, 47},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 55, 55},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {warehouse_pick_place_interfaces__srv__DetectBoxes_Event__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
warehouse_pick_place_interfaces__srv__DetectBoxes__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *warehouse_pick_place_interfaces__srv__DetectBoxes__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *warehouse_pick_place_interfaces__msg__BoxPose__get_individual_type_description_source(NULL);
    sources[4] = *warehouse_pick_place_interfaces__srv__DetectBoxes_Event__get_individual_type_description_source(NULL);
    sources[5] = *warehouse_pick_place_interfaces__srv__DetectBoxes_Request__get_individual_type_description_source(NULL);
    sources[6] = *warehouse_pick_place_interfaces__srv__DetectBoxes_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *warehouse_pick_place_interfaces__srv__DetectBoxes_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *warehouse_pick_place_interfaces__srv__DetectBoxes_Response__get_individual_type_description_source(NULL),
    sources[1] = *warehouse_pick_place_interfaces__msg__BoxPose__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *warehouse_pick_place_interfaces__srv__DetectBoxes_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *warehouse_pick_place_interfaces__msg__BoxPose__get_individual_type_description_source(NULL);
    sources[4] = *warehouse_pick_place_interfaces__srv__DetectBoxes_Request__get_individual_type_description_source(NULL);
    sources[5] = *warehouse_pick_place_interfaces__srv__DetectBoxes_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
