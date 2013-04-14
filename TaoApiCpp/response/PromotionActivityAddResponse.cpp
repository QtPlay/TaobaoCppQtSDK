#include <TaoApiCpp/response/PromotionActivityAddResponse.h>

Activity PromotionActivityAddResponse::getActivity() const {
  return activity;
}
void PromotionActivityAddResponse::setActivity (Activity activity) {
  this->activity = activity;
}

void PromotionActivityAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("activity")) {
  activity.setParser(responseParser->getObjectParser("activity"));
  activity.parseResponse();
  }

}

