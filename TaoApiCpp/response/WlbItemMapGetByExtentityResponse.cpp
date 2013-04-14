#include <TaoApiCpp/response/WlbItemMapGetByExtentityResponse.h>

qlonglong WlbItemMapGetByExtentityResponse::getItemId() const {
  return itemId;
}
void WlbItemMapGetByExtentityResponse::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

void WlbItemMapGetByExtentityResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }

}

