#include <TaoApiCpp/request/SimbaKeywordidsChangedGetRequest.h>

QString SimbaKeywordidsChangedGetRequest::getApiMethodName() const {
  return "taobao.simba.keywordids.changed.get";
}

QString SimbaKeywordidsChangedGetRequest::getNick() const {
  return nick;
}
void SimbaKeywordidsChangedGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaKeywordidsChangedGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaKeywordidsChangedGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaKeywordidsChangedGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaKeywordidsChangedGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime SimbaKeywordidsChangedGetRequest::getStartTime() const {
  return startTime;
}
void SimbaKeywordidsChangedGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



SimbaKeywordidsChangedGetResponse *SimbaKeywordidsChangedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordidsChangedGetResponse *tmpResponse = new SimbaKeywordidsChangedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
