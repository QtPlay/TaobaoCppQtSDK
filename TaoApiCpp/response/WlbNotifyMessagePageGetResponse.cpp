#include <TaoApiCpp/response/WlbNotifyMessagePageGetResponse.h>

qlonglong WlbNotifyMessagePageGetResponse::getTotalCount() const {
  return totalCount;
}
void WlbNotifyMessagePageGetResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}
QList<WlbMessage> WlbNotifyMessagePageGetResponse::getWlbMessages() const {
  return wlbMessages;
}
void WlbNotifyMessagePageGetResponse::setWlbMessages (QList<WlbMessage> wlbMessages) {
  this->wlbMessages = wlbMessages;
}

void WlbNotifyMessagePageGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }
  if (responseParser->hasName("wlb_messages")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("wlb_messages");
  Parser *parser;
  foreach (parser, listParser) {
    WlbMessage tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    wlbMessages.append(tmp);
  }
  }

}

