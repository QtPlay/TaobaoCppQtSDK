#include <TaoApiCpp/response/HotelTypeNameGetResponse.h>

RoomType HotelTypeNameGetResponse::getRoomType() const {
  return roomType;
}
void HotelTypeNameGetResponse::setRoomType (RoomType roomType) {
  this->roomType = roomType;
}

void HotelTypeNameGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("room_type")) {
  roomType.setParser(responseParser->getObjectParser("room_type"));
  roomType.parseResponse();
  }

}

