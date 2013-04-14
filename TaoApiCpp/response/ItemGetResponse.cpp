#include <TaoApiCpp/response/ItemGetResponse.h>

Item ItemGetResponse::getItem() const {
  return item;
}
void ItemGetResponse::setItem (Item item) {
  this->item = item;
}

void ItemGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

