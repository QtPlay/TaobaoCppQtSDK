#include <TaoApiCpp/response/TripJipiaoAgentOrderFindResponse.h>

SearchOrderResult TripJipiaoAgentOrderFindResponse::getSearchResult() const {
  return searchResult;
}
void TripJipiaoAgentOrderFindResponse::setSearchResult (SearchOrderResult searchResult) {
  this->searchResult = searchResult;
}

void TripJipiaoAgentOrderFindResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("search_result")) {
  searchResult.setParser(responseParser->getObjectParser("search_result"));
  searchResult.parseResponse();
  }

}

