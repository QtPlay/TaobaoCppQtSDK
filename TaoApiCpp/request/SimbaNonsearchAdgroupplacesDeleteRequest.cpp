#include <TaoApiCpp/request/SimbaNonsearchAdgroupplacesDeleteRequest.h>

QString SimbaNonsearchAdgroupplacesDeleteRequest::getApiMethodName() const {
  return "taobao.simba.nonsearch.adgroupplaces.delete";
}

QString SimbaNonsearchAdgroupplacesDeleteRequest::getAdgroupPlacesJson() const {
  return adgroupPlacesJson;
}
void SimbaNonsearchAdgroupplacesDeleteRequest::setAdgroupPlacesJson (QString adgroupPlacesJson) {
  this->adgroupPlacesJson = adgroupPlacesJson;
  appParams.insert("adgroup_places_json", adgroupPlacesJson);
}

qlonglong SimbaNonsearchAdgroupplacesDeleteRequest::getCampaignId() const {
  return campaignId;
}
void SimbaNonsearchAdgroupplacesDeleteRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaNonsearchAdgroupplacesDeleteRequest::getNick() const {
  return nick;
}
void SimbaNonsearchAdgroupplacesDeleteRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaNonsearchAdgroupplacesDeleteResponse *SimbaNonsearchAdgroupplacesDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaNonsearchAdgroupplacesDeleteResponse *tmpResponse = new SimbaNonsearchAdgroupplacesDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
