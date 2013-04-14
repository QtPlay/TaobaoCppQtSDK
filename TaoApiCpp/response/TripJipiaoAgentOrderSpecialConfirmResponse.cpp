#include <TaoApiCpp/response/TripJipiaoAgentOrderSpecialConfirmResponse.h>

bool TripJipiaoAgentOrderSpecialConfirmResponse::getIsSuccess() const {
  return isSuccess;
}
void TripJipiaoAgentOrderSpecialConfirmResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void TripJipiaoAgentOrderSpecialConfirmResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

