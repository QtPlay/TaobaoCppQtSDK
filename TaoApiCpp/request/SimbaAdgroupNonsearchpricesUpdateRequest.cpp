#include <TaoApiCpp/request/SimbaAdgroupNonsearchpricesUpdateRequest.h>

QString SimbaAdgroupNonsearchpricesUpdateRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.nonsearchprices.update";
}

QString SimbaAdgroupNonsearchpricesUpdateRequest::getAdgroupidPriceJson() const {
  return adgroupidPriceJson;
}
void SimbaAdgroupNonsearchpricesUpdateRequest::setAdgroupidPriceJson (QString adgroupidPriceJson) {
  this->adgroupidPriceJson = adgroupidPriceJson;
  appParams.insert("adgroupid_price_json", adgroupidPriceJson);
}

qlonglong SimbaAdgroupNonsearchpricesUpdateRequest::getCampaignId() const {
  return campaignId;
}
void SimbaAdgroupNonsearchpricesUpdateRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaAdgroupNonsearchpricesUpdateRequest::getNick() const {
  return nick;
}
void SimbaAdgroupNonsearchpricesUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaAdgroupNonsearchpricesUpdateResponse *SimbaAdgroupNonsearchpricesUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupNonsearchpricesUpdateResponse *tmpResponse = new SimbaAdgroupNonsearchpricesUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
