#include <TaoApiCpp/request/WlbItemCombinationDeleteRequest.h>

QString WlbItemCombinationDeleteRequest::getApiMethodName() const {
  return "taobao.wlb.item.combination.delete";
}

QString WlbItemCombinationDeleteRequest::getDestItemList() const {
  return destItemList;
}
void WlbItemCombinationDeleteRequest::setDestItemList (QString destItemList) {
  this->destItemList = destItemList;
  appParams.insert("dest_item_list", destItemList);
}

qlonglong WlbItemCombinationDeleteRequest::getItemId() const {
  return itemId;
}
void WlbItemCombinationDeleteRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}



WlbItemCombinationDeleteResponse *WlbItemCombinationDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemCombinationDeleteResponse *tmpResponse = new WlbItemCombinationDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
