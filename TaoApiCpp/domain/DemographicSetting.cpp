#include <TaoApiCpp/domain/DemographicSetting.h>
qlonglong DemographicSetting::getCampaignId() const {
  return campaignId;
}
void DemographicSetting::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QDateTime DemographicSetting::getCreateTime() const {
  return createTime;
}
void DemographicSetting::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

qlonglong DemographicSetting::getDemographicId() const {
  return demographicId;
}
void DemographicSetting::setDemographicId (qlonglong demographicId) {
  this->demographicId = demographicId;
}

qlonglong DemographicSetting::getIncrementalPrice() const {
  return incrementalPrice;
}
void DemographicSetting::setIncrementalPrice (qlonglong incrementalPrice) {
  this->incrementalPrice = incrementalPrice;
}

QDateTime DemographicSetting::getModifiedTime() const {
  return modifiedTime;
}
void DemographicSetting::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString DemographicSetting::getNick() const {
  return nick;
}
void DemographicSetting::setNick (QString nick) {
  this->nick = nick;
}


void DemographicSetting::parseResponse() {
  if (responseParser->hasName("campaign_id")) {
  campaignId = responseParser->getNumByName("campaign_id");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("demographic_id")) {
  demographicId = responseParser->getNumByName("demographic_id");
  }
  if (responseParser->hasName("incremental_price")) {
  incrementalPrice = responseParser->getNumByName("incremental_price");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }

}

