#include <TaoApiCpp/response/SellercenterUserPermissionsGetResponse.h>

QList<Permission> SellercenterUserPermissionsGetResponse::getPermissions() const {
  return permissions;
}
void SellercenterUserPermissionsGetResponse::setPermissions (QList<Permission> permissions) {
  this->permissions = permissions;
}

void SellercenterUserPermissionsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("permissions")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("permissions");
  Parser *parser;
  foreach (parser, listParser) {
    Permission tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    permissions.append(tmp);
  }
  }

}

