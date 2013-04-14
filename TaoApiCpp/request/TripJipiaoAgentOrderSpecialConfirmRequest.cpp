#include <TaoApiCpp/request/TripJipiaoAgentOrderSpecialConfirmRequest.h>

QString TripJipiaoAgentOrderSpecialConfirmRequest::getApiMethodName() const {
  return "taobao.trip.jipiao.agent.order.special.confirm";
}

bool TripJipiaoAgentOrderSpecialConfirmRequest::getCanPay() const {
  return canPay;
}
void TripJipiaoAgentOrderSpecialConfirmRequest::setCanPay (bool canPay) {
  this->canPay = canPay;
  appParams.insert("can_pay", canPay? "true": "false");
}

QString TripJipiaoAgentOrderSpecialConfirmRequest::getFailMemo() const {
  return failMemo;
}
void TripJipiaoAgentOrderSpecialConfirmRequest::setFailMemo (QString failMemo) {
  this->failMemo = failMemo;
  appParams.insert("fail_memo", failMemo);
}

qlonglong TripJipiaoAgentOrderSpecialConfirmRequest::getFailType() const {
  return failType;
}
void TripJipiaoAgentOrderSpecialConfirmRequest::setFailType (qlonglong failType) {
  this->failType = failType;
  appParams.insert("fail_type", QString::number(failType));
}

qlonglong TripJipiaoAgentOrderSpecialConfirmRequest::getOrderId() const {
  return orderId;
}
void TripJipiaoAgentOrderSpecialConfirmRequest::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
  appParams.insert("order_id", QString::number(orderId));
}

QDateTime TripJipiaoAgentOrderSpecialConfirmRequest::getPayLatestTime() const {
  return payLatestTime;
}
void TripJipiaoAgentOrderSpecialConfirmRequest::setPayLatestTime (QDateTime payLatestTime) {
  this->payLatestTime = payLatestTime;
  appParams.insert("pay_latest_time", payLatestTime.toString("yyyy-MM-dd hh:mm:ss"));
}



TripJipiaoAgentOrderSpecialConfirmResponse *TripJipiaoAgentOrderSpecialConfirmRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TripJipiaoAgentOrderSpecialConfirmResponse *tmpResponse = new TripJipiaoAgentOrderSpecialConfirmResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
