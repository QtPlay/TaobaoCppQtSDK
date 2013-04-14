#include <TaoApiCpp/response/MicropayOrderConfirmpayurlGetResponse.h>

SinglePayDetail MicropayOrderConfirmpayurlGetResponse::getSinglePayDetail() const {
  return singlePayDetail;
}
void MicropayOrderConfirmpayurlGetResponse::setSinglePayDetail (SinglePayDetail singlePayDetail) {
  this->singlePayDetail = singlePayDetail;
}

void MicropayOrderConfirmpayurlGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("single_pay_detail")) {
  singlePayDetail.setParser(responseParser->getObjectParser("single_pay_detail"));
  singlePayDetail.parseResponse();
  }

}

