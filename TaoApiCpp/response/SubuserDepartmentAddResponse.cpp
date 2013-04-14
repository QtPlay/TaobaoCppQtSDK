#include <TaoApiCpp/response/SubuserDepartmentAddResponse.h>

bool SubuserDepartmentAddResponse::getIsSuccess() const {
  return isSuccess;
}
void SubuserDepartmentAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void SubuserDepartmentAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

