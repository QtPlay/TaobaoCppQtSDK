#include <TaoApiCpp/request/SimbaCreativesChangedGetRequest.h>

QString SimbaCreativesChangedGetRequest::getApiMethodName() const {
  return "taobao.simba.creatives.changed.get";
}

QString SimbaCreativesChangedGetRequest::getNick() const {
  return nick;
}
void SimbaCreativesChangedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaCreativesChangedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaCreativesChangedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaCreativesChangedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaCreativesChangedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaCreativesChangedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaCreativesChangedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaCreativesChangedGetResponse *SimbaCreativesChangedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCreativesChangedGetResponse *tmpResponse = new SimbaCreativesChangedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
