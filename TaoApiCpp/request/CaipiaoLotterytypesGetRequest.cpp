#include <TaoApiCpp/request/CaipiaoLotterytypesGetRequest.h>

QString CaipiaoLotterytypesGetRequest::getApiMethodName() const {
  return "taobao.caipiao.lotterytypes.get";
}



CaipiaoLotterytypesGetResponse *CaipiaoLotterytypesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoLotterytypesGetResponse *tmpResponse = new CaipiaoLotterytypesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
