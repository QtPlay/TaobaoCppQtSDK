#include <TaoApiCpp/domain/UserInfo.h>
QString UserInfo::getAvailableSpace() const {
  return availableSpace;
}
void UserInfo::setAvailableSpace (QString availableSpace) {
  this->availableSpace = availableSpace;
}

QString UserInfo::getFreeSpace() const {
  return freeSpace;
}
void UserInfo::setFreeSpace (QString freeSpace) {
  this->freeSpace = freeSpace;
}

QString UserInfo::getOrderExpiryDate() const {
  return orderExpiryDate;
}
void UserInfo::setOrderExpiryDate (QString orderExpiryDate) {
  this->orderExpiryDate = orderExpiryDate;
}

QString UserInfo::getOrderSpace() const {
  return orderSpace;
}
void UserInfo::setOrderSpace (QString orderSpace) {
  this->orderSpace = orderSpace;
}

QString UserInfo::getRemainingSpace() const {
  return remainingSpace;
}
void UserInfo::setRemainingSpace (QString remainingSpace) {
  this->remainingSpace = remainingSpace;
}

QString UserInfo::getUsedSpace() const {
  return usedSpace;
}
void UserInfo::setUsedSpace (QString usedSpace) {
  this->usedSpace = usedSpace;
}

QString UserInfo::getWaterMark() const {
  return waterMark;
}
void UserInfo::setWaterMark (QString waterMark) {
  this->waterMark = waterMark;
}


void UserInfo::parseResponse() {
  if (responseParser->hasName("available_space")) {
  availableSpace = responseParser->getStrByName("available_space");
  }
  if (responseParser->hasName("free_space")) {
  freeSpace = responseParser->getStrByName("free_space");
  }
  if (responseParser->hasName("order_expiry_date")) {
  orderExpiryDate = responseParser->getStrByName("order_expiry_date");
  }
  if (responseParser->hasName("order_space")) {
  orderSpace = responseParser->getStrByName("order_space");
  }
  if (responseParser->hasName("remaining_space")) {
  remainingSpace = responseParser->getStrByName("remaining_space");
  }
  if (responseParser->hasName("used_space")) {
  usedSpace = responseParser->getStrByName("used_space");
  }
  if (responseParser->hasName("water_mark")) {
  waterMark = responseParser->getStrByName("water_mark");
  }

}

