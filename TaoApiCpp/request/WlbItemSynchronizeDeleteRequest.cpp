#include <TaoApiCpp/request/WlbItemSynchronizeDeleteRequest.h>

QString WlbItemSynchronizeDeleteRequest::getApiMethodName() const {
  return "taobao.wlb.item.synchronize.delete";
}

qlonglong WlbItemSynchronizeDeleteRequest::getExtEntityId() const {
  return extEntityId;
}
void WlbItemSynchronizeDeleteRequest::setExtEntityId (qlonglong extEntityId) {
  this->extEntityId = extEntityId;
  appParams.insert("ext_entity_id", QString::number(extEntityId));
}

QString WlbItemSynchronizeDeleteRequest::getExtEntityType() const {
  return extEntityType;
}
void WlbItemSynchronizeDeleteRequest::setExtEntityType (QString extEntityType) {
  this->extEntityType = extEntityType;
  appParams.insert("ext_entity_type", extEntityType);
}

qlonglong WlbItemSynchronizeDeleteRequest::getItemId() const {
  return itemId;
}
void WlbItemSynchronizeDeleteRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}



WlbItemSynchronizeDeleteResponse *WlbItemSynchronizeDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemSynchronizeDeleteResponse *tmpResponse = new WlbItemSynchronizeDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
