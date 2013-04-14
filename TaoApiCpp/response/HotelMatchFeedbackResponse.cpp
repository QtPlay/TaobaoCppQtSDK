#include <TaoApiCpp/response/HotelMatchFeedbackResponse.h>

bool HotelMatchFeedbackResponse::getSucc() const {
  return succ;
}
void HotelMatchFeedbackResponse::setSucc (bool succ) {
  this->succ = succ;
}

void HotelMatchFeedbackResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("succ")) {
  succ = responseParser->getBoolByName("succ");
  }

}

