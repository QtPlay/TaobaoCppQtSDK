#include <TaoApiCpp/request/IncrementRefundsGetRequest.h>

QString IncrementRefundsGetRequest::getApiMethodName() const {
  return "taobao.increment.refunds.get";
}

QDateTime IncrementRefundsGetRequest::getEndModified() const {
  return endModified;
}
void IncrementRefundsGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString IncrementRefundsGetRequest::getNick() const {
  return nick;
}
void IncrementRefundsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong IncrementRefundsGetRequest::getPageNo() const {
  return pageNo;
}
void IncrementRefundsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong IncrementRefundsGetRequest::getPageSize() const {
  return pageSize;
}
void IncrementRefundsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime IncrementRefundsGetRequest::getStartModified() const {
  return startModified;
}
void IncrementRefundsGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString IncrementRefundsGetRequest::getStatus() const {
  return status;
}
void IncrementRefundsGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}



IncrementRefundsGetResponse *IncrementRefundsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  IncrementRefundsGetResponse *tmpResponse = new IncrementRefundsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
