#include <TaoApiCpp/response/LogisticsOrdersGetResponse.h>

QList<Shipping> LogisticsOrdersGetResponse::getShippings() const {
  return shippings;
}
void LogisticsOrdersGetResponse::setShippings (QList<Shipping> shippings) {
  this->shippings = shippings;
}
qlonglong LogisticsOrdersGetResponse::getTotalResults() const {
  return totalResults;
}
void LogisticsOrdersGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void LogisticsOrdersGetResponse::parseNormalResponse() {
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

