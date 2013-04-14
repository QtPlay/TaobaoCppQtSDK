#include <TaoApiCpp/request/WlbOrderstatusGetRequest.h>

QString WlbOrderstatusGetRequest::getApiMethodName() const {
  return "taobao.wlb.orderstatus.get";
}

QString WlbOrderstatusGetRequest::getOrderCode() const {
  return orderCode;
}
void WlbOrderstatusGetRequest::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
  appParams.insert("order_code", orderCode);
}



WlbOrderstatusGetResponse *WlbOrderstatusGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderstatusGetResponse *tmpResponse = new WlbOrderstatusGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
