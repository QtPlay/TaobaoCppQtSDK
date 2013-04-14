#include <TaoApiCpp/response/WlbSubscriptionQueryResponse.h>

QList<WlbSellerSubscription> WlbSubscriptionQueryResponse::getSellerSubscriptionList() const {
  return sellerSubscriptionList;
}
void WlbSubscriptionQueryResponse::setSellerSubscriptionList (QList<WlbSellerSubscription> sellerSubscriptionList) {
  this->sellerSubscriptionList = sellerSubscriptionList;
}
qlonglong WlbSubscriptionQueryResponse::getTotalCount() const {
  return totalCount;
}
void WlbSubscriptionQueryResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbSubscriptionQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("seller_subscription_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("seller_subscription_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbSellerSubscription tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    sellerSubscriptionList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

