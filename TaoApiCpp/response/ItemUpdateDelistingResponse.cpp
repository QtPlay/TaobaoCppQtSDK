#include <TaoApiCpp/response/ItemUpdateDelistingResponse.h>

Item ItemUpdateDelistingResponse::getItem() const {
  return item;
}
void ItemUpdateDelistingResponse::setItem (Item item) {
  this->item = item;
}

void ItemUpdateDelistingResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

