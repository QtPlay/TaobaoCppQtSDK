#include <TaoApiCpp/response/HotelRoomsSearchResponse.h>

QList<Room> HotelRoomsSearchResponse::getRooms() const {
  return rooms;
}
void HotelRoomsSearchResponse::setRooms (QList<Room> rooms) {
  this->rooms = rooms;
}
qlonglong HotelRoomsSearchResponse::getTotalResults() const {
  return totalResults;
}
void HotelRoomsSearchResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void HotelRoomsSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rooms")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("rooms");
  Parser *parser;
  foreach (parser, listParser) {
    Room tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    rooms.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

