#include <TaoApiCpp/response/SubuserDepartmentDeleteResponse.h>

bool SubuserDepartmentDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void SubuserDepartmentDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void SubuserDepartmentDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

