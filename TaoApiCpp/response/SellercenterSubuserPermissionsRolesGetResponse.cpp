#include <TaoApiCpp/response/SellercenterSubuserPermissionsRolesGetResponse.h>

SubUserPermission SellercenterSubuserPermissionsRolesGetResponse::getSubuserPermission() const {
  return subuserPermission;
}
void SellercenterSubuserPermissionsRolesGetResponse::setSubuserPermission (SubUserPermission subuserPermission) {
  this->subuserPermission = subuserPermission;
}

void SellercenterSubuserPermissionsRolesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("subuser_permission")) {
  subuserPermission.setParser(responseParser->getObjectParser("subuser_permission"));
  subuserPermission.parseResponse();
  }

}

