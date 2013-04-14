#include <TaoApiCpp/request/EbppBillPayRequest.h>

QString EbppBillPayRequest::getApiMethodName() const {
  return "alipay.ebpp.bill.pay";
}

QString EbppBillPayRequest::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void EbppBillPayRequest::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
  appParams.insert("alipay_order_no", alipayOrderNo);
}

QString EbppBillPayRequest::getAuthToken() const {
  return authToken;
}
void EbppBillPayRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString EbppBillPayRequest::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void EbppBillPayRequest::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
  appParams.insert("merchant_order_no", merchantOrderNo);
}

QString EbppBillPayRequest::getOrderType() const {
  return orderType;
}
void EbppBillPayRequest::setOrderType (QString orderType) {
  this->orderType = orderType;
  appParams.insert("order_type", orderType);
}



EbppBillPayResponse *EbppBillPayRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  EbppBillPayResponse *tmpResponse = new EbppBillPayResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
