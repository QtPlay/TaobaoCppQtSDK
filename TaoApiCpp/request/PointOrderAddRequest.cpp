#include <TaoApiCpp/request/PointOrderAddRequest.h>

QString PointOrderAddRequest::getApiMethodName() const {
  return "alipay.point.order.add";
}

QString PointOrderAddRequest::getAuthToken() const {
  return authToken;
}
void PointOrderAddRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString PointOrderAddRequest::getMemo() const {
  return memo;
}
void PointOrderAddRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}

QString PointOrderAddRequest::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void PointOrderAddRequest::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
  appParams.insert("merchant_order_no", merchantOrderNo);
}

QDateTime PointOrderAddRequest::getOrderTime() const {
  return orderTime;
}
void PointOrderAddRequest::setOrderTime (QDateTime orderTime) {
  this->orderTime = orderTime;
  appParams.insert("order_time", orderTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong PointOrderAddRequest::getPointCount() const {
  return pointCount;
}
void PointOrderAddRequest::setPointCount (qlonglong pointCount) {
  this->pointCount = pointCount;
  appParams.insert("point_count", QString::number(pointCount));
}

QString PointOrderAddRequest::getUserSymbol() const {
  return userSymbol;
}
void PointOrderAddRequest::setUserSymbol (QString userSymbol) {
  this->userSymbol = userSymbol;
  appParams.insert("user_symbol", userSymbol);
}

QString PointOrderAddRequest::getUserSymbolType() const {
  return userSymbolType;
}
void PointOrderAddRequest::setUserSymbolType (QString userSymbolType) {
  this->userSymbolType = userSymbolType;
  appParams.insert("user_symbol_type", userSymbolType);
}



PointOrderAddResponse *PointOrderAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PointOrderAddResponse *tmpResponse = new PointOrderAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
