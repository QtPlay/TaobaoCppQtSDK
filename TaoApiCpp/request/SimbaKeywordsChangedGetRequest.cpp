#include <TaoApiCpp/request/SimbaKeywordsChangedGetRequest.h>

QString SimbaKeywordsChangedGetRequest::getApiMethodName() const {
  return "taobao.simba.keywords.changed.get";
}

QString SimbaKeywordsChangedGetRequest::getNick() const {
  return nick;
}
void SimbaKeywordsChangedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaKeywordsChangedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaKeywordsChangedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaKeywordsChangedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaKeywordsChangedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaKeywordsChangedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaKeywordsChangedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaKeywordsChangedGetResponse *SimbaKeywordsChangedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordsChangedGetResponse *tmpResponse = new SimbaKeywordsChangedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
