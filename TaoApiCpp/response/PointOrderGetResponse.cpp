#include <TaoApiCpp/response/PointOrderGetResponse.h>

QString PointOrderGetResponse::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void PointOrderGetResponse::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
}
QDateTime PointOrderGetResponse::getCreateTime() const {
  return createTime;
}
void PointOrderGetResponse::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}
QString PointOrderGetResponse::getDispatchUserId() const {
  return dispatchUserId;
}
void PointOrderGetResponse::setDispatchUserId (QString dispatchUserId) {
  this->dispatchUserId = dispatchUserId;
}
QString PointOrderGetResponse::getMemo() const {
  return memo;
}
void PointOrderGetResponse::setMemo (QString memo) {
  this->memo = memo;
}
QString PointOrderGetResponse::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void PointOrderGetResponse::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
}
QString PointOrderGetResponse::getOrderStatus() const {
  return orderStatus;
}
void PointOrderGetResponse::setOrderStatus (QString orderStatus) {
  this->orderStatus = orderStatus;
}
qlonglong PointOrderGetResponse::getPointCount() const {
  return pointCount;
}
void PointOrderGetResponse::setPointCount (qlonglong pointCount) {
  this->pointCount = pointCount;
}
QString PointOrderGetResponse::getReceiveUserId() const {
  return receiveUserId;
}
void PointOrderGetResponse::setReceiveUserId (QString receiveUserId) {
  this->receiveUserId = receiveUserId;
}

void PointOrderGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("alipay_order_no")) {
  alipayOrderNo = responseParser->getStrByName("alipay_order_no");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("dispatch_user_id")) {
  dispatchUserId = responseParser->getStrByName("dispatch_user_id");
  }
  if (responseParser->hasName("memo")) {
  memo = responseParser->getStrByName("memo");
  }
  if (responseParser->hasName("merchant_order_no")) {
  merchantOrderNo = responseParser->getStrByName("merchant_order_no");
  }
  if (responseParser->hasName("order_status")) {
  orderStatus = responseParser->getStrByName("order_status");
  }
  if (responseParser->hasName("point_count")) {
  pointCount = responseParser->getNumByName("point_count");
  }
  if (responseParser->hasName("receive_user_id")) {
  receiveUserId = responseParser->getStrByName("receive_user_id");
  }

}

