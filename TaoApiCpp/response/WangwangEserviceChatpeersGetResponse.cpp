#include <TaoApiCpp/response/WangwangEserviceChatpeersGetResponse.h>

QList<Chatpeer> WangwangEserviceChatpeersGetResponse::getChatpeers() const {
  return chatpeers;
}
void WangwangEserviceChatpeersGetResponse::setChatpeers (QList<Chatpeer> chatpeers) {
  this->chatpeers = chatpeers;
}
qlonglong WangwangEserviceChatpeersGetResponse::getCount() const {
  return count;
}
void WangwangEserviceChatpeersGetResponse::setCount (qlonglong count) {
  this->count = count;
}
qlonglong WangwangEserviceChatpeersGetResponse::getRet() const {
  return ret;
}
void WangwangEserviceChatpeersGetResponse::setRet (qlonglong ret) {
  this->ret = ret;
}

void WangwangEserviceChatpeersGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("chatpeers")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("chatpeers");
  Parser *parser;
  foreach (parser, listParser) {
    Chatpeer tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    chatpeers.append(tmp);
  }
  }
  if (responseParser->hasName("count")) {
  count = responseParser->getNumByName("count");
  }
  if (responseParser->hasName("ret")) {
  ret = responseParser->getNumByName("ret");
  }

}

