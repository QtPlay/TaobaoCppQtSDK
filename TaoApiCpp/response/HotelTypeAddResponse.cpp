#include <TaoApiCpp/response/HotelTypeAddResponse.h>

RoomType HotelTypeAddResponse::getRoomType() const {
  return roomType;
}
void HotelTypeAddResponse::setRoomType (RoomType roomType) {
  this->roomType = roomType;
}

void HotelTypeAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("room_type")) {
  roomType.setParser(responseParser->getObjectParser("room_type"));
  roomType.parseResponse();
  }

}

