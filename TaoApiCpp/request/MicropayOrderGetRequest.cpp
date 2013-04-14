#include <TaoApiCpp/request/MicropayOrderGetRequest.h>

QString MicropayOrderGetRequest::getApiMethodName() const {
  return "alipay.micropay.order.get";
}

QString MicropayOrderGetRequest::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void MicropayOrderGetRequest::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
  appParams.insert("alipay_order_no", alipayOrderNo);
}

QString MicropayOrderGetRequest::getAuthToken() const {
  return authToken;
}
void MicropayOrderGetRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}



MicropayOrderGetResponse *MicropayOrderGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  MicropayOrderGetResponse *tmpResponse = new MicropayOrderGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
