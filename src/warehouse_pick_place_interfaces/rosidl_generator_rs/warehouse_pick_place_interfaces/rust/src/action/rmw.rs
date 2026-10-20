
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_Goal() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Goal__init(msg: *mut ExecuteTask_Goal) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_Goal>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_Goal>);
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteTask_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_Goal>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteTask_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub destination: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub box_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub box_poses: rosidl_runtime_rs::Sequence<super::super::msg::rmw::BoxPose>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,

}



impl Default for ExecuteTask_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__action__ExecuteTask_Goal__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__action__ExecuteTask_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteTask_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteTask_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteTask_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/action/ExecuteTask_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_Goal() }
  }
}


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_Result() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Result__init(msg: *mut ExecuteTask_Result) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_Result>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_Result>);
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteTask_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_Result>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteTask_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ExecuteTask_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__action__ExecuteTask_Result__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__action__ExecuteTask_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteTask_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteTask_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteTask_Result where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/action/ExecuteTask_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_Result() }
  }
}


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__init(msg: *mut ExecuteTask_Feedback) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_Feedback>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_Feedback>);
    fn warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteTask_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_Feedback>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteTask_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f32,

}



impl Default for ExecuteTask_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteTask_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteTask_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteTask_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/action/ExecuteTask_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_Feedback() }
  }
}


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__init(msg: *mut ExecuteTask_FeedbackMessage) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_FeedbackMessage>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_FeedbackMessage>);
    fn warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteTask_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_FeedbackMessage>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteTask_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ExecuteTask_Feedback,

}



impl Default for ExecuteTask_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteTask_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteTask_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteTask_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/action/ExecuteTask_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage() }
  }
}




#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__init(msg: *mut ExecuteTask_SendGoal_Request) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_SendGoal_Request>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_SendGoal_Request>);
    fn warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteTask_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_SendGoal_Request>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteTask_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ExecuteTask_Goal,

}



impl Default for ExecuteTask_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteTask_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteTask_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteTask_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/action/ExecuteTask_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request() }
  }
}


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__init(msg: *mut ExecuteTask_SendGoal_Response) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_SendGoal_Response>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_SendGoal_Response>);
    fn warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteTask_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_SendGoal_Response>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteTask_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ExecuteTask_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteTask_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteTask_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteTask_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/action/ExecuteTask_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response() }
  }
}


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__init(msg: *mut ExecuteTask_GetResult_Request) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_GetResult_Request>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_GetResult_Request>);
    fn warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteTask_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_GetResult_Request>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteTask_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ExecuteTask_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteTask_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteTask_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteTask_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/action/ExecuteTask_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request() }
  }
}


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__init(msg: *mut ExecuteTask_GetResult_Response) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_GetResult_Response>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_GetResult_Response>);
    fn warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteTask_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteTask_GetResult_Response>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteTask_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ExecuteTask_Result,

}



impl Default for ExecuteTask_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteTask_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteTask_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteTask_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/action/ExecuteTask_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response() }
  }
}






#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteTask_SendGoal;

impl rosidl_runtime_rs::Service for ExecuteTask_SendGoal {
    type Request = ExecuteTask_SendGoal_Request;
    type Response = ExecuteTask_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal() }
    }
}




#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_pick_place_interfaces__action__ExecuteTask_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteTask_GetResult;

impl rosidl_runtime_rs::Service for ExecuteTask_GetResult {
    type Request = ExecuteTask_GetResult_Request;
    type Response = ExecuteTask_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__action__ExecuteTask_GetResult() }
    }
}


