#include <TaoApiCpp/request/TradeAmountGetRequest.h>

QString TradeAmountGetRequest::getApiMethodName() const {
  return "taobao.trade.amount.get";
}

QString TradeAmountGetRequest::getFields() const {
  return fields;
}
void TradeAmountGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong TradeAmountGetRequest::getTid() const {
  return tid;
}
void TradeAmountGetRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeAmountGetResponse *TradeAmountGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeAmountGetResponse *tmpResponse = new TradeAmountGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
