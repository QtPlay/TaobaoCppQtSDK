#include <TaoApiCpp/request/WangwangEserviceNoreplynumGetRequest.h>

QString WangwangEserviceNoreplynumGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.noreplynum.get";
}

QDateTime WangwangEserviceNoreplynumGetRequest::getEndDate() const {
  return endDate;
}
void WangwangEserviceNoreplynumGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WangwangEserviceNoreplynumGetRequest::getServiceStaffId() const {
  return serviceStaffId;
}
void WangwangEserviceNoreplynumGetRequest::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
  appParams.insert("service_staff_id", serviceStaffId);
}

QDateTime WangwangEserviceNoreplynumGetRequest::getStartDate() const {
  return startDate;
}
void WangwangEserviceNoreplynumGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}



WangwangEserviceNoreplynumGetResponse *WangwangEserviceNoreplynumGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceNoreplynumGetResponse *tmpResponse = new WangwangEserviceNoreplynumGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
