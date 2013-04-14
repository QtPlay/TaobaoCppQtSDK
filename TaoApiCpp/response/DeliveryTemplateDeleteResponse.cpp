#include <TaoApiCpp/response/DeliveryTemplateDeleteResponse.h>

bool DeliveryTemplateDeleteResponse::getComplete() const {
  return complete;
}
void DeliveryTemplateDeleteResponse::setComplete (bool complete) {
  this->complete = complete;
}

void DeliveryTemplateDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("complete")) {
  complete = responseParser->getBoolByName("complete");
  }

}

