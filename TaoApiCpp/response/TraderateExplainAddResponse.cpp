#include <TaoApiCpp/response/TraderateExplainAddResponse.h>

bool TraderateExplainAddResponse::getIsSuccess() const {
  return isSuccess;
}
void TraderateExplainAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void TraderateExplainAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

