#include <TaoApiCpp/request/SimbaAdgroupChangedcatmatchsGetRequest.h>

QString SimbaAdgroupChangedcatmatchsGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.changedcatmatchs.get";
}

QString SimbaAdgroupChangedcatmatchsGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupChangedcatmatchsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaAdgroupChangedcatmatchsGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaAdgroupChangedcatmatchsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaAdgroupChangedcatmatchsGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaAdgroupChangedcatmatchsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaAdgroupChangedcatmatchsGetRequest::getStartTime() const {
  return startTime;
}
void SimbaAdgroupChangedcatmatchsGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaAdgroupChangedcatmatchsGetResponse *SimbaAdgroupChangedcatmatchsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupChangedcatmatchsGetResponse *tmpResponse = new SimbaAdgroupChangedcatmatchsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
