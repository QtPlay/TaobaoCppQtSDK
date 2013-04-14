#include <TaoApiCpp/response/MicropayOrderUnfreezeResponse.h>

UnfreezeOrderDetail MicropayOrderUnfreezeResponse::getUnfreezeOrderDetail() const {
  return unfreezeOrderDetail;
}
void MicropayOrderUnfreezeResponse::setUnfreezeOrderDetail (UnfreezeOrderDetail unfreezeOrderDetail) {
  this->unfreezeOrderDetail = unfreezeOrderDetail;
}

void MicropayOrderUnfreezeResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("unfreeze_order_detail")) {
  unfreezeOrderDetail.setParser(responseParser->getObjectParser("unfreeze_order_detail"));
  unfreezeOrderDetail.parseResponse();
  }

}

