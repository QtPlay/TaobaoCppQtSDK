#include <TaoApiCpp/response/LogisticsOrdersDetailGetResponse.h>

QList<Shipping> LogisticsOrdersDetailGetResponse::getShippings() const {
  return shippings;
}
void LogisticsOrdersDetailGetResponse::setShippings (QList<Shipping> shippings) {
  this->shippings = shippings;
}
qlonglong LogisticsOrdersDetailGetResponse::getTotalResults() const {
  return totalResults;
}
void LogisticsOrdersDetailGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void LogisticsOrdersDetailGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("shippings")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("shippings");
  Parser *parser;
  foreach (parser, listParser) {
    Shipping tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    shippings.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

