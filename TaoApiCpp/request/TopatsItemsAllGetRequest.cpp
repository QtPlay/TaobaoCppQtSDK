#include <TaoApiCpp/request/TopatsItemsAllGetRequest.h>

QString TopatsItemsAllGetRequest::getApiMethodName() const {
  return "taobao.topats.items.all.get";
}

QString TopatsItemsAllGetRequest::getEndTime() const {
  return endTime;
}
void TopatsItemsAllGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString TopatsItemsAllGetRequest::getFields() const {
  return fields;
}
void TopatsItemsAllGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString TopatsItemsAllGetRequest::getStartTime() const {
  return startTime;
}
void TopatsItemsAllGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString TopatsItemsAllGetRequest::getStatus() const {
  return status;
}
void TopatsItemsAllGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}



TopatsItemsAllGetResponse *TopatsItemsAllGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsItemsAllGetResponse *tmpResponse = new TopatsItemsAllGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
