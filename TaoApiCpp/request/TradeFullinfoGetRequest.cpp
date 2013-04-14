#include <TaoApiCpp/request/TradeFullinfoGetRequest.h>

QString TradeFullinfoGetRequest::getApiMethodName() const {
  return "taobao.trade.fullinfo.get";
}

QString TradeFullinfoGetRequest::getFields() const {
  return fields;
}
void TradeFullinfoGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong TradeFullinfoGetRequest::getTid() const {
  return tid;
}
void TradeFullinfoGetRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeFullinfoGetResponse *TradeFullinfoGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeFullinfoGetResponse *tmpResponse = new TradeFullinfoGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
