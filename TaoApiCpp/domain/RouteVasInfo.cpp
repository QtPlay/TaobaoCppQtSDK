#include <TaoApiCpp/domain/RouteVasInfo.h>
QString RouteVasInfo::getRouteCode() const {
  return routeCode;
}
void RouteVasInfo::setRouteCode (QString routeCode) {
  this->routeCode = routeCode;
}

QList<LogisticsVas> RouteVasInfo::getVasList() const {
  return vasList;
}
void RouteVasInfo::setVasList (QList<LogisticsVas> vasList) {
  this->vasList = vasList;
}


void RouteVasInfo::parseResponse() {
  if (responseParser->hasName("route_code")) {
  routeCode = responseParser->getStrByName("route_code");
  }
  if (responseParser->hasName("vas_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("vas_list");
  Parser *parser;
  foreach (parser, listParser) {
    LogisticsVas tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    vasList.append(tmp);
  }
  }

}

