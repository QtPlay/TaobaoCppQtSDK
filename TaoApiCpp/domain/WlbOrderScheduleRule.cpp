#include <TaoApiCpp/domain/WlbOrderScheduleRule.h>
QString WlbOrderScheduleRule::getAreaIds() const {
  return areaIds;
}
void WlbOrderScheduleRule::setAreaIds (QString areaIds) {
  this->areaIds = areaIds;
}

qlonglong WlbOrderScheduleRule::getBackupStoreId() const {
  return backupStoreId;
}
void WlbOrderScheduleRule::setBackupStoreId (qlonglong backupStoreId) {
  this->backupStoreId = backupStoreId;
}

qlonglong WlbOrderScheduleRule::getDefaultStoreId() const {
  return defaultStoreId;
}
void WlbOrderScheduleRule::setDefaultStoreId (qlonglong defaultStoreId) {
  this->defaultStoreId = defaultStoreId;
}

qlonglong WlbOrderScheduleRule::getId() const {
  return id;
}
void WlbOrderScheduleRule::setId (qlonglong id) {
  this->id = id;
}

QString WlbOrderScheduleRule::getOptions() const {
  return options;
}
void WlbOrderScheduleRule::setOptions (QString options) {
  this->options = options;
}

qlonglong WlbOrderScheduleRule::getPresellStoreId() const {
  return presellStoreId;
}
void WlbOrderScheduleRule::setPresellStoreId (qlonglong presellStoreId) {
  this->presellStoreId = presellStoreId;
}

qlonglong WlbOrderScheduleRule::getRuleId() const {
  return ruleId;
}
void WlbOrderScheduleRule::setRuleId (qlonglong ruleId) {
  this->ruleId = ruleId;
}

qlonglong WlbOrderScheduleRule::getUserId() const {
  return userId;
}
void WlbOrderScheduleRule::setUserId (qlonglong userId) {
  this->userId = userId;
}

QString WlbOrderScheduleRule::getUserNick() const {
  return userNick;
}
void WlbOrderScheduleRule::setUserNick (QString userNick) {
  this->userNick = userNick;
}


void WlbOrderScheduleRule::parseResponse() {
  if (responseParser->hasName("area_ids")) {
  areaIds = responseParser->getStrByName("area_ids");
  }
  if (responseParser->hasName("backup_store_id")) {
  backupStoreId = responseParser->getNumByName("backup_store_id");
  }
  if (responseParser->hasName("default_store_id")) {
  defaultStoreId = responseParser->getNumByName("default_store_id");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("options")) {
  options = responseParser->getStrByName("options");
  }
  if (responseParser->hasName("presell_store_id")) {
  presellStoreId = responseParser->getNumByName("presell_store_id");
  }
  if (responseParser->hasName("rule_id")) {
  ruleId = responseParser->getNumByName("rule_id");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("user_nick")) {
  userNick = responseParser->getStrByName("user_nick");
  }

}

