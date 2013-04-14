#include <TaoApiCpp/domain/WlbOrder.h>
QString WlbOrder::getBuyerNick() const {
  return buyerNick;
}
void WlbOrder::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

qlonglong WlbOrder::getCancelOrderStatus() const {
  return cancelOrderStatus;
}
void WlbOrder::setCancelOrderStatus (qlonglong cancelOrderStatus) {
  this->cancelOrderStatus = cancelOrderStatus;
}

QString WlbOrder::getConfirmStatus() const {
  return confirmStatus;
}
void WlbOrder::setConfirmStatus (QString confirmStatus) {
  this->confirmStatus = confirmStatus;
}

QDateTime WlbOrder::getExpectEndTime() const {
  return expectEndTime;
}
void WlbOrder::setExpectEndTime (QDateTime expectEndTime) {
  this->expectEndTime = expectEndTime;
}

QDateTime WlbOrder::getExpectStartTime() const {
  return expectStartTime;
}
void WlbOrder::setExpectStartTime (QDateTime expectStartTime) {
  this->expectStartTime = expectStartTime;
}

QString WlbOrder::getInvoiceInfo() const {
  return invoiceInfo;
}
void WlbOrder::setInvoiceInfo (QString invoiceInfo) {
  this->invoiceInfo = invoiceInfo;
}

qlonglong WlbOrder::getItemKindsCount() const {
  return itemKindsCount;
}
void WlbOrder::setItemKindsCount (qlonglong itemKindsCount) {
  this->itemKindsCount = itemKindsCount;
}

QString WlbOrder::getOperateType() const {
  return operateType;
}
void WlbOrder::setOperateType (QString operateType) {
  this->operateType = operateType;
}

QString WlbOrder::getOrderCode() const {
  return orderCode;
}
void WlbOrder::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
}

qlonglong WlbOrder::getOrderFlag() const {
  return orderFlag;
}
void WlbOrder::setOrderFlag (qlonglong orderFlag) {
  this->orderFlag = orderFlag;
}

QString WlbOrder::getOrderSource() const {
  return orderSource;
}
void WlbOrder::setOrderSource (QString orderSource) {
  this->orderSource = orderSource;
}

QString WlbOrder::getOrderSourceCode() const {
  return orderSourceCode;
}
void WlbOrder::setOrderSourceCode (QString orderSourceCode) {
  this->orderSourceCode = orderSourceCode;
}

QString WlbOrder::getOrderStatus() const {
  return orderStatus;
}
void WlbOrder::setOrderStatus (QString orderStatus) {
  this->orderStatus = orderStatus;
}

QString WlbOrder::getOrderStatusReason() const {
  return orderStatusReason;
}
void WlbOrder::setOrderStatusReason (QString orderStatusReason) {
  this->orderStatusReason = orderStatusReason;
}

QString WlbOrder::getOrderSubType() const {
  return orderSubType;
}
void WlbOrder::setOrderSubType (QString orderSubType) {
  this->orderSubType = orderSubType;
}

QString WlbOrder::getOrderType() const {
  return orderType;
}
void WlbOrder::setOrderType (QString orderType) {
  this->orderType = orderType;
}

QString WlbOrder::getPrevOrderCode() const {
  return prevOrderCode;
}
void WlbOrder::setPrevOrderCode (QString prevOrderCode) {
  this->prevOrderCode = prevOrderCode;
}

qlonglong WlbOrder::getRealKindsCount() const {
  return realKindsCount;
}
void WlbOrder::setRealKindsCount (qlonglong realKindsCount) {
  this->realKindsCount = realKindsCount;
}

qlonglong WlbOrder::getReceivableAmount() const {
  return receivableAmount;
}
void WlbOrder::setReceivableAmount (qlonglong receivableAmount) {
  this->receivableAmount = receivableAmount;
}

