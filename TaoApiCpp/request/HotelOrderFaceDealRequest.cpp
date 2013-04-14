#include <TaoApiCpp/request/HotelOrderFaceDealRequest.h>

QString HotelOrderFaceDealRequest::getApiMethodName() const {
  return "taobao.hotel.order.face.deal";
}

qlonglong HotelOrderFaceDealRequest::getOid() const {
  return oid;
}
void HotelOrderFaceDealRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}

QString HotelOrderFaceDealRequest::getOperType() const {
  return operType;
}
void HotelOrderFaceDealRequest::setOperType (QString operType) {
  this->operType = operType;
  appParams.insert("oper_type", operType);
}

QString HotelOrderFaceDealRequest::getReasonText() const {
  return reasonText;
}
void HotelOrderFaceDealRequest::setReasonText (QString reasonText) {
  this->reasonText = reasonText;
  appParams.insert("reason_text", reasonText);
}

QString HotelOrderFaceDealRequest::getReasonType() const {
  return reasonType;
}
void HotelOrderFaceDealRequest::setReasonType (QString reasonType) {
  this->reasonType = reasonType;
  appParams.insert("reason_type", reasonType);
}



HotelOrderFaceDealResponse *HotelOrderFaceDealRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelOrderFaceDealResponse *tmpResponse = new HotelOrderFaceDealResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
