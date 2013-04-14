#include <TaoApiCpp/response/MicropayOrderGetResponse.h>

MicroPayOrderDetail MicropayOrderGetResponse::getMicroPayOrderDetail() const {
  return microPayOrderDetail;
}
void MicropayOrderGetResponse::setMicroPayOrderDetail (MicroPayOrderDetail microPayOrderDetail) {
  this->microPayOrderDetail = microPayOrderDetail;
}

void MicropayOrderGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("micro_pay_order_detail")) {
  microPayOrderDetail.setParser(responseParser->getObjectParser("micro_pay_order_detail"));
  microPayOrderDetail.parseResponse();
  }

}

