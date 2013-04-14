#include <TaoApiCpp/response/HotelSoldHotelsIncrementGetResponse.h>

bool HotelSoldHotelsIncrementGetResponse::getHasNext() const {
  return hasNext;
}
void HotelSoldHotelsIncrementGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
QList<Hotel> HotelSoldHotelsIncrementGetResponse::getHotels() const {
  return hotels;
}
void HotelSoldHotelsIncrementGetResponse::setHotels (QList<Hotel> hotels) {
  this->hotels = hotels;
}
qlonglong HotelSoldHotelsIncrementGetResponse::getTotalResults() const {
  return totalResults;
}
void HotelSoldHotelsIncrementGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void HotelSoldHotelsIncrementGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("has_next")) {
  hasNext = responseParser->getBoolByName("has_next");
  }
  if (responseParser->hasName("hotels")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("hotels");
  Parser *parser;
  foreach (parser, listParser) {
    Hotel tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    hotels.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

