#include <TaoApiCpp/request/TimeGetRequest.h>

QString TimeGetRequest::getApiMethodName() const {
  return "taobao.time.get";
}



TimeGetResponse *TimeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TimeGetResponse *tmpResponse = new TimeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
