#include <TaoApiCpp/request/RdsDbDeleteRequest.h>

QString RdsDbDeleteRequest::getApiMethodName() const {
  return "taobao.rds.db.delete";
}

qlonglong RdsDbDeleteRequest::getDbId() const {
  return dbId;
}
void RdsDbDeleteRequest::setDbId (qlonglong dbId) {
  this->dbId = dbId;
  appParams.insert("db_id", QString::number(dbId));
}

QString RdsDbDeleteRequest::getInstanceName() const {
  return instanceName;
}
void RdsDbDeleteRequest::setInstanceName (QString instanceName) {
  this->instanceName = instanceName;
  appParams.insert("instance_name", instanceName);
}



RdsDbDeleteResponse *RdsDbDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RdsDbDeleteResponse *tmpResponse = new RdsDbDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
