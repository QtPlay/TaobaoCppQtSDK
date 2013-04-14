#include <TaoApiCpp/request/HotelOrderPayFeedbackRequest.h>

QString HotelOrderPayFeedbackRequest::getApiMethodName() const {
  return "taobao.hotel.order.pay.feedback";
}

QString HotelOrderPayFeedbackRequest::getFailedReason() const {
  return failedReason;
}
void HotelOrderPayFeedbackRequest::setFailedReason (QString failedReason) {
  this->failedReason = failedReason;
  appParams.insert("failed_reason", failedReason);
}

QString HotelOrderPayFeedbackRequest::getMessageId() const {
  return messageId;
}
void HotelOrderPayFeedbackRequest::setMessageId (QString messageId) {
  this->messageId = messageId;
  appParams.insert("message_id", messageId);
}

qlonglong HotelOrderPayFeedbackRequest::getOid() const {
  return oid;
}
void HotelOrderPayFeedbackRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}

QString HotelOrderPayFeedbackRequest::getOutOid() const {
  return outOid;
}
void HotelOrderPayFeedbackRequest::setOutOid (QString outOid) {
  this->outOid = outOid;
  appParams.insert("out_oid", outOid);
}

QString HotelOrderPayFeedbackRequest::getResult() const {
  return result;
}
void HotelOrderPayFeedbackRequest::setResult (QString result) {
  this->result = result;
  appParams.insert("result", result);
}

qlonglong HotelOrderPayFeedbackRequest::getSessionId() const {
  return sessionId;
}
void HotelOrderPayFeedbackRequest::setSessionId (qlonglong sessionId) {
  this->sessionId = sessionId;
  appParams.insert("session_id", QString::number(sessionId));
}



HotelOrderPayFeedbackResponse *HotelOrderPayFeedbackRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelOrderPayFeedbackResponse *tmpResponse = new HotelOrderPayFeedbackResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
