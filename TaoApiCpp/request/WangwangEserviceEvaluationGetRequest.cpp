#include <TaoApiCpp/request/WangwangEserviceEvaluationGetRequest.h>

QString WangwangEserviceEvaluationGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.evaluation.get";
}

QDateTime WangwangEserviceEvaluationGetRequest::getEndDate() const {
  return endDate;
}
void WangwangEserviceEvaluationGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WangwangEserviceEvaluationGetRequest::getServiceStaffId() const {
  return serviceStaffId;
}
void WangwangEserviceEvaluationGetRequest::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
  appParams.insert("service_staff_id", serviceStaffId);
}

QDateTime WangwangEserviceEvaluationGetRequest::getStartDate() const {
  return startDate;
}
void WangwangEserviceEvaluationGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}



WangwangEserviceEvaluationGetResponse *WangwangEserviceEvaluationGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceEvaluationGetResponse *tmpResponse = new WangwangEserviceEvaluationGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
