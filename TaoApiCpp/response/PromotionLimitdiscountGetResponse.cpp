#include <TaoApiCpp/response/PromotionLimitdiscountGetResponse.h>

QList<LimitDiscount> PromotionLimitdiscountGetResponse::getLimitDiscountList() const {
  return limitDiscountList;
}
void PromotionLimitdiscountGetResponse::setLimitDiscountList (QList<LimitDiscount> limitDiscountList) {
  this->limitDiscountList = limitDiscountList;
}
qlonglong PromotionLimitdiscountGetResponse::getTotalCount() const {
  return totalCount;
}
void PromotionLimitdiscountGetResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void PromotionLimitdiscountGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("limit_discount_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("limit_discount_list");
  Parser *parser;
  foreach (parser, listParser) {
    LimitDiscount tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    limitDiscountList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

