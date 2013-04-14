#include <TaoApiCpp/request/WlbOrderScheduleRuleAddRequest.h>

QString WlbOrderScheduleRuleAddRequest::getApiMethodName() const {
  return "taobao.wlb.order.schedule.rule.add";
}

qlonglong WlbOrderScheduleRuleAddRequest::getBackupStoreId() const {
  return backupStoreId;
}
void WlbOrderScheduleRuleAddRequest::setBackupStoreId (qlonglong backupStoreId) {
  this->backupStoreId = backupStoreId;
  appParams.insert("backup_store_id", QString::number(backupStoreId));
}

qlonglong WlbOrderScheduleRuleAddRequest::getDefaultStoreId() const {
  return defaultStoreId;
}
void WlbOrderScheduleRuleAddRequest::setDefaultStoreId (qlonglong defaultStoreId) {
  this->defaultStoreId = defaultStoreId;
  appParams.insert("default_store_id", QString::number(defaultStoreId));
}

QString WlbOrderScheduleRuleAddRequest::getOption() const {
  return option;
}
void WlbOrderScheduleRuleAddRequest::setOption (QString option) {
  this->option = option;
  appParams.insert("option", option);
}

QString WlbOrderScheduleRuleAddRequest::getProvAreaIds() const {
  return provAreaIds;
}
void WlbOrderScheduleRuleAddRequest::setProvAreaIds (QString provAreaIds) {
  this->provAreaIds = provAreaIds;
  appParams.insert("prov_area_ids", provAreaIds);
}



WlbOrderScheduleRuleAddResponse *WlbOrderScheduleRuleAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderScheduleRuleAddResponse *tmpResponse = new WlbOrderScheduleRuleAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
