#include <TaoApiCpp/request/WlbItemConsignmentPageGetRequest.h>

QString WlbItemConsignmentPageGetRequest::getApiMethodName() const {
  return "taobao.wlb.item.consignment.page.get";
}

qlonglong WlbItemConsignmentPageGetRequest::getIcItemId() const {
  return icItemId;
}
void WlbItemConsignmentPageGetRequest::setIcItemId (qlonglong icItemId) {
  this->icItemId = icItemId;
  appParams.insert("ic_item_id", QString::number(icItemId));
}

qlonglong WlbItemConsignmentPageGetRequest::getOwnerItemId() const {
  return ownerItemId;
}
void WlbItemConsignmentPageGetRequest::setOwnerItemId (qlonglong ownerItemId) {
  this->ownerItemId = ownerItemId;
  appParams.insert("owner_item_id", QString::number(ownerItemId));
}

QString WlbItemConsignmentPageGetRequest::getOwnerUserNick() const {
  return ownerUserNick;
}
void WlbItemConsignmentPageGetRequest::setOwnerUserNick (QString ownerUserNick) {
  this->ownerUserNick = ownerUserNick;
  appParams.insert("owner_user_nick", ownerUserNick);
}



WlbItemConsignmentPageGetResponse *WlbItemConsignmentPageGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemConsignmentPageGetResponse *tmpResponse = new WlbItemConsignmentPageGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
