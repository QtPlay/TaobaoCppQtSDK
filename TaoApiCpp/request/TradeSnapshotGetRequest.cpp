#include <TaoApiCpp/request/TradeSnapshotGetRequest.h>

QString TradeSnapshotGetRequest::getApiMethodName() const {
  return "taobao.trade.snapshot.get";
}

QString TradeSnapshotGetRequest::getFields() const {
  return fields;
}
void TradeSnapshotGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong TradeSnapshotGetRequest::getTid() const {
  return tid;
}
void TradeSnapshotGetRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeSnapshotGetResponse *TradeSnapshotGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeSnapshotGetResponse *tmpResponse = new TradeSnapshotGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
