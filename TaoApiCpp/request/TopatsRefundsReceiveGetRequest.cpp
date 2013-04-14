#include <TaoApiCpp/request/TopatsRefundsReceiveGetRequest.h>

QString TopatsRefundsReceiveGetRequest::getApiMethodName() const {
  return "taobao.topats.refunds.receive.get";
}

QString TopatsRefundsReceiveGetRequest::getEndTime() const {
  return endTime;
}
void TopatsRefundsReceiveGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString TopatsRefundsReceiveGetRequest::getFields() const {
  return fields;
}
void TopatsRefundsReceiveGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString TopatsRefundsReceiveGetRequest::getStartTime() const {
  return startTime;
}
void TopatsRefundsReceiveGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}



TopatsRefundsReceiveGetResponse *TopatsRefundsReceiveGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsRefundsReceiveGetResponse *tmpResponse = new TopatsRefundsReceiveGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
