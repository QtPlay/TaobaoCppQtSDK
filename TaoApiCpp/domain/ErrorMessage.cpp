#include <TaoApiCpp/domain/ErrorMessage.h>
QString ErrorMessage::getBuyerNick() const {
  return buyerNick;
}
void ErrorMessage::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

QString ErrorMessage::getReason() const {
  return reason;
}
void ErrorMessage::setReason (QString reason) {
  this->reason = reason;
}


void ErrorMessage::parseResponse() {
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("reason")) {
  reason = responseParser->getStrByName("reason");
  }

}

