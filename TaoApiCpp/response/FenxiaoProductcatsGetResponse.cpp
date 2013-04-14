#include <TaoApiCpp/response/FenxiaoProductcatsGetResponse.h>

QList<ProductCat> FenxiaoProductcatsGetResponse::getProductcats() const {
  return productcats;
}
void FenxiaoProductcatsGetResponse::setProductcats (QList<ProductCat> productcats) {
  this->productcats = productcats;
}
qlonglong FenxiaoProductcatsGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoProductcatsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FenxiaoProductcatsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("productcats")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("productcats");
  Parser *parser;
  foreach (parser, listParser) {
    ProductCat tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    productcats.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

