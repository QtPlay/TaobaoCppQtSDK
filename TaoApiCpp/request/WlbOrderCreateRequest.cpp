#include <TaoApiCpp/request/WlbOrderCreateRequest.h>

QString WlbOrderCreateRequest::getApiMethodName() const {
  return "taobao.wlb.order.create";
}

QString WlbOrderCreateRequest::getAlipayNo() const {
  return alipayNo;
}
void WlbOrderCreateRequest::setAlipayNo (QString alipayNo) {
  this->alipayNo = alipayNo;
  appParams.insert("alipay_no", alipayNo);
}

QString WlbOrderCreateRequest::getAttributes() const {
  return attributes;
}
void WlbOrderCreateRequest::setAttributes (QString attributes) {
  this->attributes = attributes;
  appParams.insert("attributes", attributes);
}

QString WlbOrderCreateRequest::getBuyerNick() const {
  return buyerNick;
}
void WlbOrderCreateRequest::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
  appParams.insert("buyer_nick", buyerNick);
}

QDateTime WlbOrderCreateRequest::getExpectEndTime() const {
  return expectEndTime;
}
void WlbOrderCreateRequest::setExpectEndTime (QDateTime expectEndTime) {
  this->expectEndTime = expectEndTime;
  appParams.insert("expect_end_time", expectEndTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime WlbOrderCreateRequest::getExpectStartTime() const {
  return expectStartTime;
}
void WlbOrderCreateRequest::setExpectStartTime (QDateTime expectStartTime) {
  this->expectStartTime = expectStartTime;
  appParams.insert("expect_start_time", expectStartTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WlbOrderCreateRequest::getInvoinceInfo() const {
  return invoinceInfo;
}
void WlbOrderCreateRequest::setInvoinceInfo (QString invoinceInfo) {
  this->invoinceInfo = invoinceInfo;
  appParams.insert("invoince_info", invoinceInfo);
}

bool WlbOrderCreateRequest::getIsFinished() const {
  return isFinished;
}
void WlbOrderCreateRequest::setIsFinished (bool isFinished) {
  this->isFinished = isFinished;
  appParams.insert("is_finished", isFinished? "true": "false");
}

QString WlbOrderCreateRequest::getOrderCode() const {
  return orderCode;
}
void WlbOrderCreateRequest::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
  appParams.insert("order_code", orderCode);
}

QString WlbOrderCreateRequest::getOrderFlag() const {
  return orderFlag;
}
void WlbOrderCreateRequest::setOrderFlag (QString orderFlag) {
  this->orderFlag = orderFlag;
  appParams.insert("order_flag", orderFlag);
}

QString WlbOrderCreateRequest::getOrderItemList() const {
  return orderItemList;
}
void WlbOrderCreateRequest::setOrderItemList (QString orderItemList) {
  this->orderItemList = orderItemList;
  appParams.insert("order_item_list", orderItemList);
}

QString WlbOrderCreateRequest::getOrderSubType() const {
  return orderSubType;
}
void WlbOrderCreateRequest::setOrderSubType (QString orderSubType) {
  this->orderSubType = orderSubType;
  appParams.insert("order_sub_type", orderSubType);
}

QString WlbOrderCreateRequest::getOrderType() const {
  return orderType;
}
void WlbOrderCreateRequest::setOrderType (QString orderType) {
  this->orderType = orderType;
  appParams.insert("order_type", orderType);
}

QString WlbOrderCreateRequest::getOutBizCode() const {
  return outBizCode;
}
void WlbOrderCreateRequest::setOutBizCode (QString outBizCode) {
  this->outBizCode = outBizCode;
  appParams.insert("out_biz_code", outBizCode);
}

qlonglong WlbOrderCreateRequest::getPackageCount() const {
  return packageCount;
}
void WlbOrderCreateRequest::setPackageCount (qlonglong packageCount) {
  this->packageCount = packageCount;
  appParams.insert("package_count", QString::number(packageCount));
}

qlonglong WlbOrderCreateRequest::getPayableAmount() const {
  return payableAmount;
}
void WlbOrderCreateRequest::setPayableAmount (qlonglong payableAmount) {
  this->payableAmount = payableAmount;
  appParams.insert("payable_amount", QString::number(payableAmount));
}

QString WlbOrderCreateRequest::getPrevOrderCode() const {
  return prevOrderCode;
}
void WlbOrderCreateRequest::setPrevOrderCode (QString prevOrderCode) {
  this->prevOrderCode = prevOrderCode;
  appParams.insert("prev_order_code", prevOrderCode);
}

QString WlbOrderCreateRequest::getReceiverInfo() const {
  return receiverInfo;
}
void WlbOrderCreateRequest::setReceiverInfo (QString receiverInfo) {
  this->receiverInfo = receiverInfo;
  appParams.insert("receiver_info", receiverInfo);
}

QString WlbOrderCreateRequest::getRemark() const {
  return remark;
}
void WlbOrderCreateRequest::setRemark (QString remark) {
  this->remark = remark;
  appParams.insert("remark", remark);
}

QString WlbOrderCreateRequest::getScheduleEnd() const {
  return scheduleEnd;
}
void WlbOrderCreateRequest::setScheduleEnd (QString scheduleEnd) {
  this->scheduleEnd = scheduleEnd;
  appParams.insert("schedule_end", scheduleEnd);
}

QString WlbOrderCreateRequest::getScheduleStart() const {
  return scheduleStart;
}
void WlbOrderCreateRequest::setScheduleStart (QString scheduleStart) {
  this->scheduleStart = scheduleStart;
  appParams.insert("schedule_start", scheduleStart);
}

QString WlbOrderCreateRequest::getScheduleType() const {
  return scheduleType;
}
void WlbOrderCreateRequest::setScheduleType (QString scheduleType) {
  this->scheduleType = scheduleType;
  appParams.insert("schedule_type", scheduleType);
}

QString WlbOrderCreateRequest::getSenderInfo() const {
  return senderInfo;
}
void WlbOrderCreateRequest::setSenderInfo (QString senderInfo) {
  this->senderInfo = senderInfo;
  appParams.insert("sender_info", senderInfo);
}

qlonglong WlbOrderCreateRequest::getServiceFee() const {
  return serviceFee;
}
void WlbOrderCreateRequest::setServiceFee (qlonglong serviceFee) {
  this->serviceFee = serviceFee;
  appParams.insert("service_fee", QString::number(serviceFee));
}

QString WlbOrderCreateRequest::getStoreCode() const {
  return storeCode;
}
void WlbOrderCreateRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}

QString WlbOrderCreateRequest::getTmsInfo() const {
  return tmsInfo;
}
void WlbOrderCreateRequest::setTmsInfo (QString tmsInfo) {
  this->tmsInfo = tmsInfo;
  appParams.insert("tms_info", tmsInfo);
}

QString WlbOrderCreateRequest::getTmsOrderCode() const {
  return tmsOrderCode;
}
void WlbOrderCreateRequest::setTmsOrderCode (QString tmsOrderCode) {
  this->tmsOrderCode = tmsOrderCode;
  appParams.insert("tms_order_code", tmsOrderCode);
}

QString WlbOrderCreateRequest::getTmsServiceCode() const {
  return tmsServiceCode;
}
void WlbOrderCreateRequest::setTmsServiceCode (QString tmsServiceCode) {
  this->tmsServiceCode = tmsServiceCode;
  appParams.insert("tms_service_code", tmsServiceCode);
}

qlonglong WlbOrderCreateRequest::getTotalAmount() const {
  return totalAmount;
}
void WlbOrderCreateRequest::setTotalAmount (qlonglong totalAmount) {
  this->totalAmount = totalAmount;
  appParams.insert("total_amount", QString::number(totalAmount));
}



WlbOrderCreateResponse *WlbOrderCreateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderCreateResponse *tmpResponse = new WlbOrderCreateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
