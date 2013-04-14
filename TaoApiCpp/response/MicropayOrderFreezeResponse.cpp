#include <TaoApiCpp/response/MicropayOrderFreezeResponse.h>

MicroPayOrderDetail MicropayOrderFreezeResponse::getMicroPayOrderDetail() const {
  return microPayOrderDetail;
}
void MicropayOrderFreezeResponse::setMicroPayOrderDetail (MicroPayOrderDetail microPayOrderDetail) {
  this->microPayOrderDetail = microPayOrderDetail;
}

void MicropayOrderFreezeResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("micro_pay_order_detail")) {
  microPayOrderDetail.setParser(responseParser->getObjectParser("micro_pay_order_detail"));
  microPayOrderDetail.parseResponse();
  }

}

