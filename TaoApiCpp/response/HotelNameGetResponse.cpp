#include <TaoApiCpp/response/HotelNameGetResponse.h>

Hotel HotelNameGetResponse::getHotel() const {
  return hotel;
}
void HotelNameGetResponse::setHotel (Hotel hotel) {
  this->hotel = hotel;
}

void HotelNameGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("hotel")) {
  hotel.setParser(responseParser->getObjectParser("hotel"));
  hotel.parseResponse();
  }

}

