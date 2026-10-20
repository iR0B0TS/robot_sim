// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from warehouse_pick_place_interfaces:msg/BoxPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "warehouse_pick_place_interfaces/msg/detail/box_pose__functions.h"
#include "warehouse_pick_place_interfaces/msg/detail/box_pose__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace warehouse_pick_place_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BoxPose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) warehouse_pick_place_interfaces::msg::BoxPose(_init);
}

void BoxPose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<warehouse_pick_place_interfaces::msg::BoxPose *>(message_memory);
  typed_message->~BoxPose();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoxPose_message_member_array[4] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_pick_place_interfaces::msg::BoxPose, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_pick_place_interfaces::msg::BoxPose, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_pick_place_interfaces::msg::BoxPose, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_pick_place_interfaces::msg::BoxPose, yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoxPose_message_members = {
  "warehouse_pick_place_interfaces::msg",  // message namespace
  "BoxPose",  // message name
  4,  // number of fields
  sizeof(warehouse_pick_place_interfaces::msg::BoxPose),
  false,  // has_any_key_member_
  BoxPose_message_member_array,  // message members
  BoxPose_init_function,  // function to initialize message memory (memory has to be allocated)
  BoxPose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoxPose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoxPose_message_members,
  get_message_typesupport_handle_function,
  &warehouse_pick_place_interfaces__msg__BoxPose__get_type_hash,
  &warehouse_pick_place_interfaces__msg__BoxPose__get_type_description,
  &warehouse_pick_place_interfaces__msg__BoxPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace warehouse_pick_place_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<warehouse_pick_place_interfaces::msg::BoxPose>()
{
  return &::warehouse_pick_place_interfaces::msg::rosidl_typesupport_introspection_cpp::BoxPose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, warehouse_pick_place_interfaces, msg, BoxPose)() {
  return &::warehouse_pick_place_interfaces::msg::rosidl_typesupport_introspection_cpp::BoxPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
