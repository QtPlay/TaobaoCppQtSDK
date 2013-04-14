#include <TaoApiCpp/response/ItemQuantityUpdateResponse.h>

Item ItemQuantityUpdateResponse::getItem() const {
  return item;
}
void ItemQuantityUpdateResponse::setItem (Item item) {
  this->item = item;
}

void ItemQuantityUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

