#include <TaoApiCpp/request/BillBillsGetRequest.h>

QString BillBillsGetRequest::getApiMethodName() const {
  return "taobao.bill.bills.get";
}

qlonglong BillBillsGetRequest::getAccountId() const {
  return accountId;
}
void BillBillsGetRequest::setAccountId (qlonglong accountId) {
  this->accountId = accountId;
  appParams.insert("account_id", QString::number(accountId));
}

QDateTime BillBillsGetRequest::getEndTime() const {
  return endTime;
}
void BillBillsGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString BillBillsGetRequest::getFields() const {
  return fields;
}
void BillBillsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong BillBillsGetRequest::getOrderId() const {
  return orderId;
}
void BillBillsGetRequest::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
  appParams.insert("order_id", QString::number(orderId));
}

qlonglong BillBillsGetRequest::getPageNo() const {
  return pageNo;
}
void BillBillsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong BillBillsGetRequest::getPageSize() const {
  return pageSize;
}
void BillBillsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime BillBillsGetRequest::getStartTime() const {
  return startTime;
}
void BillBillsGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong BillBillsGetRequest::getTimeType() const {
  return timeType;
}
void BillBillsGetRequest::setTimeType (qlonglong timeType) {
  this->timeType = timeType;
  appParams.insert("time_type", QString::number(timeType));
}

qlonglong BillBillsGetRequest::getTradeId() const {
  return tradeId;
}
void BillBillsGetRequest::setTradeId (qlonglong tradeId) {
  this->tradeId = tradeId;
  appParams.insert("trade_id", QString::number(tradeId));
}



BillBillsGetResponse *BillBillsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  BillBillsGetResponse *tmpResponse = new BillBillsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
