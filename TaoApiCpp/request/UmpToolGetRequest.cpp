#include <TaoApiCpp/request/UmpToolGetRequest.h>

QString UmpToolGetRequest::getApiMethodName() const {
  return "taobao.ump.tool.get";
}

qlonglong UmpToolGetRequest::getToolId() const {
  return toolId;
}
void UmpToolGetRequest::setToolId (qlonglong toolId) {
  this->toolId = toolId;
  appParams.insert("tool_id", QString::number(toolId));
}



UmpToolGetResponse *UmpToolGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpToolGetResponse *tmpResponse = new UmpToolGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
