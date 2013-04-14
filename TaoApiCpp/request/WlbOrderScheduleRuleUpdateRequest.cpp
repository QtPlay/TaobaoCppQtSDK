#include <TaoApiCpp/request/WlbOrderScheduleRuleUpdateRequest.h>

QString WlbOrderScheduleRuleUpdateRequest::getApiMethodName() const {
  return "taobao.wlb.order.schedule.rule.update";
}

qlonglong WlbOrderScheduleRuleUpdateRequest::getBackupStoreId() const {
  return backupStoreId;
}
void WlbOrderScheduleRuleUpdateRequest::setBackupStoreId (qlonglong backupStoreId) {
  this->backupStoreId = backupStoreId;
  appParams.insert("backup_store_id", QString::number(backupStoreId));
}

qlonglong WlbOrderScheduleRuleUpdateRequest::getDefaultStoreId() const {
  return defaultStoreId;
}
void WlbOrderScheduleRuleUpdateRequest::setDefaultStoreId (qlonglong defaultStoreId) {
  this->defaultStoreId = defaultStoreId;
  appParams.insert("default_store_id", QString::number(defaultStoreId));
}

QString WlbOrderScheduleRuleUpdateRequest::getOption() const {
  return option;
}
void WlbOrderScheduleRuleUpdateRequest::setOption (QString option) {
  this->option = option;
  appParams.insert("option", option);
}

QString WlbOrderScheduleRuleUpdateRequest::getProvAreaIds() const {
  return provAreaIds;
}
void WlbOrderScheduleRuleUpdateRequest::setProvAreaIds (QString provAreaIds) {
  this->provAreaIds = provAreaIds;
  appParams.insert("prov_area_ids", provAreaIds);
}

qlonglong WlbOrderScheduleRuleUpdateRequest::getScheduleRuleId() const {
  return scheduleRuleId;
}
void WlbOrderScheduleRuleUpdateRequest::setScheduleRuleId (qlonglong scheduleRuleId) {
  this->scheduleRuleId = scheduleRuleId;
  appParams.insert("schedule_rule_id", QString::number(scheduleRuleId));
}



WlbOrderScheduleRuleUpdateResponse *WlbOrderScheduleRuleUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderScheduleRuleUpdateResponse *tmpResponse = new WlbOrderScheduleRuleUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
