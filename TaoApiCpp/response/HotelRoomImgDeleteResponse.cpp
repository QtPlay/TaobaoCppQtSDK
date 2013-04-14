#include <TaoApiCpp/response/HotelRoomImgDeleteResponse.h>

RoomImage HotelRoomImgDeleteResponse::getRoomImage() const {
  return roomImage;
}
void HotelRoomImgDeleteResponse::setRoomImage (RoomImage roomImage) {
  this->roomImage = roomImage;
}

void HotelRoomImgDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("room_image")) {
  roomImage.setParser(responseParser->getObjectParser("room_image"));
  roomImage.parseResponse();
  }

}

