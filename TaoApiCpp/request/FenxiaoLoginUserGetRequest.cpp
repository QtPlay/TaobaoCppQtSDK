#include <TaoApiCpp/request/FenxiaoLoginUserGetRequest.h>

QString FenxiaoLoginUserGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.login.user.get";
}



FenxiaoLoginUserGetResponse *FenxiaoLoginUserGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoLoginUserGetResponse *tmpResponse = new FenxiaoLoginUserGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
