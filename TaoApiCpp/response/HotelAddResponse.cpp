#include <TaoApiCpp/response/HotelAddResponse.h>

Hotel HotelAddResponse::getHotel() const {
  return hotel;
}
void HotelAddResponse::setHotel (Hotel hotel) {
  this->hotel = hotel;
}

void HotelAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("hotel")) {
  hotel.setParser(responseParser->getObjectParser("hotel"));
  hotel.parseResponse();
  }

}

