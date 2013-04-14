#include <TaoApiCpp/response/SellercenterRolesGetResponse.h>

QList<Role> SellercenterRolesGetResponse::getRoles() const {
  return roles;
}
void SellercenterRolesGetResponse::setRoles (QList<Role> roles) {
  this->roles = roles;
}

void SellercenterRolesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("roles")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("roles");
  Parser *parser;
  foreach (parser, listParser) {
    Role tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    roles.append(tmp);
  }
  }

}

