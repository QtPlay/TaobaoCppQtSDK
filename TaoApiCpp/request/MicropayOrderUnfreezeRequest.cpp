#include <TaoApiCpp/request/MicropayOrderUnfreezeRequest.h>

QString MicropayOrderUnfreezeRequest::getApiMethodName() const {
  return "alipay.micropay.order.unfreeze";
}

QString MicropayOrderUnfreezeRequest::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void MicropayOrderUnfreezeRequest::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
  appParams.insert("alipay_order_no", alipayOrderNo);
}

QString MicropayOrderUnfreezeRequest::getAuthToken() const {
  return authToken;
}
void MicropayOrderUnfreezeRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString MicropayOrderUnfreezeRequest::getMemo() const {
  return memo;
}
void MicropayOrderUnfreezeRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}



MicropayOrderUnfreezeResponse *MicropayOrderUnfreezeRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  MicropayOrderUnfreezeResponse *tmpResponse = new MicropayOrderUnfreezeResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
