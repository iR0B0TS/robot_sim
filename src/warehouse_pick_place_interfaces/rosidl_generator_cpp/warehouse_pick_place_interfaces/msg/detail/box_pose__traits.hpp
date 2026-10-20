// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from warehouse_pick_place_interfaces:msg/BoxPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/msg/box_pose.hpp"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__TRAITS_HPP_
#define WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "warehouse_pick_place_interfaces/msg/detail/box_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace warehouse_pick_place_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoxPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoxPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoxPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace warehouse_pick_place_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_pick_place_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_pick_place_interfaces::msg::BoxPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_pick_place_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_pick_place_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_pick_place_interfaces::msg::BoxPose & msg)
{
  return warehouse_pick_place_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_pick_place_interfaces::msg::BoxPose>()
{
  return "warehouse_pick_place_interfaces::msg::BoxPose";
}

template<>
inline const char * name<warehouse_pick_place_interfaces::msg::BoxPose>()
{
  return "warehouse_pick_place_interfaces/msg/BoxPose";
}

template<>
struct has_fixed_size<warehouse_pick_place_interfaces::msg::BoxPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<warehouse_pick_place_interfaces::msg::BoxPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<warehouse_pick_place_interfaces::msg::BoxPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__TRAITS_HPP_
