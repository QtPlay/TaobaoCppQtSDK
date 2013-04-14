#include <TaoApiCpp/request/SimbaAdgroupNonsearchstatesUpdateRequest.h>

QString SimbaAdgroupNonsearchstatesUpdateRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.nonsearchstates.update";
}

QString SimbaAdgroupNonsearchstatesUpdateRequest::getAdgroupidNonsearchstateJson() const {
  return adgroupidNonsearchstateJson;
}
void SimbaAdgroupNonsearchstatesUpdateRequest::setAdgroupidNonsearchstateJson (QString adgroupidNonsearchstateJson) {
  this->adgroupidNonsearchstateJson = adgroupidNonsearchstateJson;
  appParams.insert("adgroupid_nonsearchstate_json", adgroupidNonsearchstateJson);
}

qlonglong SimbaAdgroupNonsearchstatesUpdateRequest::getCampaignId() const {
  return campaignId;
}
void SimbaAdgroupNonsearchstatesUpdateRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaAdgroupNonsearchstatesUpdateRequest::getNick() const {
  return nick;
}
void SimbaAdgroupNonsearchstatesUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaAdgroupNonsearchstatesUpdateResponse *SimbaAdgroupNonsearchstatesUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupNonsearchstatesUpdateResponse *tmpResponse = new SimbaAdgroupNonsearchstatesUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
