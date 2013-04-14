#include <TaoApiCpp/request/LogisticsCompaniesGetRequest.h>

QString LogisticsCompaniesGetRequest::getApiMethodName() const {
  return "taobao.logistics.companies.get";
}

QString LogisticsCompaniesGetRequest::getFields() const {
  return fields;
}
void LogisticsCompaniesGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool LogisticsCompaniesGetRequest::getIsRecommended() const {
  return isRecommended;
}
void LogisticsCompaniesGetRequest::setIsRecommended (bool isRecommended) {
  this->isRecommended = isRecommended;
  appParams.insert("is_recommended", isRecommended? "true": "false");
}

QString LogisticsCompaniesGetRequest::getOrderMode() const {
  return orderMode;
}
void LogisticsCompaniesGetRequest::setOrderMode (QString orderMode) {
  this->orderMode = orderMode;
  appParams.insert("order_mode", orderMode);
}



LogisticsCompaniesGetResponse *LogisticsCompaniesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsCompaniesGetResponse *tmpResponse = new LogisticsCompaniesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
