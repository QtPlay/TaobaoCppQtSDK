#include <TaoApiCpp/response/PromotionLimitdiscountDetailGetResponse.h>

QList<LimitDiscountDetail> PromotionLimitdiscountDetailGetResponse::getItemDiscountDetailList() const {
  return itemDiscountDetailList;
}
void PromotionLimitdiscountDetailGetResponse::setItemDiscountDetailList (QList<LimitDiscountDetail> itemDiscountDetailList) {
  this->itemDiscountDetailList = itemDiscountDetailList;
}

void PromotionLimitdiscountDetailGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_discount_detail_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_discount_detail_list");
  Parser *parser;
  foreach (parser, listParser) {
    LimitDiscountDetail tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemDiscountDetailList.append(tmp);
  }
  }

}

