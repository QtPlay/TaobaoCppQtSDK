#include <TaoApiCpp/request/TopatsSimbaCampkeywordbaseGetRequest.h>

QString TopatsSimbaCampkeywordbaseGetRequest::getApiMethodName() const {
  return "taobao.topats.simba.campkeywordbase.get";
}

qlonglong TopatsSimbaCampkeywordbaseGetRequest::getCampaignId() const {
  return campaignId;
}
void TopatsSimbaCampkeywordbaseGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString TopatsSimbaCampkeywordbaseGetRequest::getNick() const {
  return nick;
}
void TopatsSimbaCampkeywordbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString TopatsSimbaCampkeywordbaseGetRequest::getSearchType() const {
  return searchType;
}
void TopatsSimbaCampkeywordbaseGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString TopatsSimbaCampkeywordbaseGetRequest::getSource() const {
  return source;
}
void TopatsSimbaCampkeywordbaseGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString TopatsSimbaCampkeywordbaseGetRequest::getTimeSlot() const {
  return timeSlot;
}
void TopatsSimbaCampkeywordbaseGetRequest::setTimeSlot (QString timeSlot) {
  this->timeSlot = timeSlot;
  appParams.insert("time_slot", timeSlot);
}



TopatsSimbaCampkeywordbaseGetResponse *TopatsSimbaCampkeywordbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsSimbaCampkeywordbaseGetResponse *tmpResponse = new TopatsSimbaCampkeywordbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
