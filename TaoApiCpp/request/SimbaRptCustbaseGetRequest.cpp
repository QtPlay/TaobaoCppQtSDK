#include <TaoApiCpp/request/SimbaRptCustbaseGetRequest.h>

QString SimbaRptCustbaseGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.custbase.get";
}

QString SimbaRptCustbaseGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptCustbaseGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptCustbaseGetRequest::getNick() const {
  return nick;
}
void SimbaRptCustbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptCustbaseGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptCustbaseGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptCustbaseGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptCustbaseGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptCustbaseGetRequest::getSource() const {
  return source;
}
void SimbaRptCustbaseGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptCustbaseGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptCustbaseGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptCustbaseGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptCustbaseGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptCustbaseGetResponse *SimbaRptCustbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptCustbaseGetResponse *tmpResponse = new SimbaRptCustbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
