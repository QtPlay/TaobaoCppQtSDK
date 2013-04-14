#include <TaoApiCpp/request/TradeReceivetimeDelayRequest.h>

QString TradeReceivetimeDelayRequest::getApiMethodName() const {
  return "taobao.trade.receivetime.delay";
}

qlonglong TradeReceivetimeDelayRequest::getDays() const {
  return days;
}
void TradeReceivetimeDelayRequest::setDays (qlonglong days) {
  this->days = days;
  appParams.insert("days", QString::number(days));
}

qlonglong TradeReceivetimeDelayRequest::getTid() const {
  return tid;
}
void TradeReceivetimeDelayRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeReceivetimeDelayResponse *TradeReceivetimeDelayRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeReceivetimeDelayResponse *tmpResponse = new TradeReceivetimeDelayResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
