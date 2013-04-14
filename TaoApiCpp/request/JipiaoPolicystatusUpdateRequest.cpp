#include <TaoApiCpp/request/JipiaoPolicystatusUpdateRequest.h>

QString JipiaoPolicystatusUpdateRequest::getApiMethodName() const {
  return "taobao.jipiao.policystatus.update";
}

QString JipiaoPolicystatusUpdateRequest::getPolicyId() const {
  return policyId;
}
void JipiaoPolicystatusUpdateRequest::setPolicyId (QString policyId) {
  this->policyId = policyId;
  appParams.insert("policy_id", policyId);
}

qlonglong JipiaoPolicystatusUpdateRequest::getStatus() const {
  return status;
}
void JipiaoPolicystatusUpdateRequest::setStatus (qlonglong status) {
  this->status = status;
  appParams.insert("status", QString::number(status));
}

qlonglong JipiaoPolicystatusUpdateRequest::getType() const {
  return type;
}
void JipiaoPolicystatusUpdateRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



JipiaoPolicystatusUpdateResponse *JipiaoPolicystatusUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  JipiaoPolicystatusUpdateResponse *tmpResponse = new JipiaoPolicystatusUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
