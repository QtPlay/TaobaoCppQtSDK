#include <TaoApiCpp/request/HotelRoomGetRequest.h>

QString HotelRoomGetRequest::getApiMethodName() const {
  return "taobao.hotel.room.get";
}

qlonglong HotelRoomGetRequest::getGid() const {
  return gid;
}
void HotelRoomGetRequest::setGid (qlonglong gid) {
  this->gid = gid;
  appParams.insert("gid", QString::number(gid));
}

qlonglong HotelRoomGetRequest::getItemId() const {
  return itemId;
}
void HotelRoomGetRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

bool HotelRoomGetRequest::getNeedHotel() const {
  return needHotel;
}
void HotelRoomGetRequest::setNeedHotel (bool needHotel) {
  this->needHotel = needHotel;
  appParams.insert("need_hotel", needHotel? "true": "false");
}

bool HotelRoomGetRequest::getNeedRoomDesc() const {
  return needRoomDesc;
}
void HotelRoomGetRequest::setNeedRoomDesc (bool needRoomDesc) {
  this->needRoomDesc = needRoomDesc;
  appParams.insert("need_room_desc", needRoomDesc? "true": "false");
}

bool HotelRoomGetRequest::getNeedRoomQuotas() const {
  return needRoomQuotas;
}
void HotelRoomGetRequest::setNeedRoomQuotas (bool needRoomQuotas) {
  this->needRoomQuotas = needRoomQuotas;
  appParams.insert("need_room_quotas", needRoomQuotas? "true": "false");
}

bool HotelRoomGetRequest::getNeedRoomType() const {
  return needRoomType;
}
void HotelRoomGetRequest::setNeedRoomType (bool needRoomType) {
  this->needRoomType = needRoomType;
  appParams.insert("need_room_type", needRoomType? "true": "false");
}



HotelRoomGetResponse *HotelRoomGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelRoomGetResponse *tmpResponse = new HotelRoomGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
