#include <TaoApiCpp/request/RdsDbCreateRequest.h>

QString RdsDbCreateRequest::getApiMethodName() const {
  return "taobao.rds.db.create";
}

QString RdsDbCreateRequest::getDbName() const {
  return dbName;
}
void RdsDbCreateRequest::setDbName (QString dbName) {
  this->dbName = dbName;
  appParams.insert("db_name", dbName);
}

QString RdsDbCreateRequest::getInstanceName() const {
  return instanceName;
}
void RdsDbCreateRequest::setInstanceName (QString instanceName) {
  this->instanceName = instanceName;
  appParams.insert("instance_name", instanceName);
}



RdsDbCreateResponse *RdsDbCreateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RdsDbCreateResponse *tmpResponse = new RdsDbCreateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
