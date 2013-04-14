#include <TaoApiCpp/request/SimbaCatmatchidsDeletedGetRequest.h>

QString SimbaCatmatchidsDeletedGetRequest::getApiMethodName() const {
  return "taobao.simba.catmatchids.deleted.get";
}

QString SimbaCatmatchidsDeletedGetRequest::getNick() const {
  return nick;
}
void SimbaCatmatchidsDeletedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaCatmatchidsDeletedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaCatmatchidsDeletedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaCatmatchidsDeletedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaCatmatchidsDeletedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaCatmatchidsDeletedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaCatmatchidsDeletedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaCatmatchidsDeletedGetResponse *SimbaCatmatchidsDeletedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCatmatchidsDeletedGetResponse *tmpResponse = new SimbaCatmatchidsDeletedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
