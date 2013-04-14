#include <TaoApiCpp/response/SellercenterRoleInfoGetResponse.h>

Role SellercenterRoleInfoGetResponse::getRole() const {
  return role;
}
void SellercenterRoleInfoGetResponse::setRole (Role role) {
  this->role = role;
}

void SellercenterRoleInfoGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("role")) {
  role.setParser(responseParser->getObjectParser("role"));
  role.parseResponse();
  }

}

