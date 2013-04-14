#include <TaoApiCpp/response/TripJipiaoAgentOrderSuccessResponse.h>

bool TripJipiaoAgentOrderSuccessResponse::getIsSuccess() const {
  return isSuccess;
}
void TripJipiaoAgentOrderSuccessResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void TripJipiaoAgentOrderSuccessResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

