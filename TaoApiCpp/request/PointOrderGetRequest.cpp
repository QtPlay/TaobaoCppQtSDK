#include <TaoApiCpp/request/PointOrderGetRequest.h>

QString PointOrderGetRequest::getApiMethodName() const {
  return "alipay.point.order.get";
}

QString PointOrderGetRequest::getAuthToken() const {
  return authToken;
}
void PointOrderGetRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString PointOrderGetRequest::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void PointOrderGetRequest::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
  appParams.insert("merchant_order_no", merchantOrderNo);
}

QString PointOrderGetRequest::getUserSymbol() const {
  return userSymbol;
}
void PointOrderGetRequest::setUserSymbol (QString userSymbol) {
  this->userSymbol = userSymbol;
  appParams.insert("user_symbol", userSymbol);
}

QString PointOrderGetRequest::getUserSymbolType() const {
  return userSymbolType;
}
void PointOrderGetRequest::setUserSymbolType (QString userSymbolType) {
  this->userSymbolType = userSymbolType;
  appParams.insert("user_symbol_type", userSymbolType);
}



PointOrderGetResponse *PointOrderGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PointOrderGetResponse *tmpResponse = new PointOrderGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
