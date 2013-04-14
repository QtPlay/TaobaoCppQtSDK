#include <TaoApiCpp/request/TripJipiaoAgentOrderFailRequest.h>

QString TripJipiaoAgentOrderFailRequest::getApiMethodName() const {
  return "taobao.trip.jipiao.agent.order.fail";
}

QString TripJipiaoAgentOrderFailRequest::getFailMemo() const {
  return failMemo;
}
void TripJipiaoAgentOrderFailRequest::setFailMemo (QString failMemo) {
  this->failMemo = failMemo;
  appParams.insert("fail_memo", failMemo);
}

qlonglong TripJipiaoAgentOrderFailRequest::getFailType() const {
  return failType;
}
void TripJipiaoAgentOrderFailRequest::setFailType (qlonglong failType) {
  this->failType = failType;
  appParams.insert("fail_type", QString::number(failType));
}

qlonglong TripJipiaoAgentOrderFailRequest::getOrderId() const {
  return orderId;
}
void TripJipiaoAgentOrderFailRequest::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
  appParams.insert("order_id", QString::number(orderId));
}



TripJipiaoAgentOrderFailResponse *TripJipiaoAgentOrderFailRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TripJipiaoAgentOrderFailResponse *tmpResponse = new TripJipiaoAgentOrderFailResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
