#include <TaoApiCpp/response/ItemUpdateResponse.h>

Item ItemUpdateResponse::getItem() const {
  return item;
}
void ItemUpdateResponse::setItem (Item item) {
  this->item = item;
}

void ItemUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

