#include <TaoApiCpp/response/HotelRoomGetResponse.h>

Room HotelRoomGetResponse::getRoom() const {
  return room;
}
void HotelRoomGetResponse::setRoom (Room room) {
  this->room = room;
}

void HotelRoomGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("room")) {
  room.setParser(responseParser->getObjectParser("room"));
  room.parseResponse();
  }

}

