#include <TaoApiCpp/response/HotelOrderGetResponse.h>

HotelOrder HotelOrderGetResponse::getHotelOrder() const {
  return hotelOrder;
}
void HotelOrderGetResponse::setHotelOrder (HotelOrder hotelOrder) {
  this->hotelOrder = hotelOrder;
}

void HotelOrderGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("hotel_order")) {
  hotelOrder.setParser(responseParser->getObjectParser("hotel_order"));
  hotelOrder.parseResponse();
  }

}

