#include <TaoApiCpp/request/CaipiaoGoodsInfoGetRequest.h>

QString CaipiaoGoodsInfoGetRequest::getApiMethodName() const {
  return "taobao.caipiao.goods.info.get";
}



CaipiaoGoodsInfoGetResponse *CaipiaoGoodsInfoGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoGoodsInfoGetResponse *tmpResponse = new CaipiaoGoodsInfoGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
