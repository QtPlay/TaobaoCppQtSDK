#include <TaoApiCpp/request/HotelOrderFaceCheckRequest.h>

QString HotelOrderFaceCheckRequest::getApiMethodName() const {
  return "taobao.hotel.order.face.check";
}

bool HotelOrderFaceCheckRequest::getChecked() const {
  return checked;
}
void HotelOrderFaceCheckRequest::setChecked (bool checked) {
  this->checked = checked;
  appParams.insert("checked", checked? "true": "false");
}

QDateTime HotelOrderFaceCheckRequest::getCheckinDate() const {
  return checkinDate;
}
void HotelOrderFaceCheckRequest::setCheckinDate (QDateTime checkinDate) {
  this->checkinDate = checkinDate;
  appParams.insert("checkin_date", checkinDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime HotelOrderFaceCheckRequest::getCheckoutDate() const {
  return checkoutDate;
}
void HotelOrderFaceCheckRequest::setCheckoutDate (QDateTime checkoutDate) {
  this->checkoutDate = checkoutDate;
  appParams.insert("checkout_date", checkoutDate.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong HotelOrderFaceCheckRequest::getOid() const {
  return oid;
}
void HotelOrderFaceCheckRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}



HotelOrderFaceCheckResponse *HotelOrderFaceCheckRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelOrderFaceCheckResponse *tmpResponse = new HotelOrderFaceCheckResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
