#include <TaoApiCpp/request/TopatsResultGetRequest.h>

QString TopatsResultGetRequest::getApiMethodName() const {
  return "taobao.topats.result.get";
}

qlonglong TopatsResultGetRequest::getTaskId() const {
  return taskId;
}
void TopatsResultGetRequest::setTaskId (qlonglong taskId) {
  this->taskId = taskId;
  appParams.insert("task_id", QString::number(taskId));
}



TopatsResultGetResponse *TopatsResultGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsResultGetResponse *tmpResponse = new TopatsResultGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
