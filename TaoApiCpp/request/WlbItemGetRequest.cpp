#include <TaoApiCpp/request/WlbItemGetRequest.h>

QString WlbItemGetRequest::getApiMethodName() const {
  return "taobao.wlb.item.get";
}

qlonglong WlbItemGetRequest::getItemId() const {
  return itemId;
}
void WlbItemGetRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}



WlbItemGetResponse *WlbItemGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemGetResponse *tmpResponse = new WlbItemGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
