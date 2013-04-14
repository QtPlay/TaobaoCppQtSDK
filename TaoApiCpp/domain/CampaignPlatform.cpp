#include <TaoApiCpp/domain/CampaignPlatform.h>
qlonglong CampaignPlatform::getCampaignId() const {
  return campaignId;
}
void CampaignPlatform::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QDateTime CampaignPlatform::getCreateTime() const {
  return createTime;
}
void CampaignPlatform::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QDateTime CampaignPlatform::getModifiedTime() const {
  return modifiedTime;
}
void CampaignPlatform::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString CampaignPlatform::getNick() const {
  return nick;
}
void CampaignPlatform::setNick (QString nick) {
  this->nick = nick;
}

QList<qlonglong> CampaignPlatform::getNonsearchChannels() const {
  return nonsearchChannels;
}
void CampaignPlatform::setNonsearchChannels (QList<qlonglong> nonsearchChannels) {
  this->nonsearchChannels = nonsearchChannels;
}

qlonglong CampaignPlatform::getOutsideDiscount() const {
  return outsideDiscount;
}
void CampaignPlatform::setOutsideDiscount (qlonglong outsideDiscount) {
  this->outsideDiscount = outsideDiscount;
}

QList<qlonglong> CampaignPlatform::getSearchChannels() const {
  return searchChannels;
}
void CampaignPlatform::setSearchChannels (QList<qlonglong> searchChannels) {
  this->searchChannels = searchChannels;
}


void CampaignPlatform::parseResponse() {
  if (responseParser->hasName("campaign_id")) {
  campaignId = responseParser->getNumByName("campaign_id");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("nonsearch_channels")) {
  nonsearchChannels = responseParser->getListNumByName("nonsearch_channels");
  }
  if (responseParser->hasName("outside_discount")) {
  outsideDiscount = responseParser->getNumByName("outside_discount");
  }
  if (responseParser->hasName("search_channels")) {
  searchChannels = responseParser->getListNumByName("search_channels");
  }

}

