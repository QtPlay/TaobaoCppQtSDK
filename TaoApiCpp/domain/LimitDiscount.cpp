#include <TaoApiCpp/domain/LimitDiscount.h>
QDateTime LimitDiscount::getEndTime() const {
  return endTime;
}
void LimitDiscount::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}

qlonglong LimitDiscount::getItemNum() const {
  return itemNum;
}
void LimitDiscount::setItemNum (qlonglong itemNum) {
  this->itemNum = itemNum;
}

qlonglong LimitDiscount::getLimitDiscountId() const {
  return limitDiscountId;
}
void LimitDiscount::setLimitDiscountId (qlonglong limitDiscountId) {
  this->limitDiscountId = limitDiscountId;
}

QString LimitDiscount::getLimitDiscountName() const {
  return limitDiscountName;
}
void LimitDiscount::setLimitDiscountName (QString limitDiscountName) {
  this->limitDiscountName = limitDiscountName;
}

QDateTime LimitDiscount::getStartTime() const {
  return startTime;
}
void LimitDiscount::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
}


void LimitDiscount::parseResponse() {
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }
  if (responseParser->hasName("item_num")) {
  itemNum = responseParser->getNumByName("item_num");
  }
  if (responseParser->hasName("limit_discount_id")) {
  limitDiscountId = responseParser->getNumByName("limit_discount_id");
  }
  if (responseParser->hasName("limit_discount_name")) {
  limitDiscountName = responseParser->getStrByName("limit_discount_name");
  }
  if (responseParser->hasName("start_time")) {
  startTime = responseParser->getDateByName("start_time");
  }

}

