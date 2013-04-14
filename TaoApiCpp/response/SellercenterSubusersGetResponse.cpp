#include <TaoApiCpp/response/SellercenterSubusersGetResponse.h>

QList<SubUserInfo> SellercenterSubusersGetResponse::getSubusers() const {
  return subusers;
}
void SellercenterSubusersGetResponse::setSubusers (QList<SubUserInfo> subusers) {
  this->subusers = subusers;
}

void SellercenterSubusersGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("subusers")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("subusers");
  Parser *parser;
  foreach (parser, listParser) {
    SubUserInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    subusers.append(tmp);
  }
  }

}

