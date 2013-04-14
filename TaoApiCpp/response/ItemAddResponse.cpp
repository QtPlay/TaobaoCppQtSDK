#include <TaoApiCpp/response/ItemAddResponse.h>

Item ItemAddResponse::getItem() const {
  return item;
}
void ItemAddResponse::setItem (Item item) {
  this->item = item;
}

void ItemAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

