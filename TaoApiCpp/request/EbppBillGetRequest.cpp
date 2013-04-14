#include <TaoApiCpp/request/EbppBillGetRequest.h>

QString EbppBillGetRequest::getApiMethodName() const {
  return "alipay.ebpp.bill.get";
}

QString EbppBillGetRequest::getAuthToken() const {
  return authToken;
}
void EbppBillGetRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString EbppBillGetRequest::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void EbppBillGetRequest::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
  appParams.insert("merchant_order_no", merchantOrderNo);
}

QString EbppBillGetRequest::getOrderType() const {
  return orderType;
}
void EbppBillGetRequest::setOrderType (QString orderType) {
  this->orderType = orderType;
  appParams.insert("order_type", orderType);
}



EbppBillGetResponse *EbppBillGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  EbppBillGetResponse *tmpResponse = new EbppBillGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
