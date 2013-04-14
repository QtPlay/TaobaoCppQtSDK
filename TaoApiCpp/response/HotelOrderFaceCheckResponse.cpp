#include <TaoApiCpp/response/HotelOrderFaceCheckResponse.h>

QString HotelOrderFaceCheckResponse::getResult() const {
  return result;
}
void HotelOrderFaceCheckResponse::setResult (QString result) {
  this->result = result;
}

void HotelOrderFaceCheckResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("result")) {
  result = responseParser->getStrByName("result");
  }

}

