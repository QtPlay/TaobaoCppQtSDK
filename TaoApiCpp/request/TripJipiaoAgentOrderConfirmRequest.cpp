#include <TaoApiCpp/request/TripJipiaoAgentOrderConfirmRequest.h>

QString TripJipiaoAgentOrderConfirmRequest::getApiMethodName() const {
  return "taobao.trip.jipiao.agent.order.confirm";
}

qlonglong TripJipiaoAgentOrderConfirmRequest::getOrderId() const {
  return orderId;
}
void TripJipiaoAgentOrderConfirmRequest::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
  appParams.insert("order_id", QString::number(orderId));
}

QString TripJipiaoAgentOrderConfirmRequest::getPnrInfo() const {
  return pnrInfo;
}
void TripJipiaoAgentOrderConfirmRequest::setPnrInfo (QString pnrInfo) {
  this->pnrInfo = pnrInfo;
  appParams.insert("pnr_info", pnrInfo);
}



TripJipiaoAgentOrderConfirmResponse *TripJipiaoAgentOrderConfirmRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TripJipiaoAgentOrderConfirmResponse *tmpResponse = new TripJipiaoAgentOrderConfirmResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
