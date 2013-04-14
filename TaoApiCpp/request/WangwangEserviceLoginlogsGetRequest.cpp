#include <TaoApiCpp/request/WangwangEserviceLoginlogsGetRequest.h>

QString WangwangEserviceLoginlogsGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.loginlogs.get";
}

QDateTime WangwangEserviceLoginlogsGetRequest::getEndDate() const {
  return endDate;
}
void WangwangEserviceLoginlogsGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WangwangEserviceLoginlogsGetRequest::getServiceStaffId() const {
  return serviceStaffId;
}
void WangwangEserviceLoginlogsGetRequest::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
  appParams.insert("service_staff_id", serviceStaffId);
}

QDateTime WangwangEserviceLoginlogsGetRequest::getStartDate() const {
  return startDate;
}
void WangwangEserviceLoginlogsGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}



WangwangEserviceLoginlogsGetResponse *WangwangEserviceLoginlogsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceLoginlogsGetResponse *tmpResponse = new WangwangEserviceLoginlogsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
