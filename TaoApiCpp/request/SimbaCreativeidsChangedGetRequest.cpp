#include <TaoApiCpp/request/SimbaCreativeidsChangedGetRequest.h>

QString SimbaCreativeidsChangedGetRequest::getApiMethodName() const {
  return "taobao.simba.creativeids.changed.get";
}

QString SimbaCreativeidsChangedGetRequest::getNick() const {
  return nick;
}
void SimbaCreativeidsChangedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaCreativeidsChangedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaCreativeidsChangedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaCreativeidsChangedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaCreativeidsChangedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaCreativeidsChangedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaCreativeidsChangedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaCreativeidsChangedGetResponse *SimbaCreativeidsChangedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCreativeidsChangedGetResponse *tmpResponse = new SimbaCreativeidsChangedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
