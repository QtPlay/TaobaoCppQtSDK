#include <TaoApiCpp/response/HotelRoomUpdateResponse.h>

Room HotelRoomUpdateResponse::getRoom() const {
  return room;
}
void HotelRoomUpdateResponse::setRoom (Room room) {
  this->room = room;
}

void HotelRoomUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("room")) {
  room.setParser(responseParser->getObjectParser("room"));
  room.parseResponse();
  }

}

