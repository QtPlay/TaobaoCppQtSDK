#include <TaoApiCpp/response/MarketingPromotionsGetResponse.h>

QList<Promotion> MarketingPromotionsGetResponse::getPromotions() const {
  return promotions;
}
void MarketingPromotionsGetResponse::setPromotions (QList<Promotion> promotions) {
  this->promotions = promotions;
}
qlonglong MarketingPromotionsGetResponse::getTotalResults() const {
  return totalResults;
}
void MarketingPromotionsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void MarketingPromotionsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("promotions")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("promotions");
  Parser *parser;
  foreach (parser, listParser) {
    Promotion tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    promotions.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

