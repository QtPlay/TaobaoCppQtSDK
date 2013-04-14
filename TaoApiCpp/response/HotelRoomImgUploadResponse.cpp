#include <TaoApiCpp/response/HotelRoomImgUploadResponse.h>

RoomImage HotelRoomImgUploadResponse::getRoomImage() const {
  return roomImage;
}
void HotelRoomImgUploadResponse::setRoomImage (RoomImage roomImage) {
  this->roomImage = roomImage;
}

void HotelRoomImgUploadResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("room_image")) {
  roomImage.setParser(responseParser->getObjectParser("room_image"));
  roomImage.parseResponse();
  }

}

