#include <TaoApiCpp/response/PointOrderAddResponse.h>

QString PointOrderAddResponse::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void PointOrderAddResponse::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
}
bool PointOrderAddResponse::getResultCode() const {
  return resultCode;
}
void PointOrderAddResponse::setResultCode (bool resultCode) {
  this->resultCode = resultCode;
}

void PointOrderAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("alipay_order_no")) {
  alipayOrderNo = responseParser->getStrByName("alipay_order_no");
  }
  if (responseParser->hasName("result_code")) {
  resultCode = responseParser->getBoolByName("result_code");
  }

}

