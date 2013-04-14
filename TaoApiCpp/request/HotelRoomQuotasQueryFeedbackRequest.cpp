#include <TaoApiCpp/request/HotelRoomQuotasQueryFeedbackRequest.h>

QString HotelRoomQuotasQueryFeedbackRequest::getApiMethodName() const {
  return "taobao.hotel.room.quotas.query.feedback";
}

qlonglong HotelRoomQuotasQueryFeedbackRequest::getAvaliableRoomCount() const {
  return avaliableRoomCount;
}
void HotelRoomQuotasQueryFeedbackRequest::setAvaliableRoomCount (qlonglong avaliableRoomCount) {
  this->avaliableRoomCount = avaliableRoomCount;
  appParams.insert("avaliable_room_count", QString::number(avaliableRoomCount));
}

QDateTime HotelRoomQuotasQueryFeedbackRequest::getCheckinDate() const {
  return checkinDate;
}
void HotelRoomQuotasQueryFeedbackRequest::setCheckinDate (QDateTime checkinDate) {
  this->checkinDate = checkinDate;
  appParams.insert("checkin_date", checkinDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime HotelRoomQuotasQueryFeedbackRequest::getCheckoutDate() const {
  return checkoutDate;
}
void HotelRoomQuotasQueryFeedbackRequest::setCheckoutDate (QDateTime checkoutDate) {
  this->checkoutDate = checkoutDate;
  appParams.insert("checkout_date", checkoutDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString HotelRoomQuotasQueryFeedbackRequest::getFailedReason() const {
  return failedReason;
}
void HotelRoomQuotasQueryFeedbackRequest::setFailedReason (QString failedReason) {
  this->failedReason = failedReason;
  appParams.insert("failed_reason", failedReason);
}

QString HotelRoomQuotasQueryFeedbackRequest::getMessageId() const {
  return messageId;
}
void HotelRoomQuotasQueryFeedbackRequest::setMessageId (QString messageId) {
  this->messageId = messageId;
  appParams.insert("message_id", messageId);
}

QString HotelRoomQuotasQueryFeedbackRequest::getResult() const {
  return result;
}
void HotelRoomQuotasQueryFeedbackRequest::setResult (QString result) {
  this->result = result;
  appParams.insert("result", result);
}

QString HotelRoomQuotasQueryFeedbackRequest::getRoomQuotas() const {
  return roomQuotas;
}
void HotelRoomQuotasQueryFeedbackRequest::setRoomQuotas (QString roomQuotas) {
  this->roomQuotas = roomQuotas;
  appParams.insert("room_quotas", roomQuotas);
}

qlonglong HotelRoomQuotasQueryFeedbackRequest::getTotalRoomPrice() const {
  return totalRoomPrice;
}
void HotelRoomQuotasQueryFeedbackRequest::setTotalRoomPrice (qlonglong totalRoomPrice) {
  this->totalRoomPrice = totalRoomPrice;
  appParams.insert("total_room_price", QString::number(totalRoomPrice));
}



HotelRoomQuotasQueryFeedbackResponse *HotelRoomQuotasQueryFeedbackRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelRoomQuotasQueryFeedbackResponse *tmpResponse = new HotelRoomQuotasQueryFeedbackResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
