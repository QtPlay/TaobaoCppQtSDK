#include <TaoApiCpp/request/WangwangEserviceEvalsGetRequest.h>

QString WangwangEserviceEvalsGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.evals.get";
}

QDateTime WangwangEserviceEvalsGetRequest::getEndDate() const {
  return endDate;
}
void WangwangEserviceEvalsGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WangwangEserviceEvalsGetRequest::getServiceStaffId() const {
  return serviceStaffId;
}
void WangwangEserviceEvalsGetRequest::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
  appParams.insert("service_staff_id", serviceStaffId);
}

QDateTime WangwangEserviceEvalsGetRequest::getStartDate() const {
  return startDate;
}
void WangwangEserviceEvalsGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}



WangwangEserviceEvalsGetResponse *WangwangEserviceEvalsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceEvalsGetResponse *tmpResponse = new WangwangEserviceEvalsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
