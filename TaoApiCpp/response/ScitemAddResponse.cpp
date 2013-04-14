#include <TaoApiCpp/response/ScitemAddResponse.h>

ScItem ScitemAddResponse::getScItem() const {
  return scItem;
}
void ScitemAddResponse::setScItem (ScItem scItem) {
  this->scItem = scItem;
}

void ScitemAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sc_item")) {
  scItem.setParser(responseParser->getObjectParser("sc_item"));
  scItem.parseResponse();
  }

}

