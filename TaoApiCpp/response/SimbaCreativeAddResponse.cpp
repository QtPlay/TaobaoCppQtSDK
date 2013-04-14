#include <TaoApiCpp/response/SimbaCreativeAddResponse.h>

Creative SimbaCreativeAddResponse::getCreative() const {
  return creative;
}
void SimbaCreativeAddResponse::setCreative (Creative creative) {
  this->creative = creative;
}

void SimbaCreativeAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("creative")) {
  creative.setParser(responseParser->getObjectParser("creative"));
  creative.parseResponse();
  }

}

