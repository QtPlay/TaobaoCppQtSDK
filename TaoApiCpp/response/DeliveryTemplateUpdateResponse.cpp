#include <TaoApiCpp/response/DeliveryTemplateUpdateResponse.h>

bool DeliveryTemplateUpdateResponse::getComplete() const {
  return complete;
}
void DeliveryTemplateUpdateResponse::setComplete (bool complete) {
  this->complete = complete;
}

void DeliveryTemplateUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("complete")) {
  complete = responseParser->getBoolByName("complete");
  }

}

