#include <TaoApiCpp/response/HotelCityGetResponse.h>

QString HotelCityGetResponse::getResult() const {
  return result;
}
void HotelCityGetResponse::setResult (QString result) {
  this->result = result;
}

void HotelCityGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("result")) {
  result = responseParser->getStrByName("result");
  }

}

