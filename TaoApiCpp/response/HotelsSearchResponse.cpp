#include <TaoApiCpp/response/HotelsSearchResponse.h>

QList<Hotel> HotelsSearchResponse::getHotels() const {
  return hotels;
}
void HotelsSearchResponse::setHotels (QList<Hotel> hotels) {
  this->hotels = hotels;
}
qlonglong HotelsSearchResponse::getTotalResults() const {
  return totalResults;
}
void HotelsSearchResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void HotelsSearchResponse::parseNormalResponse() {
  parseError();
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

