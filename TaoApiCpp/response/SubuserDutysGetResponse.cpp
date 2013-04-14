#include <TaoApiCpp/response/SubuserDutysGetResponse.h>

QList<Duty> SubuserDutysGetResponse::getDutys() const {
  return dutys;
}
void SubuserDutysGetResponse::setDutys (QList<Duty> dutys) {
  this->dutys = dutys;
}

void SubuserDutysGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("dutys")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("dutys");
  Parser *parser;
  foreach (parser, listParser) {
    Duty tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    dutys.append(tmp);
  }
  }

}

