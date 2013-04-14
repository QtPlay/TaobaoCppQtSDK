#include <TaoApiCpp/request/TripJipiaoAgentOrderGetRequest.h>

QString TripJipiaoAgentOrderGetRequest::getApiMethodName() const {
  return "taobao.trip.jipiao.agent.order.get";
}

qlonglong TripJipiaoAgentOrderGetRequest::getOrderIds() const {
  return orderIds;
}
void TripJipiaoAgentOrderGetRequest::setOrderIds (qlonglong orderIds) {
  this->orderIds = orderIds;
  appParams.insert("order_ids", QString::number(orderIds));
}



TripJipiaoAgentOrderGetResponse *TripJipiaoAgentOrderGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TripJipiaoAgentOrderGetResponse *tmpResponse = new TripJipiaoAgentOrderGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
