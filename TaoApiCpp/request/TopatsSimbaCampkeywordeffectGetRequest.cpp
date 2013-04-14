#include <TaoApiCpp/request/TopatsSimbaCampkeywordeffectGetRequest.h>

QString TopatsSimbaCampkeywordeffectGetRequest::getApiMethodName() const {
  return "taobao.topats.simba.campkeywordeffect.get";
}

qlonglong TopatsSimbaCampkeywordeffectGetRequest::getCampaignId() const {
  return campaignId;
}
void TopatsSimbaCampkeywordeffectGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString TopatsSimbaCampkeywordeffectGetRequest::getNick() const {
  return nick;
}
void TopatsSimbaCampkeywordeffectGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString TopatsSimbaCampkeywordeffectGetRequest::getSearchType() const {
  return searchType;
}
void TopatsSimbaCampkeywordeffectGetRequest::setSearchType (QString searchType) {
  this->searchType = searchType;
  appParams.insert("search_type", searchType);
}

QString TopatsSimbaCampkeywordeffectGetRequest::getSource() const {
  return source;
}
void TopatsSimbaCampkeywordeffectGetRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString TopatsSimbaCampkeywordeffectGetRequest::getTimeSlot() const {
  return timeSlot;
}
void TopatsSimbaCampkeywordeffectGetRequest::setTimeSlot (QString timeSlot) {
  this->timeSlot = timeSlot;
  appParams.insert("time_slot", timeSlot);
}



TopatsSimbaCampkeywordeffectGetResponse *TopatsSimbaCampkeywordeffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsSimbaCampkeywordeffectGetResponse *tmpResponse = new TopatsSimbaCampkeywordeffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
