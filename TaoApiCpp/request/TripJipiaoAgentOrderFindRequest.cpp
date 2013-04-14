#include <TaoApiCpp/request/TripJipiaoAgentOrderFindRequest.h>

QString TripJipiaoAgentOrderFindRequest::getApiMethodName() const {
  return "taobao.trip.jipiao.agent.order.find";
}

QDateTime TripJipiaoAgentOrderFindRequest::getBeginTime() const {
  return beginTime;
}
void TripJipiaoAgentOrderFindRequest::setBeginTime (QDateTime beginTime) {
  this->beginTime = beginTime;
  appParams.insert("begin_time", beginTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime TripJipiaoAgentOrderFindRequest::getEndTime() const {
  return endTime;
}
void TripJipiaoAgentOrderFindRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong TripJipiaoAgentOrderFindRequest::getPage() const {
  return page;
}
void TripJipiaoAgentOrderFindRequest::setPage (qlonglong page) {
  this->page = page;
  appParams.insert("page", QString::number(page));
}

qlonglong TripJipiaoAgentOrderFindRequest::getPolicyId() const {
  return policyId;
}
void TripJipiaoAgentOrderFindRequest::setPolicyId (qlonglong policyId) {
  this->policyId = policyId;
  appParams.insert("policy_id", QString::number(policyId));
}



TripJipiaoAgentOrderFindResponse *TripJipiaoAgentOrderFindRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TripJipiaoAgentOrderFindResponse *tmpResponse = new TripJipiaoAgentOrderFindResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
