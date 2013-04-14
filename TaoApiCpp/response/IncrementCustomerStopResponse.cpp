#include <TaoApiCpp/response/IncrementCustomerStopResponse.h>

bool IncrementCustomerStopResponse::getIsSuccess() const {
  return isSuccess;
}
void IncrementCustomerStopResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void IncrementCustomerStopResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

