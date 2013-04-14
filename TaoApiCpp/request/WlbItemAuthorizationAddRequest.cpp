#include <TaoApiCpp/request/WlbItemAuthorizationAddRequest.h>

QString WlbItemAuthorizationAddRequest::getApiMethodName() const {
  return "taobao.wlb.item.authorization.add";
}

qlonglong WlbItemAuthorizationAddRequest::getAuthType() const {
  return authType;
}
void WlbItemAuthorizationAddRequest::setAuthType (qlonglong authType) {
  this->authType = authType;
  appParams.insert("auth_type", QString::number(authType));
}

QDateTime WlbItemAuthorizationAddRequest::getAuthorizeEndTime() const {
  return authorizeEndTime;
}
void WlbItemAuthorizationAddRequest::setAuthorizeEndTime (QDateTime authorizeEndTime) {
  this->authorizeEndTime = authorizeEndTime;
  appParams.insert("authorize_end_time", authorizeEndTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime WlbItemAuthorizationAddRequest::getAuthorizeStartTime() const {
  return authorizeStartTime;
}
void WlbItemAuthorizationAddRequest::setAuthorizeStartTime (QDateTime authorizeStartTime) {
  this->authorizeStartTime = authorizeStartTime;
  appParams.insert("authorize_start_time", authorizeStartTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WlbItemAuthorizationAddRequest::getConsignUserNick() const {
  return consignUserNick;
}
void WlbItemAuthorizationAddRequest::setConsignUserNick (QString consignUserNick) {
  this->consignUserNick = consignUserNick;
  appParams.insert("consign_user_nick", consignUserNick);
}

QString WlbItemAuthorizationAddRequest::getItemIdList() const {
  return itemIdList;
}
void WlbItemAuthorizationAddRequest::setItemIdList (QString itemIdList) {
  this->itemIdList = itemIdList;
  appParams.insert("item_id_list", itemIdList);
}

QString WlbItemAuthorizationAddRequest::getName() const {
  return name;
}
void WlbItemAuthorizationAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

qlonglong WlbItemAuthorizationAddRequest::getQuantity() const {
  return quantity;
}
void WlbItemAuthorizationAddRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}

QString WlbItemAuthorizationAddRequest::getRuleCode() const {
  return ruleCode;
}
void WlbItemAuthorizationAddRequest::setRuleCode (QString ruleCode) {
  this->ruleCode = ruleCode;
  appParams.insert("rule_code", ruleCode);
}



WlbItemAuthorizationAddResponse *WlbItemAuthorizationAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemAuthorizationAddResponse *tmpResponse = new WlbItemAuthorizationAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
