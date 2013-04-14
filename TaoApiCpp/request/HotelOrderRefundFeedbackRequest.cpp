#include <TaoApiCpp/request/HotelOrderRefundFeedbackRequest.h>

QString HotelOrderRefundFeedbackRequest::getApiMethodName() const {
  return "taobao.hotel.order.refund.feedback";
}

QString HotelOrderRefundFeedbackRequest::getFailedReason() const {
  return failedReason;
}
void HotelOrderRefundFeedbackRequest::setFailedReason (QString failedReason) {
  this->failedReason = failedReason;
  appParams.insert("failed_reason", failedReason);
}

QString HotelOrderRefundFeedbackRequest::getMessageId() const {
  return messageId;
}
void HotelOrderRefundFeedbackRequest::setMessageId (QString messageId) {
  this->messageId = messageId;
  appParams.insert("message_id", messageId);
}

qlonglong HotelOrderRefundFeedbackRequest::getOid() const {
  return oid;
}
void HotelOrderRefundFeedbackRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}

QString HotelOrderRefundFeedbackRequest::getOutOid() const {
  return outOid;
}
void HotelOrderRefundFeedbackRequest::setOutOid (QString outOid) {
  this->outOid = outOid;
  appParams.insert("out_oid", outOid);
}

QString HotelOrderRefundFeedbackRequest::getResult() const {
  return result;
}
void HotelOrderRefundFeedbackRequest::setResult (QString result) {
  this->result = result;
  appParams.insert("result", result);
}

qlonglong HotelOrderRefundFeedbackRequest::getSessionId() const {
  return sessionId;
}
void HotelOrderRefundFeedbackRequest::setSessionId (qlonglong sessionId) {
  this->sessionId = sessionId;
  appParams.insert("session_id", QString::number(sessionId));
}



HotelOrderRefundFeedbackResponse *HotelOrderRefundFeedbackRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelOrderRefundFeedbackResponse *tmpResponse = new HotelOrderRefundFeedbackResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
