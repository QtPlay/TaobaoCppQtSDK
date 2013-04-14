#include <TaoApiCpp/domain/TradeConfirmFee.h>
QString TradeConfirmFee::getConfirmFee() const {
  return confirmFee;
}
void TradeConfirmFee::setConfirmFee (QString confirmFee) {
  this->confirmFee = confirmFee;
}

QString TradeConfirmFee::getConfirmPostFee() const {
  return confirmPostFee;
}
void TradeConfirmFee::setConfirmPostFee (QString confirmPostFee) {
  this->confirmPostFee = confirmPostFee;
}

bool TradeConfirmFee::getIsLastOrder() const {
  return isLastOrder;
}
void TradeConfirmFee::setIsLastOrder (bool isLastOrder) {
  this->isLastOrder = isLastOrder;
}


void TradeConfirmFee::parseResponse() {
  if (responseParser->hasName("confirm_fee")) {
  confirmFee = responseParser->getStrByName("confirm_fee");
  }
  if (responseParser->hasName("confirm_post_fee")) {
  confirmPostFee = responseParser->getStrByName("confirm_post_fee");
  }
  if (responseParser->hasName("is_last_order")) {
  isLastOrder = responseParser->getBoolByName("is_last_order");
  }

}

