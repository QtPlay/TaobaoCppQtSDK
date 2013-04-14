#include <TaoApiCpp/request/FenxiaoDistributorItemsGetRequest.h>

QString FenxiaoDistributorItemsGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.distributor.items.get";
}

qlonglong FenxiaoDistributorItemsGetRequest::getDistributorId() const {
  return distributorId;
}
void FenxiaoDistributorItemsGetRequest::setDistributorId (qlonglong distributorId) {
  this->distributorId = distributorId;
  appParams.insert("distributor_id", QString::number(distributorId));
}

QDateTime FenxiaoDistributorItemsGetRequest::getEndModified() const {
  return endModified;
}
void FenxiaoDistributorItemsGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong FenxiaoDistributorItemsGetRequest::getPageNo() const {
  return pageNo;
}
void FenxiaoDistributorItemsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong FenxiaoDistributorItemsGetRequest::getPageSize() const {
  return pageSize;
}
void FenxiaoDistributorItemsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong FenxiaoDistributorItemsGetRequest::getProductId() const {
  return productId;
}
void FenxiaoDistributorItemsGetRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QDateTime FenxiaoDistributorItemsGetRequest::getStartModified() const {
  return startModified;
}
void FenxiaoDistributorItemsGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}



FenxiaoDistributorItemsGetResponse *FenxiaoDistributorItemsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoDistributorItemsGetResponse *tmpResponse = new FenxiaoDistributorItemsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
