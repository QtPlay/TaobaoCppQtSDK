#include <TaoApiCpp/request/UmpMbbsGetRequest.h>

QString UmpMbbsGetRequest::getApiMethodName() const {
  return "taobao.ump.mbbs.get";
}

QString UmpMbbsGetRequest::getType() const {
  return type;
}
void UmpMbbsGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



UmpMbbsGetResponse *UmpMbbsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpMbbsGetResponse *tmpResponse = new UmpMbbsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
