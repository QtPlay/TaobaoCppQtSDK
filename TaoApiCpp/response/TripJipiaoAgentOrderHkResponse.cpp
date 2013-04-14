#include <TaoApiCpp/response/TripJipiaoAgentOrderHkResponse.h>

bool TripJipiaoAgentOrderHkResponse::getIsSuccess() const {
  return isSuccess;
}
void TripJipiaoAgentOrderHkResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void TripJipiaoAgentOrderHkResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

