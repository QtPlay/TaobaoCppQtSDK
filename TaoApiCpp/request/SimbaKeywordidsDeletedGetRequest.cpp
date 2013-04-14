#include <TaoApiCpp/request/SimbaKeywordidsDeletedGetRequest.h>

QString SimbaKeywordidsDeletedGetRequest::getApiMethodName() const {
  return "taobao.simba.keywordids.deleted.get";
}

QString SimbaKeywordidsDeletedGetRequest::getNick() const {
  return nick;
}
void SimbaKeywordidsDeletedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaKeywordidsDeletedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaKeywordidsDeletedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaKeywordidsDeletedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaKeywordidsDeletedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaKeywordidsDeletedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaKeywordidsDeletedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaKeywordidsDeletedGetResponse *SimbaKeywordidsDeletedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordidsDeletedGetResponse *tmpResponse = new SimbaKeywordidsDeletedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
