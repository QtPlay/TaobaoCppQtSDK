#include <TaoApiCpp/request/ShopRemainshowcaseGetRequest.h>

QString ShopRemainshowcaseGetRequest::getApiMethodName() const {
  return "taobao.shop.remainshowcase.get";
}



ShopRemainshowcaseGetResponse *ShopRemainshowcaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ShopRemainshowcaseGetResponse *tmpResponse = new ShopRemainshowcaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
