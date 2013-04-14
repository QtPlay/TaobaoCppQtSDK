#include <TaoApiCpp/response/MicropayOrderDirectPayResponse.h>

SinglePayDetail MicropayOrderDirectPayResponse::getSinglePayDetail() const {
  return singlePayDetail;
}
void MicropayOrderDirectPayResponse::setSinglePayDetail (SinglePayDetail singlePayDetail) {
  this->singlePayDetail = singlePayDetail;
}

void MicropayOrderDirectPayResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("single_pay_detail")) {
  singlePayDetail.setParser(responseParser->getObjectParser("single_pay_detail"));
  singlePayDetail.parseResponse();
  }

}

