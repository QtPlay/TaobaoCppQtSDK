#include <TaoApiCpp/response/SubuserEmployeeUpdateResponse.h>

bool SubuserEmployeeUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void SubuserEmployeeUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void SubuserEmployeeUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

