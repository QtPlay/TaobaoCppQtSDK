#include <TaoApiCpp/response/SkusQuantityUpdateResponse.h>

Item SkusQuantityUpdateResponse::getItem() const {
  return item;
}
void SkusQuantityUpdateResponse::setItem (Item item) {
  this->item = item;
}

void SkusQuantityUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

