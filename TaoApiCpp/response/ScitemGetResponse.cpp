#include <TaoApiCpp/response/ScitemGetResponse.h>

ScItem ScitemGetResponse::getScItem() const {
  return scItem;
}
void ScitemGetResponse::setScItem (ScItem scItem) {
  this->scItem = scItem;
}

void ScitemGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sc_item")) {
  scItem.setParser(responseParser->getObjectParser("sc_item"));
  scItem.parseResponse();
  }

}

