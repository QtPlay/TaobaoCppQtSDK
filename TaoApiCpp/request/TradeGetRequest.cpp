#include <TaoApiCpp/request/TradeGetRequest.h>

QString TradeGetRequest::getApiMethodName() const {
  return "taobao.trade.get";
}

QString TradeGetRequest::getFields() const {
  return fields;
}
void TradeGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong TradeGetRequest::getTid() const {
  return tid;
}
void TradeGetRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeGetResponse *TradeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeGetResponse *tmpResponse = new TradeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
