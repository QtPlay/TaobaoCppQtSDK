#include <TaoApiCpp/request/UmpActivityAddRequest.h>

QString UmpActivityAddRequest::getApiMethodName() const {
  return "taobao.ump.activity.add";
}

QString UmpActivityAddRequest::getContent() const {
  return content;
}
void UmpActivityAddRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}

qlonglong UmpActivityAddRequest::getToolId() const {
  return toolId;
}
void UmpActivityAddRequest::setToolId (qlonglong toolId) {
  this->toolId = toolId;
  appParams.insert("tool_id", QString::number(toolId));
}



UmpActivityAddResponse *UmpActivityAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpActivityAddResponse *tmpResponse = new UmpActivityAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
