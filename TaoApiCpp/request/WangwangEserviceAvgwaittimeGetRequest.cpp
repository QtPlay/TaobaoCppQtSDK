#include <TaoApiCpp/request/WangwangEserviceAvgwaittimeGetRequest.h>

QString WangwangEserviceAvgwaittimeGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.avgwaittime.get";
}

QDateTime WangwangEserviceAvgwaittimeGetRequest::getEndDate() const {
  return endDate;
}
void WangwangEserviceAvgwaittimeGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WangwangEserviceAvgwaittimeGetRequest::getServiceStaffId() const {
  return serviceStaffId;
}
void WangwangEserviceAvgwaittimeGetRequest::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
  appParams.insert("service_staff_id", serviceStaffId);
}

QDateTime WangwangEserviceAvgwaittimeGetRequest::getStartDate() const {
  return startDate;
}
void WangwangEserviceAvgwaittimeGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}



WangwangEserviceAvgwaittimeGetResponse *WangwangEserviceAvgwaittimeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceAvgwaittimeGetResponse *tmpResponse = new WangwangEserviceAvgwaittimeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
