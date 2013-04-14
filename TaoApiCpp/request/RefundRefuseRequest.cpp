#include <TaoApiCpp/request/RefundRefuseRequest.h>

QString RefundRefuseRequest::getApiMethodName() const {
  return "taobao.refund.refuse";
}

qlonglong RefundRefuseRequest::getOid() const {
  return oid;
}
void RefundRefuseRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}

qlonglong RefundRefuseRequest::getRefundId() const {
  return refundId;
}
void RefundRefuseRequest::setRefundId (qlonglong refundId) {
  this->refundId = refundId;
  appParams.insert("refund_id", QString::number(refundId));
}

QString RefundRefuseRequest::getRefuseMessage() const {
  return refuseMessage;
}
void RefundRefuseRequest::setRefuseMessage (QString refuseMessage) {
  this->refuseMessage = refuseMessage;
  appParams.insert("refuse_message", refuseMessage);
}

FileItem RefundRefuseRequest::getRefuseProof() const {
  return refuseProof;
}
void RefundRefuseRequest::setRefuseProof (FileItem refuseProof) {
  this->refuseProof = refuseProof;
  fileParams.insert("refuse_proof", refuseProof);
}

qlonglong RefundRefuseRequest::getTid() const {
  return tid;
}
void RefundRefuseRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



RefundRefuseResponse *RefundRefuseRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RefundRefuseResponse *tmpResponse = new RefundRefuseResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
