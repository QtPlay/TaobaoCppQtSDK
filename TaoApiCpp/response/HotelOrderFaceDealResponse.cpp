#include <TaoApiCpp/response/HotelOrderFaceDealResponse.h>

QString HotelOrderFaceDealResponse::getResult() const {
  return result;
}
void HotelOrderFaceDealResponse::setResult (QString result) {
  this->result = result;
}

void HotelOrderFaceDealResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("result")) {
  result = responseParser->getStrByName("result");
  }

}

