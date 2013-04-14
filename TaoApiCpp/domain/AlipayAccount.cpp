#include <TaoApiCpp/domain/AlipayAccount.h>
QString AlipayAccount::getAlipayUserId() const {
  return alipayUserId;
}
void AlipayAccount::setAlipayUserId (QString alipayUserId) {
  this->alipayUserId = alipayUserId;
}

QString AlipayAccount::getAvailableAmount() const {
  return availableAmount;
}
void AlipayAccount::setAvailableAmount (QString availableAmount) {
  this->availableAmount = availableAmount;
}

QString AlipayAccount::getFreezeAmount() const {
  return freezeAmount;
}
void AlipayAccount::setFreezeAmount (QString freezeAmount) {
  this->freezeAmount = freezeAmount;
}

QString AlipayAccount::getTotalAmount() const {
  return totalAmount;
}
void AlipayAccount::setTotalAmount (QString totalAmount) {
  this->totalAmount = totalAmount;
}


void AlipayAccount::parseResponse() {
  if (responseParser->hasName("alipay_user_id")) {
  alipayUserId = responseParser->getStrByName("alipay_user_id");
  }
  if (responseParser->hasName("available_amount")) {
  availableAmount = responseParser->getStrByName("available_amount");
  }
  if (responseParser->hasName("freeze_amount")) {
  freezeAmount = responseParser->getStrByName("freeze_amount");
  }
  if (responseParser->hasName("total_amount")) {
  totalAmount = responseParser->getStrByName("total_amount");
  }

}

