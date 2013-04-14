#include <TaoApiCpp/request/WangwangEserviceOnlinetimeGetRequest.h>

QString WangwangEserviceOnlinetimeGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.onlinetime.get";
}

QDateTime WangwangEserviceOnlinetimeGetRequest::getEndDate() const {
  return endDate;
}
void WangwangEserviceOnlinetimeGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WangwangEserviceOnlinetimeGetRequest::getServiceStaffId() const {
  return serviceStaffId;
}
void WangwangEserviceOnlinetimeGetRequest::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
  appParams.insert("service_staff_id", serviceStaffId);
}

QDateTime WangwangEserviceOnlinetimeGetRequest::getStartDate() const {
  return startDate;
}
void WangwangEserviceOnlinetimeGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}



WangwangEserviceOnlinetimeGetResponse *WangwangEserviceOnlinetimeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceOnlinetimeGetResponse *tmpResponse = new WangwangEserviceOnlinetimeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
