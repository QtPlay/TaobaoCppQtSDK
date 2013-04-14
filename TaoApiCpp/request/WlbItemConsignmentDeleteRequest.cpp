#include <TaoApiCpp/request/WlbItemConsignmentDeleteRequest.h>

QString WlbItemConsignmentDeleteRequest::getApiMethodName() const {
  return "taobao.wlb.item.consignment.delete";
}

qlonglong WlbItemConsignmentDeleteRequest::getIcItemId() const {
  return icItemId;
}
void WlbItemConsignmentDeleteRequest::setIcItemId (qlonglong icItemId) {
  this->icItemId = icItemId;
  appParams.insert("ic_item_id", QString::number(icItemId));
}

qlonglong WlbItemConsignmentDeleteRequest::getOwnerItemId() const {
  return ownerItemId;
}
void WlbItemConsignmentDeleteRequest::setOwnerItemId (qlonglong ownerItemId) {
  this->ownerItemId = ownerItemId;
  appParams.insert("owner_item_id", QString::number(ownerItemId));
}

qlonglong WlbItemConsignmentDeleteRequest::getRuleId() const {
  return ruleId;
}
void WlbItemConsignmentDeleteRequest::setRuleId (qlonglong ruleId) {
  this->ruleId = ruleId;
  appParams.insert("rule_id", QString::number(ruleId));
}



WlbItemConsignmentDeleteResponse *WlbItemConsignmentDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemConsignmentDeleteResponse *tmpResponse = new WlbItemConsignmentDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
