#include <TaoApiCpp/domain/RouteStatisticsInfo.h>
qlonglong RouteStatisticsInfo::getEvaluationCount() const {
  return evaluationCount;
}
void RouteStatisticsInfo::setEvaluationCount (qlonglong evaluationCount) {
  this->evaluationCount = evaluationCount;
}

QString RouteStatisticsInfo::getEvaluationScore() const {
  return evaluationScore;
}
void RouteStatisticsInfo::setEvaluationScore (QString evaluationScore) {
  this->evaluationScore = evaluationScore;
}

qlonglong RouteStatisticsInfo::getFromNetworkCount() const {
  return fromNetworkCount;
}
void RouteStatisticsInfo::setFromNetworkCount (qlonglong fromNetworkCount) {
  this->fromNetworkCount = fromNetworkCount;
}

qlonglong RouteStatisticsInfo::getToNetworkCount() const {
  return toNetworkCount;
}
void RouteStatisticsInfo::setToNetworkCount (qlonglong toNetworkCount) {
  this->toNetworkCount = toNetworkCount;
}

qlonglong RouteStatisticsInfo::getTrunkRouteOrderCount() const {
  return trunkRouteOrderCount;
}
void RouteStatisticsInfo::setTrunkRouteOrderCount (qlonglong trunkRouteOrderCount) {
  this->trunkRouteOrderCount = trunkRouteOrderCount;
}


void RouteStatisticsInfo::parseResponse() {
  if (responseParser->hasName("evaluation_count")) {
  evaluationCount = responseParser->getNumByName("evaluation_count");
  }
  if (responseParser->hasName("evaluation_score")) {
  evaluationScore = responseParser->getStrByName("evaluation_score");
  }
  if (responseParser->hasName("from_network_count")) {
  fromNetworkCount = responseParser->getNumByName("from_network_count");
  }
  if (responseParser->hasName("to_network_count")) {
  toNetworkCount = responseParser->getNumByName("to_network_count");
  }
  if (responseParser->hasName("trunk_route_order_count")) {
  trunkRouteOrderCount = responseParser->getNumByName("trunk_route_order_count");
  }

}

