#include <TaoApiCpp/response/TripJipiaoAgentOrderSearchResponse.h>

SearchOrderResult TripJipiaoAgentOrderSearchResponse::getSearchResult() const {
  return searchResult;
}
void TripJipiaoAgentOrderSearchResponse::setSearchResult (SearchOrderResult searchResult) {
  this->searchResult = searchResult;
}

void TripJipiaoAgentOrderSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("search_result")) {
  searchResult.setParser(responseParser->getObjectParser("search_result"));
  searchResult.parseResponse();
  }

}

