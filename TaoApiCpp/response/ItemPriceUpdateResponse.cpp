#include <TaoApiCpp/response/ItemPriceUpdateResponse.h>

Item ItemPriceUpdateResponse::getItem() const {
  return item;
}
void ItemPriceUpdateResponse::setItem (Item item) {
  this->item = item;
}

void ItemPriceUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

