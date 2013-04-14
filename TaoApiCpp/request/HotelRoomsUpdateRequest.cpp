#include <TaoApiCpp/request/HotelRoomsUpdateRequest.h>

QString HotelRoomsUpdateRequest::getApiMethodName() const {
  return "taobao.hotel.rooms.update";
}

QString HotelRoomsUpdateRequest::getGidRoomQuotaMap() const {
  return gidRoomQuotaMap;
}
void HotelRoomsUpdateRequest::setGidRoomQuotaMap (QString gidRoomQuotaMap) {
  this->gidRoomQuotaMap = gidRoomQuotaMap;
  appParams.insert("gid_room_quota_map", gidRoomQuotaMap);
}

QString HotelRoomsUpdateRequest::getMultiRoomQuotas() const {
  return multiRoomQuotas;
}
void HotelRoomsUpdateRequest::setMultiRoomQuotas (QString multiRoomQuotas) {
  this->multiRoomQuotas = multiRoomQuotas;
  appParams.insert("multi_room_quotas", multiRoomQuotas);
}



HotelRoomsUpdateResponse *HotelRoomsUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelRoomsUpdateResponse *tmpResponse = new HotelRoomsUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
