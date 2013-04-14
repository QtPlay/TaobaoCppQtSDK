#include <TaoApiCpp/response/ItemBsellerAddResponse.h>

Item ItemBsellerAddResponse::getItem() const {
  return item;
}
void ItemBsellerAddResponse::setItem (Item item) {
  this->item = item;
}

void ItemBsellerAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

