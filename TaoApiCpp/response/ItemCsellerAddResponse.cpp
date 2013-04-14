#include <TaoApiCpp/response/ItemCsellerAddResponse.h>

Item ItemCsellerAddResponse::getItem() const {
  return item;
}
void ItemCsellerAddResponse::setItem (Item item) {
  this->item = item;
}

void ItemCsellerAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

