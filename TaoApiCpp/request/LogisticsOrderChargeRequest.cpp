#include <TaoApiCpp/request/LogisticsOrderChargeRequest.h>

QString LogisticsOrderChargeRequest::getApiMethodName() const {
  return "alibaba.logistics.order.charge";
}

QString LogisticsOrderChargeRequest::getCargoDescription() const {
  return cargoDescription;
}
void LogisticsOrderChargeRequest::setCargoDescription (QString cargoDescription) {
  this->cargoDescription = cargoDescription;
  appParams.insert("cargo_description", cargoDescription);
}

QString LogisticsOrderChargeRequest::getCargoName() const {
  return cargoName;
}
void LogisticsOrderChargeRequest::setCargoName (QString cargoName) {
  this->cargoName = cargoName;
  appParams.insert("cargo_name", cargoName);
}

QString LogisticsOrderChargeRequest::getPayType() const {
  return payType;
}
void LogisticsOrderChargeRequest::setPayType (QString payType) {
  this->payType = payType;
  appParams.insert("pay_type", payType);
}

QString LogisticsOrderChargeRequest::getRouteCode() const {
  return routeCode;
}
void LogisticsOrderChargeRequest::setRouteCode (QString routeCode) {
  this->routeCode = routeCode;
  appParams.insert("route_code", routeCode);
}

qlonglong LogisticsOrderChargeRequest::getTotalNumber() const {
  return totalNumber;
}
void LogisticsOrderChargeRequest::setTotalNumber (qlonglong totalNumber) {
  this->totalNumber = totalNumber;
  appParams.insert("total_number", QString::number(totalNumber));
}

QString LogisticsOrderChargeRequest::getTotalVolume() const {
  return totalVolume;
}
void LogisticsOrderChargeRequest::setTotalVolume (QString totalVolume) {
  this->totalVolume = totalVolume;
  appParams.insert("total_volume", totalVolume);
}

QString LogisticsOrderChargeRequest::getTotalWeight() const {
  return totalWeight;
}
void LogisticsOrderChargeRequest::setTotalWeight (QString totalWeight) {
  this->totalWeight = totalWeight;
  appParams.insert("total_weight", totalWeight);
}

QString LogisticsOrderChargeRequest::getVasList() const {
  return vasList;
}
void LogisticsOrderChargeRequest::setVasList (QString vasList) {
  this->vasList = vasList;
  appParams.insert("vas_list", vasList);
}



LogisticsOrderChargeResponse *LogisticsOrderChargeRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOrderChargeResponse *tmpResponse = new LogisticsOrderChargeResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
