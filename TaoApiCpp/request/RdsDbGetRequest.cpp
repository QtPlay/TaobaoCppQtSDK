#include <TaoApiCpp/request/RdsDbGetRequest.h>

QString RdsDbGetRequest::getApiMethodName() const {
  return "taobao.rds.db.get";
}

qlonglong RdsDbGetRequest::getDbStatus() const {
  return dbStatus;
}
void RdsDbGetRequest::setDbStatus (qlonglong dbStatus) {
  this->dbStatus = dbStatus;
  appParams.insert("db_status", QString::number(dbStatus));
}

QString RdsDbGetRequest::getInstanceName() const {
  return instanceName;
}
void RdsDbGetRequest::setInstanceName (QString instanceName) {
  this->instanceName = instanceName;
  appParams.insert("instance_name", instanceName);
}



RdsDbGetResponse *RdsDbGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RdsDbGetResponse *tmpResponse = new RdsDbGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
