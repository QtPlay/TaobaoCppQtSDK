#include <TaoApiCpp/request/CaipiaoSignstatusCheckRequest.h>

QString CaipiaoSignstatusCheckRequest::getApiMethodName() const {
  return "taobao.caipiao.signstatus.check";
}



CaipiaoSignstatusCheckResponse *CaipiaoSignstatusCheckRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoSignstatusCheckResponse *tmpResponse = new CaipiaoSignstatusCheckResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
