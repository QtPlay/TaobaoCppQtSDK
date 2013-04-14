#include <TaoApiCpp/request/WlbItemSynchronizeRequest.h>

QString WlbItemSynchronizeRequest::getApiMethodName() const {
  return "taobao.wlb.item.synchronize";
}

qlonglong WlbItemSynchronizeRequest::getExtEntityId() const {
  return extEntityId;
}
void WlbItemSynchronizeRequest::setExtEntityId (qlonglong extEntityId) {
  this->extEntityId = extEntityId;
  appParams.insert("ext_entity_id", QString::number(extEntityId));
}

QString WlbItemSynchronizeRequest::getExtEntityType() const {
  return extEntityType;
}
void WlbItemSynchronizeRequest::setExtEntityType (QString extEntityType) {
  this->extEntityType = extEntityType;
  appParams.insert("ext_entity_type", extEntityType);
}

qlonglong WlbItemSynchronizeRequest::getItemId() const {
  return itemId;
}
void WlbItemSynchronizeRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString WlbItemSynchronizeRequest::getUserNick() const {
  return userNick;
}
void WlbItemSynchronizeRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



WlbItemSynchronizeResponse *WlbItemSynchronizeRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemSynchronizeResponse *tmpResponse = new WlbItemSynchronizeResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
