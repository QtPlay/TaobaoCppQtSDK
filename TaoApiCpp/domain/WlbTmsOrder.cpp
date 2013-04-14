#include <TaoApiCpp/domain/WlbTmsOrder.h>
QString WlbTmsOrder::getCode() const {
  return code;
}
void WlbTmsOrder::setCode (QString code) {
  this->code = code;
}

QString WlbTmsOrder::getCompanyCode() const {
  return companyCode;
}
void WlbTmsOrder::setCompanyCode (QString companyCode) {
  this->companyCode = companyCode;
}

QString WlbTmsOrder::getOrderCode() const {
  return orderCode;
}
void WlbTmsOrder::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
}

qlonglong WlbTmsOrder::getUserId() const {
  return userId;
}
void WlbTmsOrder::setUserId (qlonglong userId) {
  this->userId = userId;
}


void WlbTmsOrder::parseResponse() {
  if (responseParser->hasName("code")) {
  code = responseParser->getStrByName("code");
  }
  if (responseParser->hasName("company_code")) {
  companyCode = responseParser->getStrByName("company_code");
  }
  if (responseParser->hasName("order_code")) {
  orderCode = responseParser->getStrByName("order_code");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

