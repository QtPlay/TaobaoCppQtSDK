#include <TaoApiCpp/request/WlbWlborderGetRequest.h>

QString WlbWlborderGetRequest::getApiMethodName() const {
  return "taobao.wlb.wlborder.get";
}

QString WlbWlborderGetRequest::getWlbOrderCode() const {
  return wlbOrderCode;
}
void WlbWlborderGetRequest::setWlbOrderCode (QString wlbOrderCode) {
  this->wlbOrderCode = wlbOrderCode;
  appParams.insert("wlb_order_code", wlbOrderCode);
}



WlbWlborderGetResponse *WlbWlborderGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbWlborderGetResponse *tmpResponse = new WlbWlborderGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
