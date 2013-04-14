#include <TaoApiCpp/request/AftersaleGetRequest.h>

QString AftersaleGetRequest::getApiMethodName() const {
  return "taobao.aftersale.get";
}



AftersaleGetResponse *AftersaleGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  AftersaleGetResponse *tmpResponse = new AftersaleGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
