#include <TaoApiCpp/domain/LocalityLife.h>
QString LocalityLife::getChooseLogis() const {
  return chooseLogis;
}
void LocalityLife::setChooseLogis (QString chooseLogis) {
  this->chooseLogis = chooseLogis;
}

QString LocalityLife::getExpirydate() const {
  return expirydate;
}
void LocalityLife::setExpirydate (QString expirydate) {
  this->expirydate = expirydate;
}

QString LocalityLife::getMerchant() const {
  return merchant;
}
void LocalityLife::setMerchant (QString merchant) {
  this->merchant = merchant;
}

QString LocalityLife::getNetworkId() const {
  return networkId;
}
void LocalityLife::setNetworkId (QString networkId) {
  this->networkId = networkId;
}

qlonglong LocalityLife::getOnsaleAutoRefundRatio() const {
  return onsaleAutoRefundRatio;
}
void LocalityLife::setOnsaleAutoRefundRatio (qlonglong onsaleAutoRefundRatio) {
  this->onsaleAutoRefundRatio = onsaleAutoRefundRatio;
}

qlonglong LocalityLife::getRefundRatio() const {
  return refundRatio;
}
void LocalityLife::setRefundRatio (qlonglong refundRatio) {
  this->refundRatio = refundRatio;
}

QString LocalityLife::getVerification() const {
  return verification;
}
void LocalityLife::setVerification (QString verification) {
  this->verification = verification;
}


void LocalityLife::parseResponse() {
  if (responseParser->hasName("choose_logis")) {
  chooseLogis = responseParser->getStrByName("choose_logis");
  }
  if (responseParser->hasName("expirydate")) {
  expirydate = responseParser->getStrByName("expirydate");
  }
  if (responseParser->hasName("merchant")) {
  merchant = responseParser->getStrByName("merchant");
  }
  if (responseParser->hasName("network_id")) {
  networkId = responseParser->getStrByName("network_id");
  }
  if (responseParser->hasName("onsale_auto_refund_ratio")) {
  onsaleAutoRefundRatio = responseParser->getNumByName("onsale_auto_refund_ratio");
  }
  if (responseParser->hasName("refund_ratio")) {
  refundRatio = responseParser->getNumByName("refund_ratio");
  }
  if (responseParser->hasName("verification")) {
  verification = responseParser->getStrByName("verification");
  }

}

