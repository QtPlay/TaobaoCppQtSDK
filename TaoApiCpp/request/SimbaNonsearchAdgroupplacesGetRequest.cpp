#include <TaoApiCpp/request/SimbaNonsearchAdgroupplacesGetRequest.h>

QString SimbaNonsearchAdgroupplacesGetRequest::getApiMethodName() const {
  return "taobao.simba.nonsearch.adgroupplaces.get";
}

qlonglong SimbaNonsearchAdgroupplacesGetRequest::getAdgroupIds() const {
  return adgroupIds;
}
void SimbaNonsearchAdgroupplacesGetRequest::setAdgroupIds (qlonglong adgroupIds) {
  this->adgroupIds = adgroupIds;
  appParams.insert("adgroup_ids", QString::number(adgroupIds));
}

qlonglong SimbaNonsearchAdgroupplacesGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaNonsearchAdgroupplacesGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaNonsearchAdgroupplacesGetRequest::getNick() const {
  return nick;
}
void SimbaNonsearchAdgroupplacesGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaNonsearchAdgroupplacesGetResponse *SimbaNonsearchAdgroupplacesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaNonsearchAdgroupplacesGetResponse *tmpResponse = new SimbaNonsearchAdgroupplacesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
