#include <TaoApiCpp/request/TripJipiaoAgentOrderHkRequest.h>

QString TripJipiaoAgentOrderHkRequest::getApiMethodName() const {
  return "taobao.trip.jipiao.agent.order.hk";
}

qlonglong TripJipiaoAgentOrderHkRequest::getOrderId() const {
  return orderId;
}
void TripJipiaoAgentOrderHkRequest::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
  appParams.insert("order_id", QString::number(orderId));
}

QString TripJipiaoAgentOrderHkRequest::getPnrInfo() const {
  return pnrInfo;
}
void TripJipiaoAgentOrderHkRequest::setPnrInfo (QString pnrInfo) {
  this->pnrInfo = pnrInfo;
  appParams.insert("pnr_info", pnrInfo);
}



TripJipiaoAgentOrderHkResponse *TripJipiaoAgentOrderHkRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TripJipiaoAgentOrderHkResponse *tmpResponse = new TripJipiaoAgentOrderHkResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
