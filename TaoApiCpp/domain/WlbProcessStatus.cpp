#include <TaoApiCpp/domain/WlbProcessStatus.h>
QString WlbProcessStatus::getContent() const {
  return content;
}
void WlbProcessStatus::setContent (QString content) {
  this->content = content;
}

QDateTime WlbProcessStatus::getOperateTime() const {
  return operateTime;
}
void WlbProcessStatus::setOperateTime (QDateTime operateTime) {
  this->operateTime = operateTime;
}

QString WlbProcessStatus::getOperater() const {
  return operater;
}
void WlbProcessStatus::setOperater (QString operater) {
  this->operater = operater;
}

QString WlbProcessStatus::getOrderCode() const {
  return orderCode;
}
void WlbProcessStatus::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
}

QString WlbProcessStatus::getRemark() const {
  return remark;
}
void WlbProcessStatus::setRemark (QString remark) {
  this->remark = remark;
}

QString WlbProcessStatus::getStatusCode() const {
  return statusCode;
}
void WlbProcessStatus::setStatusCode (QString statusCode) {
  this->statusCode = statusCode;
}

QString WlbProcessStatus::getStoreCode() const {
  return storeCode;
}
void WlbProcessStatus::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}

QString WlbProcessStatus::getStoreTpCode() const {
  return storeTpCode;
}
void WlbProcessStatus::setStoreTpCode (QString storeTpCode) {
  this->storeTpCode = storeTpCode;
}

QString WlbProcessStatus::getTmsOrderCode() const {
  return tmsOrderCode;
}
void WlbProcessStatus::setTmsOrderCode (QString tmsOrderCode) {
  this->tmsOrderCode = tmsOrderCode;
}

QString WlbProcessStatus::getTmsTpCode() const {
  return tmsTpCode;
}
void WlbProcessStatus::setTmsTpCode (QString tmsTpCode) {
  this->tmsTpCode = tmsTpCode;
}


void WlbProcessStatus::parseResponse() {
  if (responseParser->hasName("content")) {
  content = responseParser->getStrByName("content");
  }
  if (responseParser->hasName("operate_time")) {
  operateTime = responseParser->getDateByName("operate_time");
  }
  if (responseParser->hasName("operater")) {
  operater = responseParser->getStrByName("operater");
  }
  if (responseParser->hasName("order_code")) {
  orderCode = responseParser->getStrByName("order_code");
  }
  if (responseParser->hasName("remark")) {
  remark = responseParser->getStrByName("remark");
  }
  if (responseParser->hasName("status_code")) {
  statusCode = responseParser->getStrByName("status_code");
  }
  if (responseParser->hasName("store_code")) {
  storeCode = responseParser->getStrByName("store_code");
  }
  if (responseParser->hasName("store_tp_code")) {
  storeTpCode = responseParser->getStrByName("store_tp_code");
  }
  if (responseParser->hasName("tms_order_code")) {
  tmsOrderCode = responseParser->getStrByName("tms_order_code");
  }
  if (responseParser->hasName("tms_tp_code")) {
  tmsTpCode = responseParser->getStrByName("tms_tp_code");
  }

}

