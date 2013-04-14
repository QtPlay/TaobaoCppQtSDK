#include <TaoApiCpp/response/HotelImageUploadResponse.h>

HotelImage HotelImageUploadResponse::getHotelImage() const {
  return hotelImage;
}
void HotelImageUploadResponse::setHotelImage (HotelImage hotelImage) {
  this->hotelImage = hotelImage;
}

void HotelImageUploadResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("hotel_image")) {
  hotelImage.setParser(responseParser->getObjectParser("hotel_image"));
  hotelImage.parseResponse();
  }

}

