#include <TaoApiCpp/response/UserAccountFreezeGetResponse.h>

QList<AccountFreeze> UserAccountFreezeGetResponse::getFreezeItems() const {
  return freezeItems;
}
void UserAccountFreezeGetResponse::setFreezeItems (QList<AccountFreeze> freezeItems) {
  this->freezeItems = freezeItems;
}
QString UserAccountFreezeGetResponse::getTotalResults() const {
  return totalResults;
}
void UserAccountFreezeGetResponse::setTotalResults (QString totalResults) {
  this->totalResults = totalResults;
}

void UserAccountFreezeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("freeze_items")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("freeze_items");
  Parser *parser;
  foreach (parser, listParser) {
    AccountFreeze tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    freezeItems.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getStrByName("total_results");
  }

}

