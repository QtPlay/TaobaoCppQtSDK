#include <TaoApiCpp/response/WlbOrderCreateResponse.h>

QDateTime WlbOrderCreateResponse::getCreateTime() const {
  return createTime;
}
void WlbOrderCreateResponse::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}
QString WlbOrderCreateResponse::getOrderCode() const {
  return orderCode;
}
void WlbOrderCreateResponse::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
}

void WlbOrderCreateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("order_code")) {
  orderCode = responseParser->getStrByName("order_code");
  }

}

