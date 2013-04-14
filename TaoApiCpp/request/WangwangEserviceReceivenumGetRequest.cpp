#include <TaoApiCpp/request/WangwangEserviceReceivenumGetRequest.h>

QString WangwangEserviceReceivenumGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.receivenum.get";
}

QDateTime WangwangEserviceReceivenumGetRequest::getEndDate() const {
  return endDate;
}
void WangwangEserviceReceivenumGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WangwangEserviceReceivenumGetRequest::getServiceStaffId() const {
  return serviceStaffId;
}
void WangwangEserviceReceivenumGetRequest::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
  appParams.insert("service_staff_id", serviceStaffId);
}

QDateTime WangwangEserviceReceivenumGetRequest::getStartDate() const {
  return startDate;
}
void WangwangEserviceReceivenumGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}



WangwangEserviceReceivenumGetResponse *WangwangEserviceReceivenumGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceReceivenumGetResponse *tmpResponse = new WangwangEserviceReceivenumGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
