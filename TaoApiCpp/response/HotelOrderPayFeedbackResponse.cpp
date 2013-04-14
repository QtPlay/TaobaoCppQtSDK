#include <TaoApiCpp/response/HotelOrderPayFeedbackResponse.h>

bool HotelOrderPayFeedbackResponse::getIsSuccess() const {
  return isSuccess;
}
void HotelOrderPayFeedbackResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void HotelOrderPayFeedbackResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

