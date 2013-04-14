#include <TaoApiCpp/request/FenxiaoTrademonitorGetRequest.h>

QString FenxiaoTrademonitorGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.trademonitor.get";
}

QString FenxiaoTrademonitorGetRequest::getDistributorNick() const {
  return distributorNick;
}
void FenxiaoTrademonitorGetRequest::setDistributorNick (QString distributorNick) {
  this->distributorNick = distributorNick;
  appParams.insert("distributor_nick", distributorNick);
}

QDateTime FenxiaoTrademonitorGetRequest::getEndCreated() const {
  return endCreated;
}
void FenxiaoTrademonitorGetRequest::setEndCreated (QDateTime endCreated) {
  this->endCreated = endCreated;
  appParams.insert("end_created", endCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString FenxiaoTrademonitorGetRequest::getFields() const {
  return fields;
}
void FenxiaoTrademonitorGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong FenxiaoTrademonitorGetRequest::getPageNo() const {
  return pageNo;
}
void FenxiaoTrademonitorGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong FenxiaoTrademonitorGetRequest::getPageSize() const {
  return pageSize;
}
void FenxiaoTrademonitorGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong FenxiaoTrademonitorGetRequest::getProductId() const {
  return productId;
}
void FenxiaoTrademonitorGetRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QDateTime FenxiaoTrademonitorGetRequest::getStartCreated() const {
  return startCreated;
}
void FenxiaoTrademonitorGetRequest::setStartCreated (QDateTime startCreated) {
  this->startCreated = startCreated;
  appParams.insert("start_created", startCreated.toString("yyyy-MM-dd hh:mm:ss"));
}



FenxiaoTrademonitorGetResponse *FenxiaoTrademonitorGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoTrademonitorGetResponse *tmpResponse = new FenxiaoTrademonitorGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
