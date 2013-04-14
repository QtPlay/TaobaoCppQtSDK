#include <TaoApiCpp/request/MicropayOrderFreezepayurlGetRequest.h>

QString MicropayOrderFreezepayurlGetRequest::getApiMethodName() const {
  return "alipay.micropay.order.freezepayurl.get";
}

QString MicropayOrderFreezepayurlGetRequest::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void MicropayOrderFreezepayurlGetRequest::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
  appParams.insert("alipay_order_no", alipayOrderNo);
}

QString MicropayOrderFreezepayurlGetRequest::getAuthToken() const {
  return authToken;
}
void MicropayOrderFreezepayurlGetRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}



MicropayOrderFreezepayurlGetResponse *MicropayOrderFreezepayurlGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  MicropayOrderFreezepayurlGetResponse *tmpResponse = new MicropayOrderFreezepayurlGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
