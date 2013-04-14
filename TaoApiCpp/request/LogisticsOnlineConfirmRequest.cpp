#include <TaoApiCpp/request/LogisticsOnlineConfirmRequest.h>

QString LogisticsOnlineConfirmRequest::getApiMethodName() const {
  return "taobao.logistics.online.confirm";
}

QString LogisticsOnlineConfirmRequest::getOutSid() const {
  return outSid;
}
void LogisticsOnlineConfirmRequest::setOutSid (QString outSid) {
  this->outSid = outSid;
  appParams.insert("out_sid", outSid);
}

qlonglong LogisticsOnlineConfirmRequest::getTid() const {
  return tid;
}
void LogisticsOnlineConfirmRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



LogisticsOnlineConfirmResponse *LogisticsOnlineConfirmRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOnlineConfirmResponse *tmpResponse = new LogisticsOnlineConfirmResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
