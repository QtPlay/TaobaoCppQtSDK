#include <TaoApiCpp/response/TripJipiaoAgentOrderFailResponse.h>

bool TripJipiaoAgentOrderFailResponse::getIsSuccess() const {
  return isSuccess;
}
void TripJipiaoAgentOrderFailResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void TripJipiaoAgentOrderFailResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

