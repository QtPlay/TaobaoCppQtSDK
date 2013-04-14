#include <TaoApiCpp/response/FenxiaoCooperationGetResponse.h>

QList<Cooperation> FenxiaoCooperationGetResponse::getCooperations() const {
  return cooperations;
}
void FenxiaoCooperationGetResponse::setCooperations (QList<Cooperation> cooperations) {
  this->cooperations = cooperations;
}
qlonglong FenxiaoCooperationGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoCooperationGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FenxiaoCooperationGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("cooperations")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("cooperations");
  Parser *parser;
  foreach (parser, listParser) {
    Cooperation tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    cooperations.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

