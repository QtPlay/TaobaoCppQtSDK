#include <TaoApiCpp/response/SubuserDutyUpdateResponse.h>

bool SubuserDutyUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void SubuserDutyUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void SubuserDutyUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

