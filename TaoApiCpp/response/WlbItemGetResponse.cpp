#include <TaoApiCpp/response/WlbItemGetResponse.h>

WlbItem WlbItemGetResponse::getItem() const {
  return item;
}
void WlbItemGetResponse::setItem (WlbItem item) {
  this->item = item;
}

void WlbItemGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item")) {
  item.setParser(responseParser->getObjectParser("item"));
  item.parseResponse();
  }

}