QString WlbOrder::getReceiverAddress() const {
  return receiverAddress;
}
void WlbOrder::setReceiverAddress (QString receiverAddress) {
  this->receiverAddress = receiverAddress;
}

QString WlbOrder::getReceiverArea() const {
  return receiverArea;
}
void WlbOrder::setReceiverArea (QString receiverArea) {
  this->receiverArea = receiverArea;
}

QString WlbOrder::getReceiverCity() const {
  return receiverCity;
}
void WlbOrder::setReceiverCity (QString receiverCity) {
  this->receiverCity = receiverCity;
}

QString WlbOrder::getReceiverMail() const {
  return receiverMail;
}
void WlbOrder::setReceiverMail (QString receiverMail) {
  this->receiverMail = receiverMail;
}

QString WlbOrder::getReceiverMobile() const {
  return receiverMobile;
}
void WlbOrder::setReceiverMobile (QString receiverMobile) {
  this->receiverMobile = receiverMobile;
}

QString WlbOrder::getReceiverName() const {
  return receiverName;
}
void WlbOrder::setReceiverName (QString receiverName) {
  this->receiverName = receiverName;
}

QString WlbOrder::getReceiverPhone() const {
  return receiverPhone;
}
void WlbOrder::setReceiverPhone (QString receiverPhone) {
  this->receiverPhone = receiverPhone;
}

QString WlbOrder::getReceiverProvince() const {
  return receiverProvince;
}
void WlbOrder::setReceiverProvince (QString receiverProvince) {
  this->receiverProvince = receiverProvince;
}

QString WlbOrder::getReceiverWangwang() const {
  return receiverWangwang;
}
void WlbOrder::setReceiverWangwang (QString receiverWangwang) {
  this->receiverWangwang = receiverWangwang;
}

QString WlbOrder::getReceiverZipCode() const {
  return receiverZipCode;
}
void WlbOrder::setReceiverZipCode (QString receiverZipCode) {
  this->receiverZipCode = receiverZipCode;
}

QString WlbOrder::getRemark() const {
  return remark;
}
void WlbOrder::setRemark (QString remark) {
  this->remark = remark;
}

QString WlbOrder::getScheduleDay() const {
  return scheduleDay;
}
void WlbOrder::setScheduleDay (QString scheduleDay) {
  this->scheduleDay = scheduleDay;
}

QString WlbOrder::getScheduleEnd() const {
  return scheduleEnd;
}
void WlbOrder::setScheduleEnd (QString scheduleEnd) {
  this->scheduleEnd = scheduleEnd;
}

qlonglong WlbOrder::getScheduleSpeed() const {
  return scheduleSpeed;
}
void WlbOrder::setScheduleSpeed (qlonglong scheduleSpeed) {
  this->scheduleSpeed = scheduleSpeed;
}

QString WlbOrder::getScheduleStart() const {
  return scheduleStart;
}
void WlbOrder::setScheduleStart (QString scheduleStart) {
  this->scheduleStart = scheduleStart;
}

QString WlbOrder::getSenderAddress() const {
  return senderAddress;
}
void WlbOrder::setSenderAddress (QString senderAddress) {
  this->senderAddress = senderAddress;
}

QString WlbOrder::getSenderArea() const {
  return senderArea;
}
void WlbOrder::setSenderArea (QString senderArea) {
  this->senderArea = senderArea;
}

QString WlbOrder::getSenderCity() const {
  return senderCity;
}
void WlbOrder::setSenderCity (QString senderCity) {
  this->senderCity = senderCity;
}

QString WlbOrder::getSenderEmail() const {
  return senderEmail;
}
void WlbOrder::setSenderEmail (QString senderEmail) {
  this->senderEmail = senderEmail;
}

QString WlbOrder::getSenderMobile() const {
  return senderMobile;
}
void WlbOrder::setSenderMobile (QString senderMobile) {
  this->senderMobile = senderMobile;
}

QString WlbOrder::getSenderName() const {
  return senderName;
}
void WlbOrder::setSenderName (QString senderName) {
  this->senderName = senderName;
}

