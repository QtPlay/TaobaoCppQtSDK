#include <TaoApiCpp/request/SimbaAdgroupidsDeletedGetRequest.h>

QString SimbaAdgroupidsDeletedGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroupids.deleted.get";
}

QString SimbaAdgroupidsDeletedGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupidsDeletedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaAdgroupidsDeletedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaAdgroupidsDeletedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaAdgroupidsDeletedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaAdgroupidsDeletedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaAdgroupidsDeletedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaAdgroupidsDeletedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaAdgroupidsDeletedGetResponse *SimbaAdgroupidsDeletedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupidsDeletedGetResponse *tmpResponse = new SimbaAdgroupidsDeletedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
