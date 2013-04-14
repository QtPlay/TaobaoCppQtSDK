#include <TaoApiCpp/request/SimbaAdgroupDeletedcatmatchsGetRequest.h>

QString SimbaAdgroupDeletedcatmatchsGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.deletedcatmatchs.get";
}

QString SimbaAdgroupDeletedcatmatchsGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupDeletedcatmatchsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaAdgroupDeletedcatmatchsGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaAdgroupDeletedcatmatchsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaAdgroupDeletedcatmatchsGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaAdgroupDeletedcatmatchsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaAdgroupDeletedcatmatchsGetRequest::getStartTime() const {
  return startTime;
}
void SimbaAdgroupDeletedcatmatchsGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaAdgroupDeletedcatmatchsGetResponse *SimbaAdgroupDeletedcatmatchsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupDeletedcatmatchsGetResponse *tmpResponse = new SimbaAdgroupDeletedcatmatchsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
