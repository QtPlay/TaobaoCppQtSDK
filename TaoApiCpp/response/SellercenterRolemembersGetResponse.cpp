#include <TaoApiCpp/response/SellercenterRolemembersGetResponse.h>

QList<SubUserInfo> SellercenterRolemembersGetResponse::getSubusers() const {
  return subusers;
}
void SellercenterRolemembersGetResponse::setSubusers (QList<SubUserInfo> subusers) {
  this->subusers = subusers;
}

void SellercenterRolemembersGetResponse::parseNormalResponse() {
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

