#include <TaoApiCpp/domain/CampaignBudget.h>
qlonglong CampaignBudget::getBudget() const {
  return budget;
}
void CampaignBudget::setBudget (qlonglong budget) {
  this->budget = budget;
}

qlonglong CampaignBudget::getCampaignId() const {
  return campaignId;
}
void CampaignBudget::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

QDateTime CampaignBudget::getCreateTime() const {
  return createTime;
}
void CampaignBudget::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

bool CampaignBudget::getIsSmooth() const {
  return isSmooth;
}
void CampaignBudget::setIsSmooth (bool isSmooth) {
  this->isSmooth = isSmooth;
}

QDateTime CampaignBudget::getModifiedTime() const {
  return modifiedTime;
}
void CampaignBudget::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString CampaignBudget::getNick() const {
  return nick;
}
void CampaignBudget::setNick (QString nick) {
  this->nick = nick;
}


void CampaignBudget::parseResponse() {
  if (responseParser->hasName("budget")) {
  budget = responseParser->getNumByName("budget");
  }
  if (responseParser->hasName("campaign_id")) {
  campaignId = responseParser->getNumByName("campaign_id");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("is_smooth")) {
  isSmooth = responseParser->getBoolByName("is_smooth");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }

}

