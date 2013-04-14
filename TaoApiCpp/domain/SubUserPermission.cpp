#include <TaoApiCpp/domain/SubUserPermission.h>
QList<Permission> SubUserPermission::getPermissions() const {
  return permissions;
}
void SubUserPermission::setPermissions (QList<Permission> permissions) {
  this->permissions = permissions;
}

QList<Role> SubUserPermission::getRoles() const {
  return roles;
}
void SubUserPermission::setRoles (QList<Role> roles) {
  this->roles = roles;
}


void SubUserPermission::parseResponse() {
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

