#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__srv__SetBoxAttached_Request() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__init(msg: *mut SetBoxAttached_Request) -> bool;
    fn warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBoxAttached_Request>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBoxAttached_Request>);
    fn warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBoxAttached_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBoxAttached_Request>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__srv__SetBoxAttached_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBoxAttached_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub box_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attached: bool,

}



impl Default for SetBoxAttached_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBoxAttached_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__SetBoxAttached_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBoxAttached_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBoxAttached_Request where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/srv/SetBoxAttached_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__srv__SetBoxAttached_Request() }
  }
}


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__srv__SetBoxAttached_Response() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__init(msg: *mut SetBoxAttached_Response) -> bool;
    fn warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBoxAttached_Response>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBoxAttached_Response>);
    fn warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBoxAttached_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBoxAttached_Response>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__srv__SetBoxAttached_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBoxAttached_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetBoxAttached_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBoxAttached_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__SetBoxAttached_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBoxAttached_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBoxAttached_Response where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/srv/SetBoxAttached_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__srv__SetBoxAttached_Response() }
  }
}


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__srv__DetectBoxes_Request() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__srv__DetectBoxes_Request__init(msg: *mut DetectBoxes_Request) -> bool;
    fn warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectBoxes_Request>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectBoxes_Request>);
    fn warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectBoxes_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectBoxes_Request>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__srv__DetectBoxes_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectBoxes_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for DetectBoxes_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__srv__DetectBoxes_Request__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__srv__DetectBoxes_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectBoxes_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectBoxes_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectBoxes_Request where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/srv/DetectBoxes_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__srv__DetectBoxes_Request() }
  }
}


#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__srv__DetectBoxes_Response() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_pick_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_pick_place_interfaces__srv__DetectBoxes_Response__init(msg: *mut DetectBoxes_Response) -> bool;
    fn warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectBoxes_Response>, size: usize) -> bool;
    fn warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectBoxes_Response>);
    fn warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectBoxes_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectBoxes_Response>) -> bool;
}

// Corresponds to warehouse_pick_place_interfaces__srv__DetectBoxes_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectBoxes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub boxes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::BoxPose>,

}



impl Default for DetectBoxes_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_pick_place_interfaces__srv__DetectBoxes_Response__init(&mut msg as *mut _) {
        panic!("Call to warehouse_pick_place_interfaces__srv__DetectBoxes_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectBoxes_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectBoxes_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectBoxes_Response where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_pick_place_interfaces/srv/DetectBoxes_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_pick_place_interfaces__srv__DetectBoxes_Response() }
  }
}






#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__srv__SetBoxAttached() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_pick_place_interfaces__srv__SetBoxAttached
#[allow(missing_docs, non_camel_case_types)]
pub struct SetBoxAttached;

impl rosidl_runtime_rs::Service for SetBoxAttached {
    type Request = SetBoxAttached_Request;
    type Response = SetBoxAttached_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__srv__SetBoxAttached() }
    }
}




#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__srv__DetectBoxes() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_pick_place_interfaces__srv__DetectBoxes
#[allow(missing_docs, non_camel_case_types)]
pub struct DetectBoxes;

impl rosidl_runtime_rs::Service for DetectBoxes {
    type Request = DetectBoxes_Request;
    type Response = DetectBoxes_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__srv__DetectBoxes() }
    }
}


