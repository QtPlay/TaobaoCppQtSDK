#include <TaoApiCpp/request/WlbItemDeleteRequest.h>

QString WlbItemDeleteRequest::getApiMethodName() const {
  return "taobao.wlb.item.delete";
}

qlonglong WlbItemDeleteRequest::getItemId() const {
  return itemId;
}
void WlbItemDeleteRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString WlbItemDeleteRequest::getUserNick() const {
  return userNick;
}
void WlbItemDeleteRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



WlbItemDeleteResponse *WlbItemDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemDeleteResponse *tmpResponse = new WlbItemDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
