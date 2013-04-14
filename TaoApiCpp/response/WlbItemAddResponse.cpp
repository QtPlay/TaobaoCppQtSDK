#include <TaoApiCpp/response/WlbItemAddResponse.h>

qlonglong WlbItemAddResponse::getItemId() const {
  return itemId;
}
void WlbItemAddResponse::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

void WlbItemAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }

}

