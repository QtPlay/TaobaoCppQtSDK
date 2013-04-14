#include <TaoApiCpp/request/CaipiaoPresentWinItemsGetRequest.h>

QString CaipiaoPresentWinItemsGetRequest::getApiMethodName() const {
  return "taobao.caipiao.present.win.items.get";
}

qlonglong CaipiaoPresentWinItemsGetRequest::getNum() const {
  return num;
}
void CaipiaoPresentWinItemsGetRequest::setNum (qlonglong num) {
  this->num = num;
  appParams.insert("num", QString::number(num));
}



CaipiaoPresentWinItemsGetResponse *CaipiaoPresentWinItemsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoPresentWinItemsGetResponse *tmpResponse = new CaipiaoPresentWinItemsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
