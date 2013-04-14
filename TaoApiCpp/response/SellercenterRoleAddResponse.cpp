#include <TaoApiCpp/response/SellercenterRoleAddResponse.h>

Role SellercenterRoleAddResponse::getRole() const {
  return role;
}
void SellercenterRoleAddResponse::setRole (Role role) {
  this->role = role;
}

void SellercenterRoleAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("role")) {
  role.setParser(responseParser->getObjectParser("role"));
  role.parseResponse();
  }

}

