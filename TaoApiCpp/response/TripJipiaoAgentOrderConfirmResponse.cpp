#include <TaoApiCpp/response/TripJipiaoAgentOrderConfirmResponse.h>

bool TripJipiaoAgentOrderConfirmResponse::getIsSuccess() const {
  return isSuccess;
}
void TripJipiaoAgentOrderConfirmResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void TripJipiaoAgentOrderConfirmResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

