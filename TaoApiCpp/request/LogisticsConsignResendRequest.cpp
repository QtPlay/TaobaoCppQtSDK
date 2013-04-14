#include <TaoApiCpp/request/LogisticsConsignResendRequest.h>

QString LogisticsConsignResendRequest::getApiMethodName() const {
  return "taobao.logistics.consign.resend";
}

QString LogisticsConsignResendRequest::getCompanyCode() const {
  return companyCode;
}
void LogisticsConsignResendRequest::setCompanyCode (QString companyCode) {
  this->companyCode = companyCode;
  appParams.insert("company_code", companyCode);
}

QString LogisticsConsignResendRequest::getFeature() const {
  return feature;
}
void LogisticsConsignResendRequest::setFeature (QString feature) {
  this->feature = feature;
  appParams.insert("feature", feature);
}

QString LogisticsConsignResendRequest::getOutSid() const {
  return outSid;
}
void LogisticsConsignResendRequest::setOutSid (QString outSid) {
  this->outSid = outSid;
  appParams.insert("out_sid", outSid);
}

qlonglong LogisticsConsignResendRequest::getTid() const {
  return tid;
}
void LogisticsConsignResendRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



LogisticsConsignResendResponse *LogisticsConsignResendRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsConsignResendResponse *tmpResponse = new LogisticsConsignResendResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
