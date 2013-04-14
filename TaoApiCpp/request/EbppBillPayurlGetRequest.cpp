#include <TaoApiCpp/request/EbppBillPayurlGetRequest.h>

QString EbppBillPayurlGetRequest::getApiMethodName() const {
  return "alipay.ebpp.bill.payurl.get";
}

QString EbppBillPayurlGetRequest::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void EbppBillPayurlGetRequest::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
  appParams.insert("alipay_order_no", alipayOrderNo);
}

QString EbppBillPayurlGetRequest::getAuthToken() const {
  return authToken;
}
void EbppBillPayurlGetRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString EbppBillPayurlGetRequest::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void EbppBillPayurlGetRequest::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
  appParams.insert("merchant_order_no", merchantOrderNo);
}

QString EbppBillPayurlGetRequest::getOrderType() const {
  return orderType;
}
void EbppBillPayurlGetRequest::setOrderType (QString orderType) {
  this->orderType = orderType;
  appParams.insert("order_type", orderType);
}



EbppBillPayurlGetResponse *EbppBillPayurlGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  EbppBillPayurlGetResponse *tmpResponse = new EbppBillPayurlGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
