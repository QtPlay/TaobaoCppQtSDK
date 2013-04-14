#include <TaoApiCpp/response/SubuserEmployeeAddResponse.h>

bool SubuserEmployeeAddResponse::getIsSuccess() const {
  return isSuccess;
}
void SubuserEmployeeAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void SubuserEmployeeAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

