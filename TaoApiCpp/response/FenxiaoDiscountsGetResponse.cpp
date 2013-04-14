#include <TaoApiCpp/response/FenxiaoDiscountsGetResponse.h>

QList<Discount> FenxiaoDiscountsGetResponse::getDiscounts() const {
  return discounts;
}
void FenxiaoDiscountsGetResponse::setDiscounts (QList<Discount> discounts) {
  this->discounts = discounts;
}
qlonglong FenxiaoDiscountsGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoDiscountsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FenxiaoDiscountsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("discounts")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("discounts");
  Parser *parser;
  foreach (parser, listParser) {
    Discount tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    discounts.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

