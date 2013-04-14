#include <TaoApiCpp/response/ItemRecommendAddResponse.h>

Item ItemRecommendAddResponse::getItem() const {
  return item;
}
void ItemRecommendAddResponse::setItem (Item item) {
  this->item = item;
}

void ItemRecommendAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

