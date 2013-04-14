#include <TaoApiCpp/response/HotelRoomAddResponse.h>

Room HotelRoomAddResponse::getRoom() const {
  return room;
}
void HotelRoomAddResponse::setRoom (Room room) {
  this->room = room;
}

void HotelRoomAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("room")) {
  room.setParser(responseParser->getObjectParser("room"));
  room.parseResponse();
  }

}

