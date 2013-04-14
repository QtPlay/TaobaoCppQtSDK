#include <TaoApiCpp/request/TopatsUserAccountreportGetRequest.h>

QString TopatsUserAccountreportGetRequest::getApiMethodName() const {
  return "alipay.topats.user.accountreport.get";
}

QString TopatsUserAccountreportGetRequest::getCharset() const {
  return charset;
}
void TopatsUserAccountreportGetRequest::setCharset (QString charset) {
  this->charset = charset;
  appParams.insert("charset", charset);
}

QDateTime TopatsUserAccountreportGetRequest::getEndTime() const {
  return endTime;
}
void TopatsUserAccountreportGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TopatsUserAccountreportGetRequest::getFields() const {
  return fields;
}
void TopatsUserAccountreportGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QDateTime TopatsUserAccountreportGetRequest::getStartTime() const {
  return startTime;
}
void TopatsUserAccountreportGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TopatsUserAccountreportGetRequest::getType() const {
  return type;
}
void TopatsUserAccountreportGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



TopatsUserAccountreportGetResponse *TopatsUserAccountreportGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsUserAccountreportGetResponse *tmpResponse = new TopatsUserAccountreportGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
