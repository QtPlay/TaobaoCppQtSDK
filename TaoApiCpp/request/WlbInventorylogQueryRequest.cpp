#include <TaoApiCpp/request/WlbInventorylogQueryRequest.h>

QString WlbInventorylogQueryRequest::getApiMethodName() const {
  return "taobao.wlb.inventorylog.query";
}

QDateTime WlbInventorylogQueryRequest::getGmtEnd() const {
  return gmtEnd;
}
void WlbInventorylogQueryRequest::setGmtEnd (QDateTime gmtEnd) {
  this->gmtEnd = gmtEnd;
  appParams.insert("gmt_end", gmtEnd.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime WlbInventorylogQueryRequest::getGmtStart() const {
  return gmtStart;
}
void WlbInventorylogQueryRequest::setGmtStart (QDateTime gmtStart) {
  this->gmtStart = gmtStart;
  appParams.insert("gmt_start", gmtStart.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong WlbInventorylogQueryRequest::getItemId() const {
  return itemId;
}
void WlbInventorylogQueryRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString WlbInventorylogQueryRequest::getOpType() const {
  return opType;
}
void WlbInventorylogQueryRequest::setOpType (QString opType) {
  this->opType = opType;
  appParams.insert("op_type", opType);
}

qlonglong WlbInventorylogQueryRequest::getOpUserId() const {
  return opUserId;
}
void WlbInventorylogQueryRequest::setOpUserId (qlonglong opUserId) {
  this->opUserId = opUserId;
  appParams.insert("op_user_id", QString::number(opUserId));
}

QString WlbInventorylogQueryRequest::getOrderCode() const {
  return orderCode;
}
void WlbInventorylogQueryRequest::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
  appParams.insert("order_code", orderCode);
}

qlonglong WlbInventorylogQueryRequest::getPageNo() const {
  return pageNo;
}
void WlbInventorylogQueryRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbInventorylogQueryRequest::getPageSize() const {
  return pageSize;
}
void WlbInventorylogQueryRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString WlbInventorylogQueryRequest::getStoreCode() const {
  return storeCode;
}
void WlbInventorylogQueryRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}



WlbInventorylogQueryResponse *WlbInventorylogQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbInventorylogQueryResponse *tmpResponse = new WlbInventorylogQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
