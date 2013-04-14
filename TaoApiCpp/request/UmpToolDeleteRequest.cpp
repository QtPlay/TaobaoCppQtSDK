#include <TaoApiCpp/request/UmpToolDeleteRequest.h>

QString UmpToolDeleteRequest::getApiMethodName() const {
  return "taobao.ump.tool.delete";
}

qlonglong UmpToolDeleteRequest::getToolId() const {
  return toolId;
}
void UmpToolDeleteRequest::setToolId (qlonglong toolId) {
  this->toolId = toolId;
  appParams.insert("tool_id", QString::number(toolId));
}



UmpToolDeleteResponse *UmpToolDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpToolDeleteResponse *tmpResponse = new UmpToolDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
