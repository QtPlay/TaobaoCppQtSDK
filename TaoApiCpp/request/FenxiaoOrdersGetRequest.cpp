#include <TaoApiCpp/request/FenxiaoOrdersGetRequest.h>

QString FenxiaoOrdersGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.orders.get";
}

QDateTime FenxiaoOrdersGetRequest::getEndCreated() const {
  return endCreated;
}
void FenxiaoOrdersGetRequest::setEndCreated (QDateTime endCreated) {
  this->endCreated = endCreated;
  appParams.insert("end_created", endCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString FenxiaoOrdersGetRequest::getFields() const {
  return fields;
}
void FenxiaoOrdersGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong FenxiaoOrdersGetRequest::getPageNo() const {
  return pageNo;
}
void FenxiaoOrdersGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong FenxiaoOrdersGetRequest::getPageSize() const {
  return pageSize;
}
void FenxiaoOrdersGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong FenxiaoOrdersGetRequest::getPurchaseOrderId() const {
  return purchaseOrderId;
}
void FenxiaoOrdersGetRequest::setPurchaseOrderId (qlonglong purchaseOrderId) {
  this->purchaseOrderId = purchaseOrderId;
  appParams.insert("purchase_order_id", QString::number(purchaseOrderId));
}

QDateTime FenxiaoOrdersGetRequest::getStartCreated() const {
  return startCreated;
}
void FenxiaoOrdersGetRequest::setStartCreated (QDateTime startCreated) {
  this->startCreated = startCreated;
  appParams.insert("start_created", startCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString FenxiaoOrdersGetRequest::getStatus() const {
  return status;
}
void FenxiaoOrdersGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString FenxiaoOrdersGetRequest::getTimeType() const {
  return timeType;
}
void FenxiaoOrdersGetRequest::setTimeType (QString timeType) {
  this->timeType = timeType;
  appParams.insert("time_type", timeType);
}



FenxiaoOrdersGetResponse *FenxiaoOrdersGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoOrdersGetResponse *tmpResponse = new FenxiaoOrdersGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
