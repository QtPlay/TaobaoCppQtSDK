#include <TaoApiCpp/request/WlbItemAuthorizationQueryRequest.h>

QString WlbItemAuthorizationQueryRequest::getApiMethodName() const {
  return "taobao.wlb.item.authorization.query";
}

qlonglong WlbItemAuthorizationQueryRequest::getItemId() const {
  return itemId;
}
void WlbItemAuthorizationQueryRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString WlbItemAuthorizationQueryRequest::getName() const {
  return name;
}
void WlbItemAuthorizationQueryRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

qlonglong WlbItemAuthorizationQueryRequest::getPageNo() const {
  return pageNo;
}
void WlbItemAuthorizationQueryRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbItemAuthorizationQueryRequest::getPageSize() const {
  return pageSize;
}
void WlbItemAuthorizationQueryRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString WlbItemAuthorizationQueryRequest::getRuleCode() const {
  return ruleCode;
}
void WlbItemAuthorizationQueryRequest::setRuleCode (QString ruleCode) {
  this->ruleCode = ruleCode;
  appParams.insert("rule_code", ruleCode);
}

QString WlbItemAuthorizationQueryRequest::getStatus() const {
  return status;
}
void WlbItemAuthorizationQueryRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString WlbItemAuthorizationQueryRequest::getType() const {
  return type;
}
void WlbItemAuthorizationQueryRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



WlbItemAuthorizationQueryResponse *WlbItemAuthorizationQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemAuthorizationQueryResponse *tmpResponse = new WlbItemAuthorizationQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
