#include <TaoApiCpp/response/HotelRoomQuotasQueryFeedbackResponse.h>

bool HotelRoomQuotasQueryFeedbackResponse::getIsSuccess() const {
  return isSuccess;
}
void HotelRoomQuotasQueryFeedbackResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void HotelRoomQuotasQueryFeedbackResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

