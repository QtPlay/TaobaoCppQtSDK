#include <TaoApiCpp/request/LogisticsOnlineSendRequest.h>

QString LogisticsOnlineSendRequest::getApiMethodName() const {
  return "taobao.logistics.online.send";
}

qlonglong LogisticsOnlineSendRequest::getCancelId() const {
  return cancelId;
}
void LogisticsOnlineSendRequest::setCancelId (qlonglong cancelId) {
  this->cancelId = cancelId;
  appParams.insert("cancel_id", QString::number(cancelId));
}

QString LogisticsOnlineSendRequest::getCompanyCode() const {
  return companyCode;
}
void LogisticsOnlineSendRequest::setCompanyCode (QString companyCode) {
  this->companyCode = companyCode;
  appParams.insert("company_code", companyCode);
}

QString LogisticsOnlineSendRequest::getFeature() const {
  return feature;
}
void LogisticsOnlineSendRequest::setFeature (QString feature) {
  this->feature = feature;
  appParams.insert("feature", feature);
}

QString LogisticsOnlineSendRequest::getOutSid() const {
  return outSid;
}
void LogisticsOnlineSendRequest::setOutSid (QString outSid) {
  this->outSid = outSid;
  appParams.insert("out_sid", outSid);
}

QString LogisticsOnlineSendRequest::getSellerIp() const {
  return sellerIp;
}
void LogisticsOnlineSendRequest::setSellerIp (QString sellerIp) {
  this->sellerIp = sellerIp;
  appParams.insert("seller_ip", sellerIp);
}

qlonglong LogisticsOnlineSendRequest::getSenderId() const {
  return senderId;
}
void LogisticsOnlineSendRequest::setSenderId (qlonglong senderId) {
  this->senderId = senderId;
  appParams.insert("sender_id", QString::number(senderId));
}

qlonglong LogisticsOnlineSendRequest::getTid() const {
  return tid;
}
void LogisticsOnlineSendRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



LogisticsOnlineSendResponse *LogisticsOnlineSendRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOnlineSendResponse *tmpResponse = new LogisticsOnlineSendResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
