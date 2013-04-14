#include <TaoApiCpp/response/ItemRecommendDeleteResponse.h>

Item ItemRecommendDeleteResponse::getItem() const {
  return item;
}
void ItemRecommendDeleteResponse::setItem (Item item) {
  this->item = item;
}

void ItemRecommendDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

