#include <TaoApiCpp/response/HotelOrderBookingFeedbackResponse.h>

bool HotelOrderBookingFeedbackResponse::getIsSuccess() const {
  return isSuccess;
}
void HotelOrderBookingFeedbackResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void HotelOrderBookingFeedbackResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

