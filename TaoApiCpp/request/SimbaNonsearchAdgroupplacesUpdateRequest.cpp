#include <TaoApiCpp/request/SimbaNonsearchAdgroupplacesUpdateRequest.h>

QString SimbaNonsearchAdgroupplacesUpdateRequest::getApiMethodName() const {
  return "taobao.simba.nonsearch.adgroupplaces.update";
}

QString SimbaNonsearchAdgroupplacesUpdateRequest::getAdgroupPlacesJson() const {
  return adgroupPlacesJson;
}
void SimbaNonsearchAdgroupplacesUpdateRequest::setAdgroupPlacesJson (QString adgroupPlacesJson) {
  this->adgroupPlacesJson = adgroupPlacesJson;
  appParams.insert("adgroup_places_json", adgroupPlacesJson);
}

qlonglong SimbaNonsearchAdgroupplacesUpdateRequest::getCampaignId() const {
  return campaignId;
}
void SimbaNonsearchAdgroupplacesUpdateRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaNonsearchAdgroupplacesUpdateRequest::getNick() const {
  return nick;
}
void SimbaNonsearchAdgroupplacesUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaNonsearchAdgroupplacesUpdateResponse *SimbaNonsearchAdgroupplacesUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaNonsearchAdgroupplacesUpdateResponse *tmpResponse = new SimbaNonsearchAdgroupplacesUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
