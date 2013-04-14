#include <TaoApiCpp/domain/QueryRouteResult.h>
QList<CompanyRouteSummary> QueryRouteResult::getCompanyRouteSummarys() const {
  return companyRouteSummarys;
}
void QueryRouteResult::setCompanyRouteSummarys (QList<CompanyRouteSummary> companyRouteSummarys) {
  this->companyRouteSummarys = companyRouteSummarys;
}

bool QueryRouteResult::getIsTurnLevel() const {
  return isTurnLevel;
}
void QueryRouteResult::setIsTurnLevel (bool isTurnLevel) {
  this->isTurnLevel = isTurnLevel;
}

RouteAlpPage QueryRouteResult::getPagesRouteDetails() const {
  return pagesRouteDetails;
}
void QueryRouteResult::setPagesRouteDetails (RouteAlpPage pagesRouteDetails) {
  this->pagesRouteDetails = pagesRouteDetails;
}

QList<RouteVasInfo> QueryRouteResult::getRouteVas() const {
  return routeVas;
}
void QueryRouteResult::setRouteVas (QList<RouteVasInfo> routeVas) {
  this->routeVas = routeVas;
}

qlonglong QueryRouteResult::getTotalCorps() const {
  return totalCorps;
}
void QueryRouteResult::setTotalCorps (qlonglong totalCorps) {
  this->totalCorps = totalCorps;
}

qlonglong QueryRouteResult::getTotalRoutes() const {
  return totalRoutes;
}
void QueryRouteResult::setTotalRoutes (qlonglong totalRoutes) {
  this->totalRoutes = totalRoutes;
}


void QueryRouteResult::parseResponse() {
  if (responseParser->hasName("company_route_summarys")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("company_route_summarys");
  Parser *parser;
  foreach (parser, listParser) {
    CompanyRouteSummary tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    companyRouteSummarys.append(tmp);
  }
  }
  if (responseParser->hasName("is_turn_level")) {
  isTurnLevel = responseParser->getBoolByName("is_turn_level");
  }
  if (responseParser->hasName("pages_route_details")) {
  pagesRouteDetails.setParser(responseParser->getObjectParser("pages_route_details"));
  pagesRouteDetails.parseResponse();
  }
  if (responseParser->hasName("route_vas")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("route_vas");
  Parser *parser;
  foreach (parser, listParser) {
    RouteVasInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    routeVas.append(tmp);
  }
  }
  if (responseParser->hasName("total_corps")) {
  totalCorps = responseParser->getNumByName("total_corps");
  }
  if (responseParser->hasName("total_routes")) {
  totalRoutes = responseParser->getNumByName("total_routes");
  }

}

