#include <TaoApiCpp/response/WlbOrderstatusGetResponse.h>

QList<WlbProcessStatus> WlbOrderstatusGetResponse::getWlbOrderStatus() const {
  return wlbOrderStatus;
}
void WlbOrderstatusGetResponse::setWlbOrderStatus (QList<WlbProcessStatus> wlbOrderStatus) {
  this->wlbOrderStatus = wlbOrderStatus;
}

void WlbOrderstatusGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("wlb_order_status")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("wlb_order_status");
  Parser *parser;
  foreach (parser, listParser) {
    WlbProcessStatus tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    wlbOrderStatus.append(tmp);
  }
  }

}

