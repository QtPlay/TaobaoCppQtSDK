#include <TaoApiCpp/request/LogisticsOnlineCancelRequest.h>

QString LogisticsOnlineCancelRequest::getApiMethodName() const {
  return "taobao.logistics.online.cancel";
}

qlonglong LogisticsOnlineCancelRequest::getTid() const {
  return tid;
}
void LogisticsOnlineCancelRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



LogisticsOnlineCancelResponse *LogisticsOnlineCancelRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOnlineCancelResponse *tmpResponse = new LogisticsOnlineCancelResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
