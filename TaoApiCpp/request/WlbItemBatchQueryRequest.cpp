#include <TaoApiCpp/request/WlbItemBatchQueryRequest.h>

QString WlbItemBatchQueryRequest::getApiMethodName() const {
  return "taobao.wlb.item.batch.query";
}

QString WlbItemBatchQueryRequest::getItemIds() const {
  return itemIds;
}
void WlbItemBatchQueryRequest::setItemIds (QString itemIds) {
  this->itemIds = itemIds;
  appParams.insert("item_ids", itemIds);
}

qlonglong WlbItemBatchQueryRequest::getPageNo() const {
  return pageNo;
}
void WlbItemBatchQueryRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbItemBatchQueryRequest::getPageSize() const {
  return pageSize;
}
void WlbItemBatchQueryRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString WlbItemBatchQueryRequest::getStoreCode() const {
  return storeCode;
}
void WlbItemBatchQueryRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}



WlbItemBatchQueryResponse *WlbItemBatchQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemBatchQueryResponse *tmpResponse = new WlbItemBatchQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
