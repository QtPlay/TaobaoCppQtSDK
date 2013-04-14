#include <TaoApiCpp/response/WlbWlborderGetResponse.h>

WlbOrder WlbWlborderGetResponse::getWlbOrder() const {
  return wlbOrder;
}
void WlbWlborderGetResponse::setWlbOrder (WlbOrder wlbOrder) {
  this->wlbOrder = wlbOrder;
}

void WlbWlborderGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("wlb_order")) {
  wlbOrder.setParser(responseParser->getObjectParser("wlb_order"));
  wlbOrder.parseResponse();
  }

}

