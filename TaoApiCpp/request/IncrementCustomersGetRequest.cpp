#include <TaoApiCpp/request/IncrementCustomersGetRequest.h>

QString IncrementCustomersGetRequest::getApiMethodName() const {
  return "taobao.increment.customers.get";
}

QString IncrementCustomersGetRequest::getFields() const {
  return fields;
}
void IncrementCustomersGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString IncrementCustomersGetRequest::getNicks() const {
  return nicks;
}
void IncrementCustomersGetRequest::setNicks (QString nicks) {
  this->nicks = nicks;
  appParams.insert("nicks", nicks);
}

qlonglong IncrementCustomersGetRequest::getPageNo() const {
  return pageNo;
}
void IncrementCustomersGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong IncrementCustomersGetRequest::getPageSize() const {
  return pageSize;
}
void IncrementCustomersGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString IncrementCustomersGetRequest::getType() const {
  return type;
}
void IncrementCustomersGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



IncrementCustomersGetResponse *IncrementCustomersGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  IncrementCustomersGetResponse *tmpResponse = new IncrementCustomersGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
