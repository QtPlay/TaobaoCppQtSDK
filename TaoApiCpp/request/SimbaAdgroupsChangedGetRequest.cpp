#include <TaoApiCpp/request/SimbaAdgroupsChangedGetRequest.h>

QString SimbaAdgroupsChangedGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroups.changed.get";
}

QString SimbaAdgroupsChangedGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupsChangedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaAdgroupsChangedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaAdgroupsChangedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaAdgroupsChangedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaAdgroupsChangedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaAdgroupsChangedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaAdgroupsChangedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaAdgroupsChangedGetResponse *SimbaAdgroupsChangedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupsChangedGetResponse *tmpResponse = new SimbaAdgroupsChangedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
