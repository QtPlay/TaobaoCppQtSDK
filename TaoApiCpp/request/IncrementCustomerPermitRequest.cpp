#include <TaoApiCpp/request/IncrementCustomerPermitRequest.h>

QString IncrementCustomerPermitRequest::getApiMethodName() const {
  return "taobao.increment.customer.permit";
}

QString IncrementCustomerPermitRequest::getStatus() const {
  return status;
}
void IncrementCustomerPermitRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString IncrementCustomerPermitRequest::getTopics() const {
  return topics;
}
void IncrementCustomerPermitRequest::setTopics (QString topics) {
  this->topics = topics;
  appParams.insert("topics", topics);
}

QString IncrementCustomerPermitRequest::getType() const {
  return type;
}
void IncrementCustomerPermitRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



IncrementCustomerPermitResponse *IncrementCustomerPermitRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  IncrementCustomerPermitResponse *tmpResponse = new IncrementCustomerPermitResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
