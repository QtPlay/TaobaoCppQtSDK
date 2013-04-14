#include <TaoApiCpp/request/SimbaCatmatchidsChangedGetRequest.h>

QString SimbaCatmatchidsChangedGetRequest::getApiMethodName() const {
  return "taobao.simba.catmatchids.changed.get";
}

QString SimbaCatmatchidsChangedGetRequest::getNick() const {
  return nick;
}
void SimbaCatmatchidsChangedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaCatmatchidsChangedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaCatmatchidsChangedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaCatmatchidsChangedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaCatmatchidsChangedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaCatmatchidsChangedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaCatmatchidsChangedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaCatmatchidsChangedGetResponse *SimbaCatmatchidsChangedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCatmatchidsChangedGetResponse *tmpResponse = new SimbaCatmatchidsChangedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
