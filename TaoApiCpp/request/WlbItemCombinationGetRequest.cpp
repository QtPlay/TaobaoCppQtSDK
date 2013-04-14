#include <TaoApiCpp/request/WlbItemCombinationGetRequest.h>

QString WlbItemCombinationGetRequest::getApiMethodName() const {
  return "taobao.wlb.item.combination.get";
}

qlonglong WlbItemCombinationGetRequest::getItemId() const {
  return itemId;
}
void WlbItemCombinationGetRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}



WlbItemCombinationGetResponse *WlbItemCombinationGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemCombinationGetResponse *tmpResponse = new WlbItemCombinationGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
