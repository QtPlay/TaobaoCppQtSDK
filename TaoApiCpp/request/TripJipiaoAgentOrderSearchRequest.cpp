#include <TaoApiCpp/request/TripJipiaoAgentOrderSearchRequest.h>

QString TripJipiaoAgentOrderSearchRequest::getApiMethodName() const {
  return "taobao.trip.jipiao.agent.order.search";
}

QDateTime TripJipiaoAgentOrderSearchRequest::getBeginTime() const {
  return beginTime;
}
void TripJipiaoAgentOrderSearchRequest::setBeginTime (QDateTime beginTime) {
  this->beginTime = beginTime;
  appParams.insert("begin_time", beginTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime TripJipiaoAgentOrderSearchRequest::getEndTime() const {
  return endTime;
}
void TripJipiaoAgentOrderSearchRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

bool TripJipiaoAgentOrderSearchRequest::getHasItinerary() const {
  return hasItinerary;
}
void TripJipiaoAgentOrderSearchRequest::setHasItinerary (bool hasItinerary) {
  this->hasItinerary = hasItinerary;
  appParams.insert("has_itinerary", hasItinerary? "true": "false");
}

qlonglong TripJipiaoAgentOrderSearchRequest::getPage() const {
  return page;
}
void TripJipiaoAgentOrderSearchRequest::setPage (qlonglong page) {
  this->page = page;
  appParams.insert("page", QString::number(page));
}

qlonglong TripJipiaoAgentOrderSearchRequest::getStatus() const {
  return status;
}
void TripJipiaoAgentOrderSearchRequest::setStatus (qlonglong status) {
  this->status = status;
  appParams.insert("status", QString::number(status));
}

qlonglong TripJipiaoAgentOrderSearchRequest::getTripType() const {
  return tripType;
}
void TripJipiaoAgentOrderSearchRequest::setTripType (qlonglong tripType) {
  this->tripType = tripType;
  appParams.insert("trip_type", QString::number(tripType));
}



TripJipiaoAgentOrderSearchResponse *TripJipiaoAgentOrderSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TripJipiaoAgentOrderSearchResponse *tmpResponse = new TripJipiaoAgentOrderSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
