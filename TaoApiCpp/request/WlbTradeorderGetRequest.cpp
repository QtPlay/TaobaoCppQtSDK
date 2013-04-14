#include <TaoApiCpp/request/WlbTradeorderGetRequest.h>

QString WlbTradeorderGetRequest::getApiMethodName() const {
  return "taobao.wlb.tradeorder.get";
}

QString WlbTradeorderGetRequest::getTradeId() const {
  return tradeId;
}
void WlbTradeorderGetRequest::setTradeId (QString tradeId) {
  this->tradeId = tradeId;
  appParams.insert("trade_id", tradeId);
}

QString WlbTradeorderGetRequest::getTradeType() const {
  return tradeType;
}
void WlbTradeorderGetRequest::setTradeType (QString tradeType) {
  this->tradeType = tradeType;
  appParams.insert("trade_type", tradeType);
}



WlbTradeorderGetResponse *WlbTradeorderGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbTradeorderGetResponse *tmpResponse = new WlbTradeorderGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
