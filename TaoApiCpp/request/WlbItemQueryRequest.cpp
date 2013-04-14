#include <TaoApiCpp/request/WlbItemQueryRequest.h>

QString WlbItemQueryRequest::getApiMethodName() const {
  return "taobao.wlb.item.query";
}

QString WlbItemQueryRequest::getIsSku() const {
  return isSku;
}
void WlbItemQueryRequest::setIsSku (QString isSku) {
  this->isSku = isSku;
  appParams.insert("is_sku", isSku);
}

QString WlbItemQueryRequest::getItemCode() const {
  return itemCode;
}
void WlbItemQueryRequest::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
  appParams.insert("item_code", itemCode);
}

QString WlbItemQueryRequest::getItemType() const {
  return itemType;
}
void WlbItemQueryRequest::setItemType (QString itemType) {
  this->itemType = itemType;
  appParams.insert("item_type", itemType);
}

QString WlbItemQueryRequest::getName() const {
  return name;
}
void WlbItemQueryRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

qlonglong WlbItemQueryRequest::getPageNo() const {
  return pageNo;
}
void WlbItemQueryRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbItemQueryRequest::getPageSize() const {
  return pageSize;
}
void WlbItemQueryRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong WlbItemQueryRequest::getParentId() const {
  return parentId;
}
void WlbItemQueryRequest::setParentId (qlonglong parentId) {
  this->parentId = parentId;
  appParams.insert("parent_id", QString::number(parentId));
}

QString WlbItemQueryRequest::getStatus() const {
  return status;
}
void WlbItemQueryRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString WlbItemQueryRequest::getTitle() const {
  return title;
}
void WlbItemQueryRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



WlbItemQueryResponse *WlbItemQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemQueryResponse *tmpResponse = new WlbItemQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
