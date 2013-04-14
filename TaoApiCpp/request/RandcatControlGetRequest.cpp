#include <TaoApiCpp/request/RandcatControlGetRequest.h>

QString RandcatControlGetRequest::getApiMethodName() const {
  return "tmall.brandcat.control.get";
}



RandcatControlGetResponse *RandcatControlGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RandcatControlGetResponse *tmpResponse = new RandcatControlGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
