#include <TaoApiCpp/request/LogisticsOrdersGetRequest.h>

QString LogisticsOrdersGetRequest::getApiMethodName() const {
  return "taobao.logistics.orders.get";
}

QString LogisticsOrdersGetRequest::getBuyerNick() const {
  return buyerNick;
}
void LogisticsOrdersGetRequest::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
  appParams.insert("buyer_nick", buyerNick);
}

QDateTime LogisticsOrdersGetRequest::getEndCreated() const {
  return endCreated;
}
void LogisticsOrdersGetRequest::setEndCreated (QDateTime endCreated) {
  this->endCreated = endCreated;
  appParams.insert("end_created", endCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString LogisticsOrdersGetRequest::getFields() const {
  return fields;
}
void LogisticsOrdersGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString LogisticsOrdersGetRequest::getFreightPayer() const {
  return freightPayer;
}
void LogisticsOrdersGetRequest::setFreightPayer (QString freightPayer) {
  this->freightPayer = freightPayer;
  appParams.insert("freight_payer", freightPayer);
}

qlonglong LogisticsOrdersGetRequest::getPageNo() const {
  return pageNo;
}
void LogisticsOrdersGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong LogisticsOrdersGetRequest::getPageSize() const {
  return pageSize;
}
void LogisticsOrdersGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString LogisticsOrdersGetRequest::getReceiverName() const {
  return receiverName;
}
void LogisticsOrdersGetRequest::setReceiverName (QString receiverName) {
  this->receiverName = receiverName;
  appParams.insert("receiver_name", receiverName);
}

QString LogisticsOrdersGetRequest::getSellerConfirm() const {
  return sellerConfirm;
}
void LogisticsOrdersGetRequest::setSellerConfirm (QString sellerConfirm) {
  this->sellerConfirm = sellerConfirm;
  appParams.insert("seller_confirm", sellerConfirm);
}

QDateTime LogisticsOrdersGetRequest::getStartCreated() const {
  return startCreated;
}
void LogisticsOrdersGetRequest::setStartCreated (QDateTime startCreated) {
  this->startCreated = startCreated;
  appParams.insert("start_created", startCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString LogisticsOrdersGetRequest::getStatus() const {
  return status;
}
void LogisticsOrdersGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

qlonglong LogisticsOrdersGetRequest::getTid() const {
  return tid;
}
void LogisticsOrdersGetRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}

QString LogisticsOrdersGetRequest::getType() const {
  return type;
}
void LogisticsOrdersGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



LogisticsOrdersGetResponse *LogisticsOrdersGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOrdersGetResponse *tmpResponse = new LogisticsOrdersGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
