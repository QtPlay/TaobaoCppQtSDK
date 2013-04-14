#include <TaoApiCpp/request/UmpToolsGetRequest.h>

QString UmpToolsGetRequest::getApiMethodName() const {
  return "taobao.ump.tools.get";
}

QString UmpToolsGetRequest::getToolCode() const {
  return toolCode;
}
void UmpToolsGetRequest::setToolCode (QString toolCode) {
  this->toolCode = toolCode;
  appParams.insert("tool_code", toolCode);
}



UmpToolsGetResponse *UmpToolsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpToolsGetResponse *tmpResponse = new UmpToolsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
