#include <TaoApiCpp/request/LogisticsOfflineSendRequest.h>

QString LogisticsOfflineSendRequest::getApiMethodName() const {
  return "taobao.logistics.offline.send";
}

qlonglong LogisticsOfflineSendRequest::getCancelId() const {
  return cancelId;
}
void LogisticsOfflineSendRequest::setCancelId (qlonglong cancelId) {
  this->cancelId = cancelId;
  appParams.insert("cancel_id", QString::number(cancelId));
}

QString LogisticsOfflineSendRequest::getCompanyCode() const {
  return companyCode;
}
void LogisticsOfflineSendRequest::setCompanyCode (QString companyCode) {
  this->companyCode = companyCode;
  appParams.insert("company_code", companyCode);
}

QString LogisticsOfflineSendRequest::getFeature() const {
  return feature;
}
void LogisticsOfflineSendRequest::setFeature (QString feature) {
  this->feature = feature;
  appParams.insert("feature", feature);
}

QString LogisticsOfflineSendRequest::getOutSid() const {
  return outSid;
}
void LogisticsOfflineSendRequest::setOutSid (QString outSid) {
  this->outSid = outSid;
  appParams.insert("out_sid", outSid);
}

QString LogisticsOfflineSendRequest::getSellerIp() const {
  return sellerIp;
}
void LogisticsOfflineSendRequest::setSellerIp (QString sellerIp) {
  this->sellerIp = sellerIp;
  appParams.insert("seller_ip", sellerIp);
}

qlonglong LogisticsOfflineSendRequest::getSenderId() const {
  return senderId;
}
void LogisticsOfflineSendRequest::setSenderId (qlonglong senderId) {
  this->senderId = senderId;
  appParams.insert("sender_id", QString::number(senderId));
}

qlonglong LogisticsOfflineSendRequest::getTid() const {
  return tid;
}
void LogisticsOfflineSendRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



LogisticsOfflineSendResponse *LogisticsOfflineSendRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOfflineSendResponse *tmpResponse = new LogisticsOfflineSendResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
