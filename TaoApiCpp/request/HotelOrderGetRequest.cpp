#include <TaoApiCpp/request/HotelOrderGetRequest.h>

QString HotelOrderGetRequest::getApiMethodName() const {
  return "taobao.hotel.order.get";
}

bool HotelOrderGetRequest::getNeedGuest() const {
  return needGuest;
}
void HotelOrderGetRequest::setNeedGuest (bool needGuest) {
  this->needGuest = needGuest;
  appParams.insert("need_guest", needGuest? "true": "false");
}

bool HotelOrderGetRequest::getNeedMessage() const {
  return needMessage;
}
void HotelOrderGetRequest::setNeedMessage (bool needMessage) {
  this->needMessage = needMessage;
  appParams.insert("need_message", needMessage? "true": "false");
}

qlonglong HotelOrderGetRequest::getOid() const {
  return oid;
}
void HotelOrderGetRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}

qlonglong HotelOrderGetRequest::getTid() const {
  return tid;
}
void HotelOrderGetRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



HotelOrderGetResponse *HotelOrderGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelOrderGetResponse *tmpResponse = new HotelOrderGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
