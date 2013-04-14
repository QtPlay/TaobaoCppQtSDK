#include <TaoApiCpp/domain/CampaignArea.h>
QString CampaignArea::getArea() const {
  return area;
}
void CampaignArea::setArea (QString area) {
  this->area = area;
}

qlonglong CampaignArea::getCampaignId() const {
  return campaignId;
}
void CampaignArea::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QDateTime CampaignArea::getCreateTime() const {
  return createTime;
}
void CampaignArea::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QDateTime CampaignArea::getModifiedTime() const {
  return modifiedTime;
}
void CampaignArea::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString CampaignArea::getNick() const {
  return nick;
}
void CampaignArea::setNick (QString nick) {
  this->nick = nick;
}


void CampaignArea::parseResponse() {
  if (responseParser->hasName("area")) {
  area = responseParser->getStrByName("area");
  }
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

}

