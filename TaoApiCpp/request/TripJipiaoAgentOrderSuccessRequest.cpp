#include <TaoApiCpp/request/TripJipiaoAgentOrderSuccessRequest.h>

QString TripJipiaoAgentOrderSuccessRequest::getApiMethodName() const {
  return "taobao.trip.jipiao.agent.order.success";
}

qlonglong TripJipiaoAgentOrderSuccessRequest::getOrderId() const {
  return orderId;
}
void TripJipiaoAgentOrderSuccessRequest::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
  appParams.insert("order_id", QString::number(orderId));
}

QString TripJipiaoAgentOrderSuccessRequest::getSuccessInfo() const {
  return successInfo;
}
void TripJipiaoAgentOrderSuccessRequest::setSuccessInfo (QString successInfo) {
  this->successInfo = successInfo;
  appParams.insert("success_info", successInfo);
}



TripJipiaoAgentOrderSuccessResponse *TripJipiaoAgentOrderSuccessRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TripJipiaoAgentOrderSuccessResponse *tmpResponse = new TripJipiaoAgentOrderSuccessResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
