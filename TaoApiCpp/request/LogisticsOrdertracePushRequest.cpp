#include <TaoApiCpp/request/LogisticsOrdertracePushRequest.h>

QString LogisticsOrdertracePushRequest::getApiMethodName() const {
  return "taobao.logistics.ordertrace.push";
}

QString LogisticsOrdertracePushRequest::getCompanyName() const {
  return companyName;
}
void LogisticsOrdertracePushRequest::setCompanyName (QString companyName) {
  this->companyName = companyName;
  appParams.insert("company_name", companyName);
}

QString LogisticsOrdertracePushRequest::getCurrentCity() const {
  return currentCity;
}
void LogisticsOrdertracePushRequest::setCurrentCity (QString currentCity) {
  this->currentCity = currentCity;
  appParams.insert("current_city", currentCity);
}

QString LogisticsOrdertracePushRequest::getFacilityName() const {
  return facilityName;
}
void LogisticsOrdertracePushRequest::setFacilityName (QString facilityName) {
  this->facilityName = facilityName;
  appParams.insert("facility_name", facilityName);
}

QString LogisticsOrdertracePushRequest::getMailNo() const {
  return mailNo;
}
void LogisticsOrdertracePushRequest::setMailNo (QString mailNo) {
  this->mailNo = mailNo;
  appParams.insert("mail_no", mailNo);
}

QString LogisticsOrdertracePushRequest::getNextCity() const {
  return nextCity;
}
void LogisticsOrdertracePushRequest::setNextCity (QString nextCity) {
  this->nextCity = nextCity;
  appParams.insert("next_city", nextCity);
}

QString LogisticsOrdertracePushRequest::getNodeDescription() const {
  return nodeDescription;
}
void LogisticsOrdertracePushRequest::setNodeDescription (QString nodeDescription) {
  this->nodeDescription = nodeDescription;
  appParams.insert("node_description", nodeDescription);
}

QDateTime LogisticsOrdertracePushRequest::getOccureTime() const {
  return occureTime;
}
void LogisticsOrdertracePushRequest::setOccureTime (QDateTime occureTime) {
  this->occureTime = occureTime;
  appParams.insert("occure_time", occureTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString LogisticsOrdertracePushRequest::getOperateDetail() const {
  return operateDetail;
}
void LogisticsOrdertracePushRequest::setOperateDetail (QString operateDetail) {
  this->operateDetail = operateDetail;
  appParams.insert("operate_detail", operateDetail);
}

QString LogisticsOrdertracePushRequest::getOperatorContact() const {
  return operatorContact;
}
void LogisticsOrdertracePushRequest::setOperatorContact (QString operatorContact) {
  this->operatorContact = operatorContact;
  appParams.insert("operator_contact", operatorContact);
}

QString LogisticsOrdertracePushRequest::getOperatorName() const {
  return operatorName;
}
void LogisticsOrdertracePushRequest::setOperatorName (QString operatorName) {
  this->operatorName = operatorName;
  appParams.insert("operator_name", operatorName);
}



LogisticsOrdertracePushResponse *LogisticsOrdertracePushRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOrdertracePushResponse *tmpResponse = new LogisticsOrdertracePushResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