QString WlbOrder::getSenderPhone() const {
  return senderPhone;
}
void WlbOrder::setSenderPhone (QString senderPhone) {
  this->senderPhone = senderPhone;
}

QString WlbOrder::getSenderProvince() const {
  return senderProvince;
}
void WlbOrder::setSenderProvince (QString senderProvince) {
  this->senderProvince = senderProvince;
}

QString WlbOrder::getSenderZipCode() const {
  return senderZipCode;
}
void WlbOrder::setSenderZipCode (QString senderZipCode) {
  this->senderZipCode = senderZipCode;
}

qlonglong WlbOrder::getServiceFee() const {
  return serviceFee;
}
void WlbOrder::setServiceFee (qlonglong serviceFee) {
  this->serviceFee = serviceFee;
}

QString WlbOrder::getShippingType() const {
  return shippingType;
}
void WlbOrder::setShippingType (QString shippingType) {
  this->shippingType = shippingType;
}

QString WlbOrder::getStoreCode() const {
  return storeCode;
}
void WlbOrder::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}

QString WlbOrder::getTmsTpCode() const {
  return tmsTpCode;
}
void WlbOrder::setTmsTpCode (QString tmsTpCode) {
  this->tmsTpCode = tmsTpCode;
}

qlonglong WlbOrder::getTotalAmount() const {
  return totalAmount;
}
void WlbOrder::setTotalAmount (qlonglong totalAmount) {
  this->totalAmount = totalAmount;
}

qlonglong WlbOrder::getUserId() const {
  return userId;
}
void WlbOrder::setUserId (qlonglong userId) {
  this->userId = userId;
}

QString WlbOrder::getUserNick() const {
  return userNick;
}
void WlbOrder::setUserNick (QString userNick) {
  this->userNick = userNick;
}


