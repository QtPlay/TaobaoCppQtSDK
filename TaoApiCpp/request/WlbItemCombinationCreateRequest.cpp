#include <TaoApiCpp/request/WlbItemCombinationCreateRequest.h>

QString WlbItemCombinationCreateRequest::getApiMethodName() const {
  return "taobao.wlb.item.combination.create";
}

QString WlbItemCombinationCreateRequest::getDestItemList() const {
  return destItemList;
}
void WlbItemCombinationCreateRequest::setDestItemList (QString destItemList) {
  this->destItemList = destItemList;
  appParams.insert("dest_item_list", destItemList);
}

qlonglong WlbItemCombinationCreateRequest::getItemId() const {
  return itemId;
}
void WlbItemCombinationCreateRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString WlbItemCombinationCreateRequest::getProportionList() const {
  return proportionList;
}
void WlbItemCombinationCreateRequest::setProportionList (QString proportionList) {
  this->proportionList = proportionList;
  appParams.insert("proportion_list", proportionList);
}



WlbItemCombinationCreateResponse *WlbItemCombinationCreateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemCombinationCreateResponse *tmpResponse = new WlbItemCombinationCreateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
