#include <TaoApiCpp/domain/Promotion.h>
qlonglong Promotion::getDecreaseNum() const {
  return decreaseNum;
}
void Promotion::setDecreaseNum (qlonglong decreaseNum) {
  this->decreaseNum = decreaseNum;
}

QString Promotion::getDiscountType() const {
  return discountType;
}
void Promotion::setDiscountType (QString discountType) {
  this->discountType = discountType;
}

QString Promotion::getDiscountValue() const {
  return discountValue;
}
void Promotion::setDiscountValue (QString discountValue) {
  this->discountValue = discountValue;
}

QDateTime Promotion::getEndDate() const {
  return endDate;
}
void Promotion::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
}

qlonglong Promotion::getNumIid() const {
  return numIid;
}
void Promotion::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

QString Promotion::getPromotionDesc() const {
  return promotionDesc;
}
void Promotion::setPromotionDesc (QString promotionDesc) {
  this->promotionDesc = promotionDesc;
}

qlonglong Promotion::getPromotionId() const {
  return promotionId;
}
void Promotion::setPromotionId (qlonglong promotionId) {
  this->promotionId = promotionId;
}

QString Promotion::getPromotionTitle() const {
  return promotionTitle;
}
void Promotion::setPromotionTitle (QString promotionTitle) {
  this->promotionTitle = promotionTitle;
}

QDateTime Promotion::getStartDate() const {
  return startDate;
}
void Promotion::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
}

QString Promotion::getStatus() const {
  return status;
}
void Promotion::setStatus (QString status) {
  this->status = status;
}

qlonglong Promotion::getTagId() const {
  return tagId;
}
void Promotion::setTagId (qlonglong tagId) {
  this->tagId = tagId;
}


void Promotion::parseResponse() {
  if (responseParser->hasName("decrease_num")) {
  decreaseNum = responseParser->getNumByName("decrease_num");
  }
  if (responseParser->hasName("discount_type")) {
  discountType = responseParser->getStrByName("discount_type");
  }
  if (responseParser->hasName("discount_value")) {
  discountValue = responseParser->getStrByName("discount_value");
  }
  if (responseParser->hasName("end_date")) {
  endDate = responseParser->getDateByName("end_date");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("promotion_desc")) {
  promotionDesc = responseParser->getStrByName("promotion_desc");
  }
  if (responseParser->hasName("promotion_id")) {
  promotionId = responseParser->getNumByName("promotion_id");
  }
  if (responseParser->hasName("promotion_title")) {
  promotionTitle = responseParser->getStrByName("promotion_title");
  }
  if (responseParser->hasName("start_date")) {
  startDate = responseParser->getDateByName("start_date");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("tag_id")) {
  tagId = responseParser->getNumByName("tag_id");
  }

}

