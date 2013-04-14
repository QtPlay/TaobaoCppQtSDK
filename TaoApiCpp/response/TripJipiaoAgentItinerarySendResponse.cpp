#include <TaoApiCpp/response/TripJipiaoAgentItinerarySendResponse.h>

bool TripJipiaoAgentItinerarySendResponse::getIsSuccess() const {
  return isSuccess;
}
void TripJipiaoAgentItinerarySendResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void TripJipiaoAgentItinerarySendResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

