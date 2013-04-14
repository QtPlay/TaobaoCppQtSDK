#include <TaoApiCpp/request/SimbaAdgroupAddRequest.h>

QString SimbaAdgroupAddRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.add";
}

qlonglong SimbaAdgroupAddRequest::getCampaignId() const {
  return campaignId;
}
void SimbaAdgroupAddRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

qlonglong SimbaAdgroupAddRequest::getDefaultPrice() const {
  return defaultPrice;
}
void SimbaAdgroupAddRequest::setDefaultPrice (qlonglong defaultPrice) {
  this->defaultPrice = defaultPrice;
  appParams.insert("default_price", QString::number(defaultPrice));
}

QString SimbaAdgroupAddRequest::getImgUrl() const {
  return imgUrl;
}
void SimbaAdgroupAddRequest::setImgUrl (QString imgUrl) {
  this->imgUrl = imgUrl;
  appParams.insert("img_url", imgUrl);
}

qlonglong SimbaAdgroupAddRequest::getItemId() const {
  return itemId;
}
void SimbaAdgroupAddRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString SimbaAdgroupAddRequest::getNick() const {
  return nick;
}
void SimbaAdgroupAddRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaAdgroupAddRequest::getTitle() const {
  return title;
}
void SimbaAdgroupAddRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



SimbaAdgroupAddResponse *SimbaAdgroupAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupAddResponse *tmpResponse = new SimbaAdgroupAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
