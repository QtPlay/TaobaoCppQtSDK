#include <TaoApiCpp/request/LogisticsOrdersDetailGetRequest.h>

QString LogisticsOrdersDetailGetRequest::getApiMethodName() const {
  return "taobao.logistics.orders.detail.get";
}

QString LogisticsOrdersDetailGetRequest::getBuyerNick() const {
  return buyerNick;
}
void LogisticsOrdersDetailGetRequest::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
  appParams.insert("buyer_nick", buyerNick);
}

QDateTime LogisticsOrdersDetailGetRequest::getEndCreated() const {
  return endCreated;
}
void LogisticsOrdersDetailGetRequest::setEndCreated (QDateTime endCreated) {
  this->endCreated = endCreated;
  appParams.insert("end_created", endCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString LogisticsOrdersDetailGetRequest::getFields() const {
  return fields;
}
void LogisticsOrdersDetailGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString LogisticsOrdersDetailGetRequest::getFreightPayer() const {
  return freightPayer;
}
void LogisticsOrdersDetailGetRequest::setFreightPayer (QString freightPayer) {
  this->freightPayer = freightPayer;
  appParams.insert("freight_payer", freightPayer);
}

qlonglong LogisticsOrdersDetailGetRequest::getPageNo() const {
  return pageNo;
}
void LogisticsOrdersDetailGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong LogisticsOrdersDetailGetRequest::getPageSize() const {
  return pageSize;
}
void LogisticsOrdersDetailGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString LogisticsOrdersDetailGetRequest::getReceiverName() const {
  return receiverName;
}
void LogisticsOrdersDetailGetRequest::setReceiverName (QString receiverName) {
  this->receiverName = receiverName;
  appParams.insert("receiver_name", receiverName);
}

QString LogisticsOrdersDetailGetRequest::getSellerConfirm() const {
  return sellerConfirm;
}
void LogisticsOrdersDetailGetRequest::setSellerConfirm (QString sellerConfirm) {
  this->sellerConfirm = sellerConfirm;
  appParams.insert("seller_confirm", sellerConfirm);
}

QDateTime LogisticsOrdersDetailGetRequest::getStartCreated() const {
  return startCreated;
}
void LogisticsOrdersDetailGetRequest::setStartCreated (QDateTime startCreated) {
  this->startCreated = startCreated;
  appParams.insert("start_created", startCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString LogisticsOrdersDetailGetRequest::getStatus() const {
  return status;
}
void LogisticsOrdersDetailGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

qlonglong LogisticsOrdersDetailGetRequest::getTid() const {
  return tid;
}
void LogisticsOrdersDetailGetRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}

QString LogisticsOrdersDetailGetRequest::getType() const {
  return type;
}
void LogisticsOrdersDetailGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



LogisticsOrdersDetailGetResponse *LogisticsOrdersDetailGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOrdersDetailGetResponse *tmpResponse = new LogisticsOrdersDetailGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
