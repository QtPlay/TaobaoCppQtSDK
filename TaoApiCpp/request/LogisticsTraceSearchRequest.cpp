#include <TaoApiCpp/request/LogisticsTraceSearchRequest.h>

QString LogisticsTraceSearchRequest::getApiMethodName() const {
  return "taobao.logistics.trace.search";
}

QString LogisticsTraceSearchRequest::getSellerNick() const {
  return sellerNick;
}
void LogisticsTraceSearchRequest::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
  appParams.insert("seller_nick", sellerNick);
}

qlonglong LogisticsTraceSearchRequest::getTid() const {
  return tid;
}
void LogisticsTraceSearchRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



LogisticsTraceSearchResponse *LogisticsTraceSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsTraceSearchResponse *tmpResponse = new LogisticsTraceSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
