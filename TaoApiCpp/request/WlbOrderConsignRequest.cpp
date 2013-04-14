#include <TaoApiCpp/request/WlbOrderConsignRequest.h>

QString WlbOrderConsignRequest::getApiMethodName() const {
  return "taobao.wlb.order.consign";
}

QString WlbOrderConsignRequest::getWlbOrderCode() const {
  return wlbOrderCode;
}
void WlbOrderConsignRequest::setWlbOrderCode (QString wlbOrderCode) {
  this->wlbOrderCode = wlbOrderCode;
  appParams.insert("wlb_order_code", wlbOrderCode);
}



WlbOrderConsignResponse *WlbOrderConsignRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderConsignResponse *tmpResponse = new WlbOrderConsignResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
