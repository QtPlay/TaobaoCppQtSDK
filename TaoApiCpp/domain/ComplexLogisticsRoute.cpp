#include <TaoApiCpp/domain/ComplexLogisticsRoute.h>
RouteCarriageInfo ComplexLogisticsRoute::getCarriageInfo() const {
  return carriageInfo;
}
void ComplexLogisticsRoute::setCarriageInfo (RouteCarriageInfo carriageInfo) {
  this->carriageInfo = carriageInfo;
}

FreightCompany ComplexLogisticsRoute::getCompany() const {
  return company;
}
void ComplexLogisticsRoute::setCompany (FreightCompany company) {
  this->company = company;
}

RouteExtenalInfo ComplexLogisticsRoute::getExtenalInfo() const {
  return extenalInfo;
}
void ComplexLogisticsRoute::setExtenalInfo (RouteExtenalInfo extenalInfo) {
  this->extenalInfo = extenalInfo;
}

qlonglong ComplexLogisticsRoute::getFromAreaId() const {
  return fromAreaId;
}
void ComplexLogisticsRoute::setFromAreaId (qlonglong fromAreaId) {
  this->fromAreaId = fromAreaId;
}

QString ComplexLogisticsRoute::getFromCityName() const {
  return fromCityName;
}
void ComplexLogisticsRoute::setFromCityName (QString fromCityName) {
  this->fromCityName = fromCityName;
}

QString ComplexLogisticsRoute::getFromCountyName() const {
  return fromCountyName;
}
void ComplexLogisticsRoute::setFromCountyName (QString fromCountyName) {
  this->fromCountyName = fromCountyName;
}

QString ComplexLogisticsRoute::getFromProvinceName() const {
  return fromProvinceName;
}
void ComplexLogisticsRoute::setFromProvinceName (QString fromProvinceName) {
  this->fromProvinceName = fromProvinceName;
}

RoutePromotionInfo ComplexLogisticsRoute::getPromotionInfo() const {
  return promotionInfo;
}
void ComplexLogisticsRoute::setPromotionInfo (RoutePromotionInfo promotionInfo) {
  this->promotionInfo = promotionInfo;
}

QString ComplexLogisticsRoute::getRouteCode() const {
  return routeCode;
}
void ComplexLogisticsRoute::setRouteCode (QString routeCode) {
  this->routeCode = routeCode;
}

RouteStatisticsInfo ComplexLogisticsRoute::getStatisticsInfo() const {
  return statisticsInfo;
}
void ComplexLogisticsRoute::setStatisticsInfo (RouteStatisticsInfo statisticsInfo) {
  this->statisticsInfo = statisticsInfo;
}

qlonglong ComplexLogisticsRoute::getToAreaId() const {
  return toAreaId;
}
void ComplexLogisticsRoute::setToAreaId (qlonglong toAreaId) {
  this->toAreaId = toAreaId;
}

QString ComplexLogisticsRoute::getToCityName() const {
  return toCityName;
}
void ComplexLogisticsRoute::setToCityName (QString toCityName) {
  this->toCityName = toCityName;
}

QString ComplexLogisticsRoute::getToCountyName() const {
  return toCountyName;
}
void ComplexLogisticsRoute::setToCountyName (QString toCountyName) {
  this->toCountyName = toCountyName;
}

QString ComplexLogisticsRoute::getToProvinceName() const {
  return toProvinceName;
}
void ComplexLogisticsRoute::setToProvinceName (QString toProvinceName) {
  this->toProvinceName = toProvinceName;
}


void ComplexLogisticsRoute::parseResponse() {
  if (responseParser->hasName("carriage_info")) {
  carriageInfo.setParser(responseParser->getObjectParser("carriage_info"));
  carriageInfo.parseResponse();
  }
  if (responseParser->hasName("company")) {
  company.setParser(responseParser->getObjectParser("company"));
  company.parseResponse();
  }
  if (responseParser->hasName("extenal_info")) {
  extenalInfo.setParser(responseParser->getObjectParser("extenal_info"));
  extenalInfo.parseResponse();
  }
  if (responseParser->hasName("from_area_id")) {
  fromAreaId = responseParser->getNumByName("from_area_id");
  }
  if (responseParser->hasName("from_city_name")) {
  fromCityName = responseParser->getStrByName("from_city_name");
  }
  if (responseParser->hasName("from_county_name")) {
  fromCountyName = responseParser->getStrByName("from_county_name");
  }
  if (responseParser->hasName("from_province_name")) {
  fromProvinceName = responseParser->getStrByName("from_province_name");
  }
  if (responseParser->hasName("promotion_info")) {
  promotionInfo.setParser(responseParser->getObjectParser("promotion_info"));
  promotionInfo.parseResponse();
  }
  if (responseParser->hasName("route_code")) {
  routeCode = responseParser->getStrByName("route_code");
  }
  if (responseParser->hasName("statistics_info")) {
  statisticsInfo.setParser(responseParser->getObjectParser("statistics_info"));
  statisticsInfo.parseResponse();
  }
  if (responseParser->hasName("to_area_id")) {
  toAreaId = responseParser->getNumByName("to_area_id");
  }
  if (responseParser->hasName("to_city_name")) {
  toCityName = responseParser->getStrByName("to_city_name");
  }
  if (responseParser->hasName("to_county_name")) {
  toCountyName = responseParser->getStrByName("to_county_name");
  }
  if (responseParser->hasName("to_province_name")) {
  toProvinceName = responseParser->getStrByName("to_province_name");
  }

}

