#include <TaoApiCpp/request/TopatsTradesSoldGetRequest.h>

QString TopatsTradesSoldGetRequest::getApiMethodName() const {
  return "taobao.topats.trades.sold.get";
}

QString TopatsTradesSoldGetRequest::getEndTime() const {
  return endTime;
}
void TopatsTradesSoldGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString TopatsTradesSoldGetRequest::getFields() const {
  return fields;
}
void TopatsTradesSoldGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TopatsTradesSoldGetRequest::getIsAcookie() const {
  return isAcookie;
}
void TopatsTradesSoldGetRequest::setIsAcookie (bool isAcookie) {
  this->isAcookie = isAcookie;
  appParams.insert("is_acookie", isAcookie? "true": "false");
}

QString TopatsTradesSoldGetRequest::getStartTime() const {
  return startTime;
}
void TopatsTradesSoldGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}



TopatsTradesSoldGetResponse *TopatsTradesSoldGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsTradesSoldGetResponse *tmpResponse = new TopatsTradesSoldGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
