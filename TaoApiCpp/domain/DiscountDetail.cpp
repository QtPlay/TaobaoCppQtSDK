#include <TaoApiCpp/domain/DiscountDetail.h>
QDateTime DiscountDetail::getCreated() const {
  return created;
}
void DiscountDetail::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong DiscountDetail::getDetailId() const {
  return detailId;
}
void DiscountDetail::setDetailId (qlonglong detailId) {
  this->detailId = detailId;
}

QString DiscountDetail::getDiscountType() const {
  return discountType;
}
void DiscountDetail::setDiscountType (QString discountType) {
  this->discountType = discountType;
}

qlonglong DiscountDetail::getDiscountValue() const {
  return discountValue;
}
void DiscountDetail::setDiscountValue (qlonglong discountValue) {
  this->discountValue = discountValue;
}

QDateTime DiscountDetail::getModified() const {
  return modified;
}
void DiscountDetail::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong DiscountDetail::getTargetId() const {
  return targetId;
}
void DiscountDetail::setTargetId (qlonglong targetId) {
  this->targetId = targetId;
}

QString DiscountDetail::getTargetName() const {
  return targetName;
}
void DiscountDetail::setTargetName (QString targetName) {
  this->targetName = targetName;
}

QString DiscountDetail::getTargetType() const {
  return targetType;
}
void DiscountDetail::setTargetType (QString targetType) {
  this->targetType = targetType;
}


void DiscountDetail::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("detail_id")) {
  detailId = responseParser->getNumByName("detail_id");
  }
  if (responseParser->hasName("discount_type")) {
  discountType = responseParser->getStrByName("discount_type");
  }
  if (responseParser->hasName("discount_value")) {
  discountValue = responseParser->getNumByName("discount_value");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("target_id")) {
  targetId = responseParser->getNumByName("target_id");
  }
  if (responseParser->hasName("target_name")) {
  targetName = responseParser->getStrByName("target_name");
  }
  if (responseParser->hasName("target_type")) {
  targetType = responseParser->getStrByName("target_type");
  }

}

