#include <TaoApiCpp/response/ScitemOutercodeGetResponse.h>

ScItem ScitemOutercodeGetResponse::getScItem() const {
  return scItem;
}
void ScitemOutercodeGetResponse::setScItem (ScItem scItem) {
  this->scItem = scItem;
}

void ScitemOutercodeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sc_item")) {
  scItem.setParser(responseParser->getObjectParser("sc_item"));
  scItem.parseResponse();
  }

}

