#include <TaoApiCpp/response/SubuserDutyAddResponse.h>

bool SubuserDutyAddResponse::getIsSuccess() const {
  return isSuccess;
}
void SubuserDutyAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void SubuserDutyAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

