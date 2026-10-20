// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from warehouse_pick_place_interfaces:srv/SetBoxAttached.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/srv/set_box_attached.hpp"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__STRUCT_HPP_
#define WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Request __attribute__((deprecated))
#else
# define DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Request __declspec(deprecated)
#endif

namespace warehouse_pick_place_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBoxAttached_Request_
{
  using Type = SetBoxAttached_Request_<ContainerAllocator>;

  explicit SetBoxAttached_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->box_name = "";
      this->attached = false;
    }
  }

  explicit SetBoxAttached_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : box_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->box_name = "";
      this->attached = false;
    }
  }

  // field types and members
  using _box_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _box_name_type box_name;
  using _attached_type =
    bool;
  _attached_type attached;

  // setters for named parameter idiom
  Type & set__box_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->box_name = _arg;
    return *this;
  }
  Type & set__attached(
    const bool & _arg)
  {
    this->attached = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Request
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Request
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBoxAttached_Request_ & other) const
  {
    if (this->box_name != other.box_name) {
      return false;
    }
    if (this->attached != other.attached) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBoxAttached_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBoxAttached_Request_

// alias to use template instance with default allocator
using SetBoxAttached_Request =
  warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace warehouse_pick_place_interfaces


#ifndef _WIN32
# define DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Response __attribute__((deprecated))
#else
# define DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Response __declspec(deprecated)
#endif

namespace warehouse_pick_place_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBoxAttached_Response_
{
  using Type = SetBoxAttached_Response_<ContainerAllocator>;

  explicit SetBoxAttached_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetBoxAttached_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Response
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Response
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBoxAttached_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBoxAttached_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBoxAttached_Response_

// alias to use template instance with default allocator
using SetBoxAttached_Response =
  warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace warehouse_pick_place_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Event __attribute__((deprecated))
#else
# define DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Event __declspec(deprecated)
#endif

namespace warehouse_pick_place_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBoxAttached_Event_
{
  using Type = SetBoxAttached_Event_<ContainerAllocator>;

  explicit SetBoxAttached_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetBoxAttached_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<warehouse_pick_place_interfaces::srv::SetBoxAttached_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<warehouse_pick_place_interfaces::srv::SetBoxAttached_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Event
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__warehouse_pick_place_interfaces__srv__SetBoxAttached_Event
    std::shared_ptr<warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBoxAttached_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBoxAttached_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBoxAttached_Event_

// alias to use template instance with default allocator
using SetBoxAttached_Event =
  warehouse_pick_place_interfaces::srv::SetBoxAttached_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace warehouse_pick_place_interfaces

namespace warehouse_pick_place_interfaces
{

namespace srv
{

struct SetBoxAttached
{
  using Request = warehouse_pick_place_interfaces::srv::SetBoxAttached_Request;
  using Response = warehouse_pick_place_interfaces::srv::SetBoxAttached_Response;
  using Event = warehouse_pick_place_interfaces::srv::SetBoxAttached_Event;
};

}  // namespace srv

}  // namespace warehouse_pick_place_interfaces

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__STRUCT_HPP_
