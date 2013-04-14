#include <TaoApiCpp/request/IncrementAuthorizeMessageGetRequest.h>

QString IncrementAuthorizeMessageGetRequest::getApiMethodName() const {
  return "taobao.increment.authorize.message.get";
}

QDateTime IncrementAuthorizeMessageGetRequest::getEndModified() const {
  return endModified;
}
void IncrementAuthorizeMessageGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString IncrementAuthorizeMessageGetRequest::getNick() const {
  return nick;
}
void IncrementAuthorizeMessageGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong IncrementAuthorizeMessageGetRequest::getPageNo() const {
  return pageNo;
}
void IncrementAuthorizeMessageGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong IncrementAuthorizeMessageGetRequest::getPageSize() const {
  return pageSize;
}
void IncrementAuthorizeMessageGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime IncrementAuthorizeMessageGetRequest::getStartModified() const {
  return startModified;
}
void IncrementAuthorizeMessageGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString IncrementAuthorizeMessageGetRequest::getStatus() const {
  return status;
}
void IncrementAuthorizeMessageGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString IncrementAuthorizeMessageGetRequest::getTopic() const {
  return topic;
}
void IncrementAuthorizeMessageGetRequest::setTopic (QString topic) {
  this->topic = topic;
  appParams.insert("topic", topic);
}



IncrementAuthorizeMessageGetResponse *IncrementAuthorizeMessageGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  IncrementAuthorizeMessageGetResponse *tmpResponse = new IncrementAuthorizeMessageGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
