#include <TaoApiCpp/request/SimbaNonsearchAdgroupplacesAddRequest.h>

QString SimbaNonsearchAdgroupplacesAddRequest::getApiMethodName() const {
  return "taobao.simba.nonsearch.adgroupplaces.add";
}

QString SimbaNonsearchAdgroupplacesAddRequest::getAdgroupPlacesJson() const {
  return adgroupPlacesJson;
}
void SimbaNonsearchAdgroupplacesAddRequest::setAdgroupPlacesJson (QString adgroupPlacesJson) {
  this->adgroupPlacesJson = adgroupPlacesJson;
  appParams.insert("adgroup_places_json", adgroupPlacesJson);
}

qlonglong SimbaNonsearchAdgroupplacesAddRequest::getCampaignId() const {
  return campaignId;
}
void SimbaNonsearchAdgroupplacesAddRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaNonsearchAdgroupplacesAddRequest::getNick() const {
  return nick;
}
void SimbaNonsearchAdgroupplacesAddRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaNonsearchAdgroupplacesAddResponse *SimbaNonsearchAdgroupplacesAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaNonsearchAdgroupplacesAddResponse *tmpResponse = new SimbaNonsearchAdgroupplacesAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
