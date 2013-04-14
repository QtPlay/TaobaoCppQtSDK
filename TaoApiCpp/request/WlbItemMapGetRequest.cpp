#include <TaoApiCpp/request/WlbItemMapGetRequest.h>

QString WlbItemMapGetRequest::getApiMethodName() const {
  return "taobao.wlb.item.map.get";
}

qlonglong WlbItemMapGetRequest::getItemId() const {
  return itemId;
}
void WlbItemMapGetRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}



WlbItemMapGetResponse *WlbItemMapGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemMapGetResponse *tmpResponse = new WlbItemMapGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
