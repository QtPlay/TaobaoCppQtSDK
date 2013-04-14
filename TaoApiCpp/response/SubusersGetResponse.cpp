#include <TaoApiCpp/response/SubusersGetResponse.h>

QList<SubAccountInfo> SubusersGetResponse::getSubaccounts() const {
  return subaccounts;
}
void SubusersGetResponse::setSubaccounts (QList<SubAccountInfo> subaccounts) {
  this->subaccounts = subaccounts;
}

void SubusersGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("subaccounts")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("subaccounts");
  Parser *parser;
  foreach (parser, listParser) {
    SubAccountInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    subaccounts.append(tmp);
  }
  }

}

