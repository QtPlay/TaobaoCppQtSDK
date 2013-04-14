#include <TaoApiCpp/response/SimbaCreativeUpdateResponse.h>

CreativeRecord SimbaCreativeUpdateResponse::getCreativerecord() const {
  return creativerecord;
}
void SimbaCreativeUpdateResponse::setCreativerecord (CreativeRecord creativerecord) {
  this->creativerecord = creativerecord;
}

void SimbaCreativeUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("creativerecord")) {
  creativerecord.setParser(responseParser->getObjectParser("creativerecord"));
  creativerecord.parseResponse();
  }

}

