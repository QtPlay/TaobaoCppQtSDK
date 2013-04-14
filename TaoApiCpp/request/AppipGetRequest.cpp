#include <TaoApiCpp/request/AppipGetRequest.h>

QString AppipGetRequest::getApiMethodName() const {
  return "taobao.appip.get";
}



AppipGetResponse *AppipGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  AppipGetResponse *tmpResponse = new AppipGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
