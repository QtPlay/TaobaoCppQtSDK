#include <TaoApiCpp/response/IncrementAuthorizeMessageGetResponse.h>

bool IncrementAuthorizeMessageGetResponse::getHasNext() const {
  return hasNext;
}
void IncrementAuthorizeMessageGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
QList<QString> IncrementAuthorizeMessageGetResponse::getMessages() const {
  return messages;
}
void IncrementAuthorizeMessageGetResponse::setMessages (QList<QString> messages) {
  this->messages = messages;
}

void IncrementAuthorizeMessageGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("has_next")) {
  hasNext = responseParser->getBoolByName("has_next");
  }
  if (responseParser->hasName("messages")) {
  messages = responseParser->getListStrByName("messages");
  }

}

