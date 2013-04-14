#include <TaoApiCpp/request/RefundGetRequest.h>

QString RefundGetRequest::getApiMethodName() const {
  return "taobao.refund.get";
}

QString RefundGetRequest::getFields() const {
  return fields;
}
void RefundGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong RefundGetRequest::getRefundId() const {
  return refundId;
}
void RefundGetRequest::setRefundId (qlonglong refundId) {
  this->refundId = refundId;
  appParams.insert("refund_id", QString::number(refundId));
}



RefundGetResponse *RefundGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RefundGetResponse *tmpResponse = new RefundGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