void WlbOrder::parseResponse() {
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("cancel_order_status")) {
  cancelOrderStatus = responseParser->getNumByName("cancel_order_status");
  }
  if (responseParser->hasName("confirm_status")) {
  confirmStatus = responseParser->getStrByName("confirm_status");
  }
  if (responseParser->hasName("expect_end_time")) {
  expectEndTime = responseParser->getDateByName("expect_end_time");
  }
  if (responseParser->hasName("expect_start_time")) {
  expectStartTime = responseParser->getDateByName("expect_start_time");
  }
  if (responseParser->hasName("invoice_info")) {
  invoiceInfo = responseParser->getStrByName("invoice_info");
  }
  if (responseParser->hasName("item_kinds_count")) {
  itemKindsCount = responseParser->getNumByName("item_kinds_count");
  }
  if (responseParser->hasName("operate_type")) {
  operateType = responseParser->getStrByName("operate_type");
  }
  if (responseParser->hasName("order_code")) {
  orderCode = responseParser->getStrByName("order_code");
  }
  if (responseParser->hasName("order_flag")) {
  orderFlag = responseParser->getNumByName("order_flag");
  }
  if (responseParser->hasName("order_source")) {
  orderSource = responseParser->getStrByName("order_source");
  }
  if (responseParser->hasName("order_source_code")) {
  orderSourceCode = responseParser->getStrByName("order_source_code");
  }
  if (responseParser->hasName("order_status")) {
  orderStatus = responseParser->getStrByName("order_status");
  }
  if (responseParser->hasName("order_status_reason")) {
  orderStatusReason = responseParser->getStrByName("order_status_reason");
  }
  if (responseParser->hasName("order_sub_type")) {
  orderSubType = responseParser->getStrByName("order_sub_type");
  }
  if (responseParser->hasName("order_type")) {
  orderType = responseParser->getStrByName("order_type");
  }
  if (responseParser->hasName("prev_order_code")) {
  prevOrderCode = responseParser->getStrByName("prev_order_code");
  }
  if (responseParser->hasName("real_kinds_count")) {
  realKindsCount = responseParser->getNumByName("real_kinds_count");
  }
  if (responseParser->hasName("receivable_amount")) {
  receivableAmount = responseParser->getNumByName("receivable_amount");
  }
  if (responseParser->hasName("receiver_address")) {
  receiverAddress = responseParser->getStrByName("receiver_address");
  }
  if (responseParser->hasName("receiver_area")) {
  receiverArea = responseParser->getStrByName("receiver_area");
  }
  if (responseParser->hasName("receiver_city")) {
  receiverCity = responseParser->getStrByName("receiver_city");
  }
  if (responseParser->hasName("receiver_mail")) {
  receiverMail = responseParser->getStrByName("receiver_mail");
  }
  if (responseParser->hasName("receiver_mobile")) {
  receiverMobile = responseParser->getStrByName("receiver_mobile");
  }
  if (responseParser->hasName("receiver_name")) {
  receiverName = responseParser->getStrByName("receiver_name");
  }
  if (responseParser->hasName("receiver_phone")) {
  receiverPhone = responseParser->getStrByName("receiver_phone");
  }
  if (responseParser->hasName("receiver_province")) {
  receiverProvince = responseParser->getStrByName("receiver_province");
  }
  if (responseParser->hasName("receiver_wangwang")) {
  receiverWangwang = responseParser->getStrByName("receiver_wangwang");
  }
  if (responseParser->hasName("receiver_zip_code")) {
  receiverZipCode = responseParser->getStrByName("receiver_zip_code");
  }
  if (responseParser->hasName("remark")) {
  remark = responseParser->getStrByName("remark");
  }
  if (responseParser->hasName("schedule_day")) {
  scheduleDay = responseParser->getStrByName("schedule_day");
  }
  if (responseParser->hasName("schedule_end")) {
  scheduleEnd = responseParser->getStrByName("schedule_end");
  }
  if (responseParser->hasName("schedule_speed")) {
  scheduleSpeed = responseParser->getNumByName("schedule_speed");
  }
  if (responseParser->hasName("schedule_start")) {
  scheduleStart = responseParser->getStrByName("schedule_start");
  }
  if (responseParser->hasName("sender_address")) {
  senderAddress = responseParser->getStrByName("sender_address");
  }
  if (responseParser->hasName("sender_area")) {
  senderArea = responseParser->getStrByName("sender_area");
  }
  if (responseParser->hasName("sender_city")) {
  senderCity = responseParser->getStrByName("sender_city");
  }
  if (responseParser->hasName("sender_email")) {
  senderEmail = responseParser->getStrByName("sender_email");
  }
  if (responseParser->hasName("sender_mobile")) {
  senderMobile = responseParser->getStrByName("sender_mobile");
  }
  if (responseParser->hasName("sender_name")) {
  senderName = responseParser->getStrByName("sender_name");
  }
  if (responseParser->hasName("sender_phone")) {
  senderPhone = responseParser->getStrByName("sender_phone");
  }
  if (responseParser->hasName("sender_province")) {
  senderProvince = responseParser->getStrByName("sender_province");
  }
  if (responseParser->hasName("sender_zip_code")) {
  senderZipCode = responseParser->getStrByName("sender_zip_code");
  }
  if (responseParser->hasName("service_fee")) {
  serviceFee = responseParser->getNumByName("service_fee");
  }
  if (responseParser->hasName("shipping_type")) {
  shippingType = responseParser->getStrByName("shipping_type");
  }
  if (responseParser->hasName("store_code")) {
  storeCode = responseParser->getStrByName("store_code");
  }
  if (responseParser->hasName("tms_tp_code")) {
  tmsTpCode = responseParser->getStrByName("tms_tp_code");
  }
  if (responseParser->hasName("total_amount")) {
  totalAmount = responseParser->getNumByName("total_amount");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("user_nick")) {
  userNick = responseParser->getStrByName("user_nick");
  }

}

