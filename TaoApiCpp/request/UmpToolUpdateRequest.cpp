#include <TaoApiCpp/request/UmpToolUpdateRequest.h>

QString UmpToolUpdateRequest::getApiMethodName() const {
  return "taobao.ump.tool.update";
}

QString UmpToolUpdateRequest::getContent() const {
  return content;
}
void UmpToolUpdateRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}

qlonglong UmpToolUpdateRequest::getToolId() const {
  return toolId;
}
void UmpToolUpdateRequest::setToolId (qlonglong toolId) {
  this->toolId = toolId;
  appParams.insert("tool_id", QString::number(toolId));
}



UmpToolUpdateResponse *UmpToolUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpToolUpdateResponse *tmpResponse = new UmpToolUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
