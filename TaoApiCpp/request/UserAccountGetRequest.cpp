#include <TaoApiCpp/request/UserAccountGetRequest.h>

QString UserAccountGetRequest::getApiMethodName() const {
  return "alipay.user.account.get";
}



UserAccountGetResponse *UserAccountGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UserAccountGetResponse *tmpResponse = new UserAccountGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
