#include <TaoApiCpp/request/TopatsTasksGetRequest.h>

QString TopatsTasksGetRequest::getApiMethodName() const {
  return "taobao.topats.tasks.get";
}

QDateTime TopatsTasksGetRequest::getEndTime() const {
  return endTime;
}
void TopatsTasksGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime TopatsTasksGetRequest::getStartTime() const {
  return startTime;
}
void TopatsTasksGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



TopatsTasksGetResponse *TopatsTasksGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsTasksGetResponse *tmpResponse = new TopatsTasksGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
