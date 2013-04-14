#include <TaoApiCpp/response/FenxiaoDistributorsGetResponse.h>

QList<Distributor> FenxiaoDistributorsGetResponse::getDistributors() const {
  return distributors;
}
void FenxiaoDistributorsGetResponse::setDistributors (QList<Distributor> distributors) {
  this->distributors = distributors;
}

void FenxiaoDistributorsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("distributors")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("distributors");
  Parser *parser;
  foreach (parser, listParser) {
    Distributor tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    distributors.append(tmp);
  }
  }

}

