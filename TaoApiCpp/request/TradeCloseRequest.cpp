#include <TaoApiCpp/request/TradeCloseRequest.h>

QString TradeCloseRequest::getApiMethodName() const {
  return "taobao.trade.close";
}

QString TradeCloseRequest::getCloseReason() const {
  return closeReason;
}
void TradeCloseRequest::setCloseReason (QString closeReason) {
  this->closeReason = closeReason;
  appParams.insert("close_reason", closeReason);
}

qlonglong TradeCloseRequest::getTid() const {
  return tid;
}
void TradeCloseRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeCloseResponse *TradeCloseRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeCloseResponse *tmpResponse = new TradeCloseResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
