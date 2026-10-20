// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from warehouse_pick_place_interfaces:srv/SetBoxAttached.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/srv/set_box_attached.hpp"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__TRAITS_HPP_
#define WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace warehouse_pick_place_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBoxAttached_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: box_name
  {
    out << "box_name: ";
    rosidl_generator_traits::value_to_yaml(msg.box_name, out);
    out << ", ";
  }

  // member: attached
  {
    out << "attached: ";
    rosidl_generator_traits::value_to_yaml(msg.attached, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBoxAttached_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: box_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_name: ";
    rosidl_generator_traits::value_to_yaml(msg.box_name, out);
    out << "\n";
  }

  // member: attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attached: ";
    rosidl_generator_traits::value_to_yaml(msg.attached, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBoxAttached_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace warehouse_pick_place_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_pick_place_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_pick_place_interfaces::srv::SetBoxAttached_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_pick_place_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_pick_place_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_pick_place_interfaces::srv::SetBoxAttached_Request & msg)
{
  return warehouse_pick_place_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>()
{
  return "warehouse_pick_place_interfaces::srv::SetBoxAttached_Request";
}

template<>
inline const char * name<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>()
{
  return "warehouse_pick_place_interfaces/srv/SetBoxAttached_Request";
}

template<>
struct has_fixed_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace warehouse_pick_place_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBoxAttached_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBoxAttached_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBoxAttached_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace warehouse_pick_place_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_pick_place_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_pick_place_interfaces::srv::SetBoxAttached_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_pick_place_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_pick_place_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_pick_place_interfaces::srv::SetBoxAttached_Response & msg)
{
  return warehouse_pick_place_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>()
{
  return "warehouse_pick_place_interfaces::srv::SetBoxAttached_Response";
}

template<>
inline const char * name<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>()
{
  return "warehouse_pick_place_interfaces/srv/SetBoxAttached_Response";
}

template<>
struct has_fixed_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace warehouse_pick_place_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBoxAttached_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBoxAttached_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBoxAttached_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace warehouse_pick_place_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_pick_place_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_pick_place_interfaces::srv::SetBoxAttached_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_pick_place_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_pick_place_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_pick_place_interfaces::srv::SetBoxAttached_Event & msg)
{
  return warehouse_pick_place_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event>()
{
  return "warehouse_pick_place_interfaces::srv::SetBoxAttached_Event";
}

template<>
inline const char * name<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event>()
{
  return "warehouse_pick_place_interfaces/srv/SetBoxAttached_Event";
}

template<>
struct has_fixed_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>::value && has_bounded_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>::value> {};

template<>
struct is_message<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<warehouse_pick_place_interfaces::srv::SetBoxAttached>()
{
  return "warehouse_pick_place_interfaces::srv::SetBoxAttached";
}

template<>
inline const char * name<warehouse_pick_place_interfaces::srv::SetBoxAttached>()
{
  return "warehouse_pick_place_interfaces/srv/SetBoxAttached";
}

template<>
struct has_fixed_size<warehouse_pick_place_interfaces::srv::SetBoxAttached>
  : std::integral_constant<
    bool,
    has_fixed_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>::value &&
    has_fixed_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>::value
  >
{
};

template<>
struct has_bounded_size<warehouse_pick_place_interfaces::srv::SetBoxAttached>
  : std::integral_constant<
    bool,
    has_bounded_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>::value &&
    has_bounded_size<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>::value
  >
{
};

template<>
struct is_service<warehouse_pick_place_interfaces::srv::SetBoxAttached>
  : std::true_type
{
};

template<>
struct is_service_request<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>
  : std::true_type
{
};

template<>
struct is_service_response<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__TRAITS_HPP_
