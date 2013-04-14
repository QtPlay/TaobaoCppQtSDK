#include <TaoApiCpp/response/SimbaCreativesChangedGetResponse.h>

CreativePage SimbaCreativesChangedGetResponse::getCreatives() const {
  return creatives;
}
void SimbaCreativesChangedGetResponse::setCreatives (CreativePage creatives) {
  this->creatives = creatives;
}

void SimbaCreativesChangedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("creatives")) {
  creatives.setParser(responseParser->getObjectParser("creatives"));
  creatives.parseResponse();
  }

}

