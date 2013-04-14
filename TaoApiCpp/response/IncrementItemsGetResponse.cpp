#include <TaoApiCpp/response/IncrementItemsGetResponse.h>

QList<NotifyItem> IncrementItemsGetResponse::getNotifyItems() const {
  return notifyItems;
}
void IncrementItemsGetResponse::setNotifyItems (QList<NotifyItem> notifyItems) {
  this->notifyItems = notifyItems;
}
qlonglong IncrementItemsGetResponse::getTotalResults() const {
  return totalResults;
}
void IncrementItemsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void IncrementItemsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("notify_items")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("notify_items");
  Parser *parser;
  foreach (parser, listParser) {
    NotifyItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    notifyItems.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

