#include <TaoApiCpp/request/SimbaAdgroupsItemExistRequest.h>

QString SimbaAdgroupsItemExistRequest::getApiMethodName() const {
  return "taobao.simba.adgroups.item.exist";
}

qlonglong SimbaAdgroupsItemExistRequest::getCampaignId() const {
  return campaignId;
}
void SimbaAdgroupsItemExistRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

qlonglong SimbaAdgroupsItemExistRequest::getItemId() const {
  return itemId;
}
void SimbaAdgroupsItemExistRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString SimbaAdgroupsItemExistRequest::getNick() const {
  return nick;
}
void SimbaAdgroupsItemExistRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaAdgroupsItemExistResponse *SimbaAdgroupsItemExistRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupsItemExistResponse *tmpResponse = new SimbaAdgroupsItemExistResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
