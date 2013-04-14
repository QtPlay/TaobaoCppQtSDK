#include <TaoApiCpp/domain/CampaignSchedule.h>
qlonglong CampaignSchedule::getCampaignId() const {
  return campaignId;
}
void CampaignSchedule::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QDateTime CampaignSchedule::getCreateTime() const {
  return createTime;
}
void CampaignSchedule::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QDateTime CampaignSchedule::getModifiedTime() const {
  return modifiedTime;
}
void CampaignSchedule::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString CampaignSchedule::getNick() const {
  return nick;
}
void CampaignSchedule::setNick (QString nick) {
  this->nick = nick;
}

QString CampaignSchedule::getSchedule() const {
  return schedule;
}
void CampaignSchedule::setSchedule (QString schedule) {
  this->schedule = schedule;
}


void CampaignSchedule::parseResponse() {
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
  if (responseParser->hasName("schedule")) {
  schedule = responseParser->getStrByName("schedule");
  }

}

