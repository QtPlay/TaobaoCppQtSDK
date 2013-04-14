#include <TaoApiCpp/response/FenxiaoProductSkusGetResponse.h>

QList<FenxiaoSku> FenxiaoProductSkusGetResponse::getSkus() const {
  return skus;
}
void FenxiaoProductSkusGetResponse::setSkus (QList<FenxiaoSku> skus) {
  this->skus = skus;
}
qlonglong FenxiaoProductSkusGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoProductSkusGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FenxiaoProductSkusGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("skus")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("skus");
  Parser *parser;
  foreach (parser, listParser) {
    FenxiaoSku tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    skus.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

