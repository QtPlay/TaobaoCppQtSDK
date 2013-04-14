#include <TaoApiCpp/request/LogisticsDummySendRequest.h>

QString LogisticsDummySendRequest::getApiMethodName() const {
  return "taobao.logistics.dummy.send";
}

QString LogisticsDummySendRequest::getFeature() const {
  return feature;
}
void LogisticsDummySendRequest::setFeature (QString feature) {
  this->feature = feature;
  appParams.insert("feature", feature);
}

QString LogisticsDummySendRequest::getSellerIp() const {
  return sellerIp;
}
void LogisticsDummySendRequest::setSellerIp (QString sellerIp) {
  this->sellerIp = sellerIp;
  appParams.insert("seller_ip", sellerIp);
}

qlonglong LogisticsDummySendRequest::getTid() const {
  return tid;
}
void LogisticsDummySendRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



LogisticsDummySendResponse *LogisticsDummySendRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsDummySendResponse *tmpResponse = new LogisticsDummySendResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
