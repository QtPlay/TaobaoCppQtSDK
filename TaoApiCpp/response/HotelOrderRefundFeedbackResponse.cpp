#include <TaoApiCpp/response/HotelOrderRefundFeedbackResponse.h>

bool HotelOrderRefundFeedbackResponse::getIsSuccess() const {
  return isSuccess;
}
void HotelOrderRefundFeedbackResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void HotelOrderRefundFeedbackResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

