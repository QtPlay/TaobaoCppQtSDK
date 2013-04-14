#include <TaoApiCpp/request/TopatsTaskDeleteRequest.h>

QString TopatsTaskDeleteRequest::getApiMethodName() const {
  return "taobao.topats.task.delete";
}

qlonglong TopatsTaskDeleteRequest::getTaskId() const {
  return taskId;
}
void TopatsTaskDeleteRequest::setTaskId (qlonglong taskId) {
  this->taskId = taskId;
  appParams.insert("task_id", QString::number(taskId));
}



TopatsTaskDeleteResponse *TopatsTaskDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsTaskDeleteResponse *tmpResponse = new TopatsTaskDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
