#include <TaoApiCpp/request/HotelOrderBookingFeedbackRequest.h>

QString HotelOrderBookingFeedbackRequest::getApiMethodName() const {
  return "taobao.hotel.order.booking.feedback";
}

QString HotelOrderBookingFeedbackRequest::getFailedReason() const {
  return failedReason;
}
void HotelOrderBookingFeedbackRequest::setFailedReason (QString failedReason) {
  this->failedReason = failedReason;
  appParams.insert("failed_reason", failedReason);
}

QString HotelOrderBookingFeedbackRequest::getMessageId() const {
  return messageId;
}
void HotelOrderBookingFeedbackRequest::setMessageId (QString messageId) {
  this->messageId = messageId;
  appParams.insert("message_id", messageId);
}

qlonglong HotelOrderBookingFeedbackRequest::getOid() const {
  return oid;
}
void HotelOrderBookingFeedbackRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}

QString HotelOrderBookingFeedbackRequest::getOutOid() const {
  return outOid;
}
void HotelOrderBookingFeedbackRequest::setOutOid (QString outOid) {
  this->outOid = outOid;
  appParams.insert("out_oid", outOid);
}

QString HotelOrderBookingFeedbackRequest::getRefundCode() const {
  return refundCode;
}
void HotelOrderBookingFeedbackRequest::setRefundCode (QString refundCode) {
  this->refundCode = refundCode;
  appParams.insert("refund_code", refundCode);
}

QString HotelOrderBookingFeedbackRequest::getResult() const {
  return result;
}
void HotelOrderBookingFeedbackRequest::setResult (QString result) {
  this->result = result;
  appParams.insert("result", result);
}

qlonglong HotelOrderBookingFeedbackRequest::getSessionId() const {
  return sessionId;
}
void HotelOrderBookingFeedbackRequest::setSessionId (qlonglong sessionId) {
  this->sessionId = sessionId;
  appParams.insert("session_id", QString::number(sessionId));
}



HotelOrderBookingFeedbackResponse *HotelOrderBookingFeedbackRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelOrderBookingFeedbackResponse *tmpResponse = new HotelOrderBookingFeedbackResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
