#include <TaoApiCpp/request/IncrementItemsGetRequest.h>

QString IncrementItemsGetRequest::getApiMethodName() const {
  return "taobao.increment.items.get";
}

QDateTime IncrementItemsGetRequest::getEndModified() const {
  return endModified;
}
void IncrementItemsGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString IncrementItemsGetRequest::getNick() const {
  return nick;
}
void IncrementItemsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong IncrementItemsGetRequest::getPageNo() const {
  return pageNo;
}
void IncrementItemsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong IncrementItemsGetRequest::getPageSize() const {
  return pageSize;
}
void IncrementItemsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime IncrementItemsGetRequest::getStartModified() const {
  return startModified;
}
void IncrementItemsGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString IncrementItemsGetRequest::getStatus() const {
  return status;
}
void IncrementItemsGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}



IncrementItemsGetResponse *IncrementItemsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  IncrementItemsGetResponse *tmpResponse = new IncrementItemsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
