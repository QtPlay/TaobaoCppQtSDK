#include <TaoApiCpp/response/SubuserInfoUpdateResponse.h>

bool SubuserInfoUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void SubuserInfoUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void SubuserInfoUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

