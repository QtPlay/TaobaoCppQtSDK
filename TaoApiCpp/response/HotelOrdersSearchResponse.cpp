#include <TaoApiCpp/response/HotelOrdersSearchResponse.h>

QList<HotelOrder> HotelOrdersSearchResponse::getHotelOrders() const {
  return hotelOrders;
}
void HotelOrdersSearchResponse::setHotelOrders (QList<HotelOrder> hotelOrders) {
  this->hotelOrders = hotelOrders;
}
qlonglong HotelOrdersSearchResponse::getTotalResults() const {
  return totalResults;
}
void HotelOrdersSearchResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void HotelOrdersSearchResponse::parseNormalResponse() {
  parseError();
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

