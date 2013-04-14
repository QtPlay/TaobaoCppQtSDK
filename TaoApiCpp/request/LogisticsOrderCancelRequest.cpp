#include <TaoApiCpp/request/LogisticsOrderCancelRequest.h>

QString LogisticsOrderCancelRequest::getApiMethodName() const {
  return "alibaba.logistics.order.cancel";
}

qlonglong LogisticsOrderCancelRequest::getOrderId() const {
  return orderId;
}
void LogisticsOrderCancelRequest::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
  appParams.insert("order_id", QString::number(orderId));
}

QString LogisticsOrderCancelRequest::getReason() const {
  return reason;
}
void LogisticsOrderCancelRequest::setReason (QString reason) {
  this->reason = reason;
  appParams.insert("reason", reason);
}



LogisticsOrderCancelResponse *LogisticsOrderCancelRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOrderCancelResponse *tmpResponse = new LogisticsOrderCancelResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
