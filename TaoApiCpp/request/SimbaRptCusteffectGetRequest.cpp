#include <TaoApiCpp/request/SimbaRptCusteffectGetRequest.h>

QString SimbaRptCusteffectGetRequest::getApiMethodName() const {
  return "taobao.simba.rpt.custeffect.get";
}

QString SimbaRptCusteffectGetRequest::getEndTime() const {
  return endTime;
}
void SimbaRptCusteffectGetRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString SimbaRptCusteffectGetRequest::getNick() const {
  return nick;
}
void SimbaRptCusteffectGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaRptCusteffectGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaRptCusteffectGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaRptCusteffectGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaRptCusteffectGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaRptCusteffectGetRequest::getSource() const {
  return source;
}
void SimbaRptCusteffectGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString SimbaRptCusteffectGetRequest::getStartTime() const {
  return startTime;
}
void SimbaRptCusteffectGetRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}

QString SimbaRptCusteffectGetRequest::getSubwayToken() const {
  return subwayToken;
}
void SimbaRptCusteffectGetRequest::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
  appParams.insert("subway_token", subwayToken);
}



SimbaRptCusteffectGetResponse *SimbaRptCusteffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaRptCusteffectGetResponse *tmpResponse = new SimbaRptCusteffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
