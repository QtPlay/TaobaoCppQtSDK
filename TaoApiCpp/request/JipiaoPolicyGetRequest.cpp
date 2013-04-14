#include <TaoApiCpp/request/JipiaoPolicyGetRequest.h>

QString JipiaoPolicyGetRequest::getApiMethodName() const {
  return "taobao.jipiao.policy.get";
}

QString JipiaoPolicyGetRequest::getPolicyId() const {
  return policyId;
}
void JipiaoPolicyGetRequest::setPolicyId (QString policyId) {
  this->policyId = policyId;
  appParams.insert("policy_id", policyId);
}

qlonglong JipiaoPolicyGetRequest::getType() const {
  return type;
}
void JipiaoPolicyGetRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



JipiaoPolicyGetResponse *JipiaoPolicyGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  JipiaoPolicyGetResponse *tmpResponse = new JipiaoPolicyGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
