#include <TaoApiCpp/domain/LimitDiscountDetail.h>
QDateTime LimitDiscountDetail::getEndTime() const {
  return endTime;
}
void LimitDiscountDetail::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}

QString LimitDiscountDetail::getItemDiscount() const {
  return itemDiscount;
}
void LimitDiscountDetail::setItemDiscount (QString itemDiscount) {
  this->itemDiscount = itemDiscount;
}

qlonglong LimitDiscountDetail::getItemId() const {
  return itemId;
}
void LimitDiscountDetail::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QString LimitDiscountDetail::getLimitDiscountName() const {
  return limitDiscountName;
}
void LimitDiscountDetail::setLimitDiscountName (QString limitDiscountName) {
  this->limitDiscountName = limitDiscountName;
}

qlonglong LimitDiscountDetail::getLimitNum() const {
  return limitNum;
}
void LimitDiscountDetail::setLimitNum (qlonglong limitNum) {
  this->limitNum = limitNum;
}

QDateTime LimitDiscountDetail::getStartTime() const {
  return startTime;
}
void LimitDiscountDetail::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
}


void LimitDiscountDetail::parseResponse() {
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }
  if (responseParser->hasName("item_discount")) {
  itemDiscount = responseParser->getStrByName("item_discount");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("limit_discount_name")) {
  limitDiscountName = responseParser->getStrByName("limit_discount_name");
  }
  if (responseParser->hasName("limit_num")) {
  limitNum = responseParser->getNumByName("limit_num");
  }
  if (responseParser->hasName("start_time")) {
  startTime = responseParser->getDateByName("start_time");
  }

}

