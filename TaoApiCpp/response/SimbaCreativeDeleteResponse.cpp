#include <TaoApiCpp/response/SimbaCreativeDeleteResponse.h>

Creative SimbaCreativeDeleteResponse::getCreative() const {
  return creative;
}
void SimbaCreativeDeleteResponse::setCreative (Creative creative) {
  this->creative = creative;
}

void SimbaCreativeDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("creative")) {
  creative.setParser(responseParser->getObjectParser("creative"));
  creative.parseResponse();
  }

}

