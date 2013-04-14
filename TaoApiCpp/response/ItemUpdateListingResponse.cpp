#include <TaoApiCpp/response/ItemUpdateListingResponse.h>

Item ItemUpdateListingResponse::getItem() const {
  return item;
}
void ItemUpdateListingResponse::setItem (Item item) {
  this->item = item;
}

void ItemUpdateListingResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

