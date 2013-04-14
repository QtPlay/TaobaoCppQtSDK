#include <TaoApiCpp/request/WlbItemConsignmentCreateRequest.h>

QString WlbItemConsignmentCreateRequest::getApiMethodName() const {
  return "taobao.wlb.item.consignment.create";
}

qlonglong WlbItemConsignmentCreateRequest::getItemId() const {
  return itemId;
}
void WlbItemConsignmentCreateRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

qlonglong WlbItemConsignmentCreateRequest::getNumber() const {
  return number;
}
void WlbItemConsignmentCreateRequest::setNumber (qlonglong number) {
  this->number = number;
  appParams.insert("number", QString::number(number));
}

qlonglong WlbItemConsignmentCreateRequest::getOwnerItemId() const {
  return ownerItemId;
}
void WlbItemConsignmentCreateRequest::setOwnerItemId (qlonglong ownerItemId) {
  this->ownerItemId = ownerItemId;
  appParams.insert("owner_item_id", QString::number(ownerItemId));
}

qlonglong WlbItemConsignmentCreateRequest::getOwnerUserId() const {
  return ownerUserId;
}
void WlbItemConsignmentCreateRequest::setOwnerUserId (qlonglong ownerUserId) {
  this->ownerUserId = ownerUserId;
  appParams.insert("owner_user_id", QString::number(ownerUserId));
}

qlonglong WlbItemConsignmentCreateRequest::getRuleId() const {
  return ruleId;
}
void WlbItemConsignmentCreateRequest::setRuleId (qlonglong ruleId) {
  this->ruleId = ruleId;
  appParams.insert("rule_id", QString::number(ruleId));
}



WlbItemConsignmentCreateResponse *WlbItemConsignmentCreateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemConsignmentCreateResponse *tmpResponse = new WlbItemConsignmentCreateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
