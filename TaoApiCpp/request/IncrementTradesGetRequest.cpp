#include <TaoApiCpp/request/IncrementTradesGetRequest.h>

QString IncrementTradesGetRequest::getApiMethodName() const {
  return "taobao.increment.trades.get";
}

QDateTime IncrementTradesGetRequest::getEndModified() const {
  return endModified;
}
void IncrementTradesGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString IncrementTradesGetRequest::getNick() const {
  return nick;
}
void IncrementTradesGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong IncrementTradesGetRequest::getPageNo() const {
  return pageNo;
}
void IncrementTradesGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong IncrementTradesGetRequest::getPageSize() const {
  return pageSize;
}
void IncrementTradesGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime IncrementTradesGetRequest::getStartModified() const {
  return startModified;
}
void IncrementTradesGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString IncrementTradesGetRequest::getStatus() const {
  return status;
}
void IncrementTradesGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString IncrementTradesGetRequest::getType() const {
  return type;
}
void IncrementTradesGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



IncrementTradesGetResponse *IncrementTradesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  IncrementTradesGetResponse *tmpResponse = new IncrementTradesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
