#include <TaoApiCpp/response/SubuserDepartmentUpdateResponse.h>

bool SubuserDepartmentUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void SubuserDepartmentUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void SubuserDepartmentUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

