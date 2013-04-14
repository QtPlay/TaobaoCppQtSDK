#include <TaoApiCpp/request/SimbaCreativeidsDeletedGetRequest.h>

QString SimbaCreativeidsDeletedGetRequest::getApiMethodName() const {
  return "taobao.simba.creativeids.deleted.get";
}

QString SimbaCreativeidsDeletedGetRequest::getNick() const {
  return nick;
}
void SimbaCreativeidsDeletedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaCreativeidsDeletedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaCreativeidsDeletedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaCreativeidsDeletedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaCreativeidsDeletedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaCreativeidsDeletedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaCreativeidsDeletedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaCreativeidsDeletedGetResponse *SimbaCreativeidsDeletedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCreativeidsDeletedGetResponse *tmpResponse = new SimbaCreativeidsDeletedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
