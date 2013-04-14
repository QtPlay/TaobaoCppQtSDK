#include <TaoApiCpp/request/SimbaAdgroupidsChangedGetRequest.h>

QString SimbaAdgroupidsChangedGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroupids.changed.get";
}

QString SimbaAdgroupidsChangedGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupidsChangedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaAdgroupidsChangedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaAdgroupidsChangedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaAdgroupidsChangedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaAdgroupidsChangedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaAdgroupidsChangedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaAdgroupidsChangedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaAdgroupidsChangedGetResponse *SimbaAdgroupidsChangedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupidsChangedGetResponse *tmpResponse = new SimbaAdgroupidsChangedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
