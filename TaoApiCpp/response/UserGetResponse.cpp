#include <TaoApiCpp/response/UserGetResponse.h>

AlipayUserDetail UserGetResponse::getAlipayUserDetail() const {
  return alipayUserDetail;
}
void UserGetResponse::setAlipayUserDetail (AlipayUserDetail alipayUserDetail) {
  this->alipayUserDetail = alipayUserDetail;
}

void UserGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("alipay_user_detail")) {
  alipayUserDetail.setParser(responseParser->getObjectParser("alipay_user_detail"));
  alipayUserDetail.parseResponse();
  }

}

