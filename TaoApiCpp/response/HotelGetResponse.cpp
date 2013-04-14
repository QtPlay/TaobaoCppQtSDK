#include <TaoApiCpp/response/HotelGetResponse.h>

Hotel HotelGetResponse::getHotel() const {
  return hotel;
}
void HotelGetResponse::setHotel (Hotel hotel) {
  this->hotel = hotel;
}

void HotelGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("hotel")) {
  hotel.setParser(responseParser->getObjectParser("hotel"));
  hotel.parseResponse();
  }

}

