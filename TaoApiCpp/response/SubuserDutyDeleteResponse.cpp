#include <TaoApiCpp/response/SubuserDutyDeleteResponse.h>

bool SubuserDutyDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void SubuserDutyDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void SubuserDutyDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

