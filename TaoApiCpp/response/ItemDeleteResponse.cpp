#include <TaoApiCpp/response/ItemDeleteResponse.h>

Item ItemDeleteResponse::getItem() const {
  return item;
}
void ItemDeleteResponse::setItem (Item item) {
  this->item = item;
}

void ItemDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

