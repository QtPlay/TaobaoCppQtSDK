#include <TaoApiCpp/request/HotelRoomsSearchRequest.h>

QString HotelRoomsSearchRequest::getApiMethodName() const {
  return "taobao.hotel.rooms.search";
}

QString HotelRoomsSearchRequest::getGids() const {
  return gids;
}
void HotelRoomsSearchRequest::setGids (QString gids) {
  this->gids = gids;
  appParams.insert("gids", gids);
}

QString HotelRoomsSearchRequest::getHids() const {
  return hids;
}
void HotelRoomsSearchRequest::setHids (QString hids) {
  this->hids = hids;
  appParams.insert("hids", hids);
}

QString HotelRoomsSearchRequest::getItemIds() const {
  return itemIds;
}
void HotelRoomsSearchRequest::setItemIds (QString itemIds) {
  this->itemIds = itemIds;
  appParams.insert("item_ids", itemIds);
}

bool HotelRoomsSearchRequest::getNeedHotel() const {
  return needHotel;
}
void HotelRoomsSearchRequest::setNeedHotel (bool needHotel) {
  this->needHotel = needHotel;
  appParams.insert("need_hotel", needHotel? "true": "false");
}

bool HotelRoomsSearchRequest::getNeedRoomDesc() const {
  return needRoomDesc;
}
void HotelRoomsSearchRequest::setNeedRoomDesc (bool needRoomDesc) {
  this->needRoomDesc = needRoomDesc;
  appParams.insert("need_room_desc", needRoomDesc? "true": "false");
}

bool HotelRoomsSearchRequest::getNeedRoomQuotas() const {
  return needRoomQuotas;
}
void HotelRoomsSearchRequest::setNeedRoomQuotas (bool needRoomQuotas) {
  this->needRoomQuotas = needRoomQuotas;
  appParams.insert("need_room_quotas", needRoomQuotas? "true": "false");
}

bool HotelRoomsSearchRequest::getNeedRoomType() const {
  return needRoomType;
}
void HotelRoomsSearchRequest::setNeedRoomType (bool needRoomType) {
  this->needRoomType = needRoomType;
  appParams.insert("need_room_type", needRoomType? "true": "false");
}

qlonglong HotelRoomsSearchRequest::getPageNo() const {
  return pageNo;
}
void HotelRoomsSearchRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

QString HotelRoomsSearchRequest::getRids() const {
  return rids;
}
void HotelRoomsSearchRequest::setRids (QString rids) {
  this->rids = rids;
  appParams.insert("rids", rids);
}



HotelRoomsSearchResponse *HotelRoomsSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelRoomsSearchResponse *tmpResponse = new HotelRoomsSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
