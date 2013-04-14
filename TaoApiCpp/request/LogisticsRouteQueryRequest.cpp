#include <TaoApiCpp/request/LogisticsRouteQueryRequest.h>

QString LogisticsRouteQueryRequest::getApiMethodName() const {
  return "alibaba.logistics.route.query";
}

bool LogisticsRouteQueryRequest::getAirTransport() const {
  return airTransport;
}
void LogisticsRouteQueryRequest::setAirTransport (bool airTransport) {
  this->airTransport = airTransport;
  appParams.insert("air_transport", airTransport? "true": "false");
}

QString LogisticsRouteQueryRequest::getCorpList() const {
  return corpList;
}
void LogisticsRouteQueryRequest::setCorpList (QString corpList) {
  this->corpList = corpList;
  appParams.insert("corp_list", corpList);
}

qlonglong LogisticsRouteQueryRequest::getEndAreaId() const {
  return endAreaId;
}
void LogisticsRouteQueryRequest::setEndAreaId (qlonglong endAreaId) {
  this->endAreaId = endAreaId;
  appParams.insert("end_area_id", QString::number(endAreaId));
}

bool LogisticsRouteQueryRequest::getMergeRoute() const {
  return mergeRoute;
}
void LogisticsRouteQueryRequest::setMergeRoute (bool mergeRoute) {
  this->mergeRoute = mergeRoute;
  appParams.insert("merge_route", mergeRoute? "true": "false");
}

qlonglong LogisticsRouteQueryRequest::getPageIndex() const {
  return pageIndex;
}
void LogisticsRouteQueryRequest::setPageIndex (qlonglong pageIndex) {
  this->pageIndex = pageIndex;
  appParams.insert("page_index", QString::number(pageIndex));
}

qlonglong LogisticsRouteQueryRequest::getPageSize() const {
  return pageSize;
}
void LogisticsRouteQueryRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

bool LogisticsRouteQueryRequest::getShowCods() const {
  return showCods;
}
void LogisticsRouteQueryRequest::setShowCods (bool showCods) {
  this->showCods = showCods;
  appParams.insert("show_cods", showCods? "true": "false");
}

bool LogisticsRouteQueryRequest::getShowSpecials() const {
  return showSpecials;
}
void LogisticsRouteQueryRequest::setShowSpecials (bool showSpecials) {
  this->showSpecials = showSpecials;
  appParams.insert("show_specials", showSpecials? "true": "false");
}

bool LogisticsRouteQueryRequest::getShowStatisticsInfo() const {
  return showStatisticsInfo;
}
void LogisticsRouteQueryRequest::setShowStatisticsInfo (bool showStatisticsInfo) {
  this->showStatisticsInfo = showStatisticsInfo;
  appParams.insert("show_statistics_info", showStatisticsInfo? "true": "false");
}

QString LogisticsRouteQueryRequest::getSortType() const {
  return sortType;
}
void LogisticsRouteQueryRequest::setSortType (QString sortType) {
  this->sortType = sortType;
  appParams.insert("sort_type", sortType);
}

QString LogisticsRouteQueryRequest::getSource() const {
  return source;
}
void LogisticsRouteQueryRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

qlonglong LogisticsRouteQueryRequest::getStartAreaId() const {
  return startAreaId;
}
void LogisticsRouteQueryRequest::setStartAreaId (qlonglong startAreaId) {
  this->startAreaId = startAreaId;
  appParams.insert("start_area_id", QString::number(startAreaId));
}

bool LogisticsRouteQueryRequest::getSummaryTotalCorps() const {
  return summaryTotalCorps;
}
void LogisticsRouteQueryRequest::setSummaryTotalCorps (bool summaryTotalCorps) {
  this->summaryTotalCorps = summaryTotalCorps;
  appParams.insert("summary_total_corps", summaryTotalCorps? "true": "false");
}

bool LogisticsRouteQueryRequest::getSummeryByCorp() const {
  return summeryByCorp;
}
void LogisticsRouteQueryRequest::setSummeryByCorp (bool summeryByCorp) {
  this->summeryByCorp = summeryByCorp;
  appParams.insert("summery_by_corp", summeryByCorp? "true": "false");
}

bool LogisticsRouteQueryRequest::getTurnLevel() const {
  return turnLevel;
}
void LogisticsRouteQueryRequest::setTurnLevel (bool turnLevel) {
  this->turnLevel = turnLevel;
  appParams.insert("turn_level", turnLevel? "true": "false");
}



LogisticsRouteQueryResponse *LogisticsRouteQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsRouteQueryResponse *tmpResponse = new LogisticsRouteQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
