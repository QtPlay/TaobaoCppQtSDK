#include <TaoApiCpp/response/HotelSoldTypesIncrementGetResponse.h>

bool HotelSoldTypesIncrementGetResponse::getHasNext() const {
  return hasNext;
}
void HotelSoldTypesIncrementGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
QList<RoomType> HotelSoldTypesIncrementGetResponse::getRoomTypes() const {
  return roomTypes;
}
void HotelSoldTypesIncrementGetResponse::setRoomTypes (QList<RoomType> roomTypes) {
  this->roomTypes = roomTypes;
}
qlonglong HotelSoldTypesIncrementGetResponse::getTotalResults() const {
  return totalResults;
}
void HotelSoldTypesIncrementGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void HotelSoldTypesIncrementGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("has_next")) {
  hasNext = responseParser->getBoolByName("has_next");
  }
  if (responseParser->hasName("room_types")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("room_types");
  Parser *parser;
  foreach (parser, listParser) {
    RoomType tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    roomTypes.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

