#include <TaoApiCpp/response/HotelUpdateResponse.h>

Hotel HotelUpdateResponse::getHotel() const {
  return hotel;
}
void HotelUpdateResponse::setHotel (Hotel hotel) {
  this->hotel = hotel;
}

void HotelUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("hotel")) {
  hotel.setParser(responseParser->getObjectParser("hotel"));
  hotel.parseResponse();
  }

}

