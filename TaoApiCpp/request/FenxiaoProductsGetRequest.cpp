#include <TaoApiCpp/request/FenxiaoProductsGetRequest.h>

QString FenxiaoProductsGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.products.get";
}

QDateTime FenxiaoProductsGetRequest::getEndModified() const {
  return endModified;
}
void FenxiaoProductsGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString FenxiaoProductsGetRequest::getFields() const {
  return fields;
}
void FenxiaoProductsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString FenxiaoProductsGetRequest::getIsAuthz() const {
  return isAuthz;
}
void FenxiaoProductsGetRequest::setIsAuthz (QString isAuthz) {
  this->isAuthz = isAuthz;
  appParams.insert("is_authz", isAuthz);
}

qlonglong FenxiaoProductsGetRequest::getItemIds() const {
  return itemIds;
}
void FenxiaoProductsGetRequest::setItemIds (qlonglong itemIds) {
  this->itemIds = itemIds;
  appParams.insert("item_ids", QString::number(itemIds));
}

QString FenxiaoProductsGetRequest::getOuterId() const {
  return outerId;
}
void FenxiaoProductsGetRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

qlonglong FenxiaoProductsGetRequest::getPageNo() const {
  return pageNo;
}
void FenxiaoProductsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong FenxiaoProductsGetRequest::getPageSize() const {
  return pageSize;
}
void FenxiaoProductsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong FenxiaoProductsGetRequest::getPids() const {
  return pids;
}
void FenxiaoProductsGetRequest::setPids (qlonglong pids) {
  this->pids = pids;
  appParams.insert("pids", QString::number(pids));
}

qlonglong FenxiaoProductsGetRequest::getProductcatId() const {
  return productcatId;
}
void FenxiaoProductsGetRequest::setProductcatId (qlonglong productcatId) {
  this->productcatId = productcatId;
  appParams.insert("productcat_id", QString::number(productcatId));
}

QString FenxiaoProductsGetRequest::getSkuNumber() const {
  return skuNumber;
}
void FenxiaoProductsGetRequest::setSkuNumber (QString skuNumber) {
  this->skuNumber = skuNumber;
  appParams.insert("sku_number", skuNumber);
}

QDateTime FenxiaoProductsGetRequest::getStartModified() const {
  return startModified;
}
void FenxiaoProductsGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString FenxiaoProductsGetRequest::getStatus() const {
  return status;
}
void FenxiaoProductsGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}



FenxiaoProductsGetResponse *FenxiaoProductsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductsGetResponse *tmpResponse = new FenxiaoProductsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
