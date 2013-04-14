#include <TaoApiCpp/response/HotelSoldOrdersIncrementGetResponse.h>

bool HotelSoldOrdersIncrementGetResponse::getHasNext() const {
  return hasNext;
}
void HotelSoldOrdersIncrementGetResponse::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}
QList<HotelOrder> HotelSoldOrdersIncrementGetResponse::getHotelOrders() const {
  return hotelOrders;
}
void HotelSoldOrdersIncrementGetResponse::setHotelOrders (QList<HotelOrder> hotelOrders) {
  this->hotelOrders = hotelOrders;
}
qlonglong HotelSoldOrdersIncrementGetResponse::getTotalResults() const {
  return totalResults;
}
void HotelSoldOrdersIncrementGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void HotelSoldOrdersIncrementGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("has_next")) {
  hasNext = responseParser->getBoolByName("has_next");
  }
  if (responseParser->hasName("hotel_orders")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("hotel_orders");
  Parser *parser;
  foreach (parser, listParser) {
    HotelOrder tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    hotelOrders.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

