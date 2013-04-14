#include <TaoApiCpp/response/EbppBillPayResponse.h>

QString EbppBillPayResponse::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void EbppBillPayResponse::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
}
QString EbppBillPayResponse::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void EbppBillPayResponse::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
}
QString EbppBillPayResponse::getOrderType() const {
  return orderType;
}
void EbppBillPayResponse::setOrderType (QString orderType) {
  this->orderType = orderType;
}

void EbppBillPayResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("alipay_order_no")) {
  alipayOrderNo = responseParser->getStrByName("alipay_order_no");
  }
  if (responseParser->hasName("merchant_order_no")) {
  merchantOrderNo = responseParser->getStrByName("merchant_order_no");
  }
  if (responseParser->hasName("order_type")) {
  orderType = responseParser->getStrByName("order_type");
  }

}

