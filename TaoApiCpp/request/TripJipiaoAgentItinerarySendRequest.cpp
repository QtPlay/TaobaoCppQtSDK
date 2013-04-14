#include <TaoApiCpp/request/TripJipiaoAgentItinerarySendRequest.h>

QString TripJipiaoAgentItinerarySendRequest::getApiMethodName() const {
  return "taobao.trip.jipiao.agent.itinerary.send";
}

QString TripJipiaoAgentItinerarySendRequest::getCompanyCode() const {
  return companyCode;
}
void TripJipiaoAgentItinerarySendRequest::setCompanyCode (QString companyCode) {
  this->companyCode = companyCode;
  appParams.insert("company_code", companyCode);
}

QString TripJipiaoAgentItinerarySendRequest::getExpressCode() const {
  return expressCode;
}
void TripJipiaoAgentItinerarySendRequest::setExpressCode (QString expressCode) {
  this->expressCode = expressCode;
  appParams.insert("express_code", expressCode);
}

qlonglong TripJipiaoAgentItinerarySendRequest::getItineraryId() const {
  return itineraryId;
}
void TripJipiaoAgentItinerarySendRequest::setItineraryId (qlonglong itineraryId) {
  this->itineraryId = itineraryId;
  appParams.insert("itinerary_id", QString::number(itineraryId));
}

QString TripJipiaoAgentItinerarySendRequest::getItineraryNo() const {
  return itineraryNo;
}
void TripJipiaoAgentItinerarySendRequest::setItineraryNo (QString itineraryNo) {
  this->itineraryNo = itineraryNo;
  appParams.insert("itinerary_no", itineraryNo);
}

QString TripJipiaoAgentItinerarySendRequest::getSendDate() const {
  return sendDate;
}
void TripJipiaoAgentItinerarySendRequest::setSendDate (QString sendDate) {
  this->sendDate = sendDate;
  appParams.insert("send_date", sendDate);
}



TripJipiaoAgentItinerarySendResponse *TripJipiaoAgentItinerarySendRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TripJipiaoAgentItinerarySendResponse *tmpResponse = new TripJipiaoAgentItinerarySendResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
