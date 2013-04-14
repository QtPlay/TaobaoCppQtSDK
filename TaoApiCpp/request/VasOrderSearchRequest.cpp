#include <TaoApiCpp/request/VasOrderSearchRequest.h>

QString VasOrderSearchRequest::getApiMethodName() const {
  return "taobao.vas.order.search";
}

QString VasOrderSearchRequest::getArticleCode() const {
  return articleCode;
}
void VasOrderSearchRequest::setArticleCode (QString articleCode) {
  this->articleCode = articleCode;
  appParams.insert("article_code", articleCode);
}

qlonglong VasOrderSearchRequest::getBizOrderId() const {
  return bizOrderId;
}
void VasOrderSearchRequest::setBizOrderId (qlonglong bizOrderId) {
  this->bizOrderId = bizOrderId;
  appParams.insert("biz_order_id", QString::number(bizOrderId));
}

qlonglong VasOrderSearchRequest::getBizType() const {
  return bizType;
}
void VasOrderSearchRequest::setBizType (qlonglong bizType) {
  this->bizType = bizType;
  appParams.insert("biz_type", QString::number(bizType));
}

QDateTime VasOrderSearchRequest::getEndCreated() const {
  return endCreated;
}
void VasOrderSearchRequest::setEndCreated (QDateTime endCreated) {
  this->endCreated = endCreated;
  appParams.insert("end_created", endCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString VasOrderSearchRequest::getItemCode() const {
  return itemCode;
}
void VasOrderSearchRequest::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
  appParams.insert("item_code", itemCode);
}

QString VasOrderSearchRequest::getNick() const {
  return nick;
}
void VasOrderSearchRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong VasOrderSearchRequest::getOrderId() const {
  return orderId;
}
void VasOrderSearchRequest::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
  appParams.insert("order_id", QString::number(orderId));
}

qlonglong VasOrderSearchRequest::getPageNo() const {
  return pageNo;
}
void VasOrderSearchRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong VasOrderSearchRequest::getPageSize() const {
  return pageSize;
}
void VasOrderSearchRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime VasOrderSearchRequest::getStartCreated() const {
  return startCreated;
}
void VasOrderSearchRequest::setStartCreated (QDateTime startCreated) {
  this->startCreated = startCreated;
  appParams.insert("start_created", startCreated.toString("yyyy-MM-dd hh:mm:ss"));
}



VasOrderSearchResponse *VasOrderSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  VasOrderSearchResponse *tmpResponse = new VasOrderSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
