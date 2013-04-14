#include <TaoApiCpp/response/LogisticsRouteQueryResponse.h>

QueryRouteResult LogisticsRouteQueryResponse::getQueryRouteResult() const {
  return queryRouteResult;
}
void LogisticsRouteQueryResponse::setQueryRouteResult (QueryRouteResult queryRouteResult) {
  this->queryRouteResult = queryRouteResult;
}

void LogisticsRouteQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("query_route_result")) {
  queryRouteResult.setParser(responseParser->getObjectParser("query_route_result"));
  queryRouteResult.parseResponse();
  }

}

