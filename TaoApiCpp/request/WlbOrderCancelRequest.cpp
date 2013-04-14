#include <TaoApiCpp/request/WlbOrderCancelRequest.h>

QString WlbOrderCancelRequest::getApiMethodName() const {
  return "taobao.wlb.order.cancel";
}

QString WlbOrderCancelRequest::getWlbOrderCode() const {
  return wlbOrderCode;
}
void WlbOrderCancelRequest::setWlbOrderCode (QString wlbOrderCode) {
  this->wlbOrderCode = wlbOrderCode;
  appParams.insert("wlb_order_code", wlbOrderCode);
}



WlbOrderCancelResponse *WlbOrderCancelRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderCancelResponse *tmpResponse = new WlbOrderCancelResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
