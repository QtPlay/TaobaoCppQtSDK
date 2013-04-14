#include <TaoApiCpp/request/WangwangEserviceStreamweigthsGetRequest.h>

QString WangwangEserviceStreamweigthsGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.streamweigths.get";
}



WangwangEserviceStreamweigthsGetResponse *WangwangEserviceStreamweigthsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceStreamweigthsGetResponse *tmpResponse = new WangwangEserviceStreamweigthsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
