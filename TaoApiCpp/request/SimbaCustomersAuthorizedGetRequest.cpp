#include <TaoApiCpp/request/SimbaCustomersAuthorizedGetRequest.h>

QString SimbaCustomersAuthorizedGetRequest::getApiMethodName() const {
  return "taobao.simba.customers.authorized.get";
}



SimbaCustomersAuthorizedGetResponse *SimbaCustomersAuthorizedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCustomersAuthorizedGetResponse *tmpResponse = new SimbaCustomersAuthorizedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
