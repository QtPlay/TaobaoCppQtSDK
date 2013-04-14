#include <TaoApiCpp/request/LogisticsOrderConsignRequest.h>

QString LogisticsOrderConsignRequest::getApiMethodName() const {
  return "alibaba.logistics.order.consign";
}

QString LogisticsOrderConsignRequest::getCargoDescription() const {
  return cargoDescription;
}
void LogisticsOrderConsignRequest::setCargoDescription (QString cargoDescription) {
  this->cargoDescription = cargoDescription;
  appParams.insert("cargo_description", cargoDescription);
}

QString LogisticsOrderConsignRequest::getCargoName() const {
  return cargoName;
}
void LogisticsOrderConsignRequest::setCargoName (QString cargoName) {
  this->cargoName = cargoName;
  appParams.insert("cargo_name", cargoName);
}

qlonglong LogisticsOrderConsignRequest::getOrderId() const {
  return orderId;
}
void LogisticsOrderConsignRequest::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
  appParams.insert("order_id", QString::number(orderId));
}

QString LogisticsOrderConsignRequest::getPayType() const {
  return payType;
}
void LogisticsOrderConsignRequest::setPayType (QString payType) {
  this->payType = payType;
  appParams.insert("pay_type", payType);
}

QString LogisticsOrderConsignRequest::getReceiverAddress() const {
  return receiverAddress;
}
void LogisticsOrderConsignRequest::setReceiverAddress (QString receiverAddress) {
  this->receiverAddress = receiverAddress;
  appParams.insert("receiver_address", receiverAddress);
}

qlonglong LogisticsOrderConsignRequest::getReceiverAreaId() const {
  return receiverAreaId;
}
void LogisticsOrderConsignRequest::setReceiverAreaId (qlonglong receiverAreaId) {
  this->receiverAreaId = receiverAreaId;
  appParams.insert("receiver_area_id", QString::number(receiverAreaId));
}

QString LogisticsOrderConsignRequest::getReceiverCityName() const {
  return receiverCityName;
}
void LogisticsOrderConsignRequest::setReceiverCityName (QString receiverCityName) {
  this->receiverCityName = receiverCityName;
  appParams.insert("receiver_city_name", receiverCityName);
}

QString LogisticsOrderConsignRequest::getReceiverCorpName() const {
  return receiverCorpName;
}
void LogisticsOrderConsignRequest::setReceiverCorpName (QString receiverCorpName) {
  this->receiverCorpName = receiverCorpName;
  appParams.insert("receiver_corp_name", receiverCorpName);
}

QString LogisticsOrderConsignRequest::getReceiverCountyName() const {
  return receiverCountyName;
}
void LogisticsOrderConsignRequest::setReceiverCountyName (QString receiverCountyName) {
  this->receiverCountyName = receiverCountyName;
  appParams.insert("receiver_county_name", receiverCountyName);
}

QString LogisticsOrderConsignRequest::getReceiverMobile() const {
  return receiverMobile;
}
void LogisticsOrderConsignRequest::setReceiverMobile (QString receiverMobile) {
  this->receiverMobile = receiverMobile;
  appParams.insert("receiver_mobile", receiverMobile);
}

QString LogisticsOrderConsignRequest::getReceiverName() const {
  return receiverName;
}
void LogisticsOrderConsignRequest::setReceiverName (QString receiverName) {
  this->receiverName = receiverName;
  appParams.insert("receiver_name", receiverName);
}

QString LogisticsOrderConsignRequest::getReceiverPhoneAreaCode() const {
  return receiverPhoneAreaCode;
}
void LogisticsOrderConsignRequest::setReceiverPhoneAreaCode (QString receiverPhoneAreaCode) {
  this->receiverPhoneAreaCode = receiverPhoneAreaCode;
  appParams.insert("receiver_phone_area_code", receiverPhoneAreaCode);
}

QString LogisticsOrderConsignRequest::getReceiverPhoneTel() const {
  return receiverPhoneTel;
}
void LogisticsOrderConsignRequest::setReceiverPhoneTel (QString receiverPhoneTel) {
  this->receiverPhoneTel = receiverPhoneTel;
  appParams.insert("receiver_phone_tel", receiverPhoneTel);
}

QString LogisticsOrderConsignRequest::getReceiverPhoneTelExt() const {
  return receiverPhoneTelExt;
}
void LogisticsOrderConsignRequest::setReceiverPhoneTelExt (QString receiverPhoneTelExt) {
  this->receiverPhoneTelExt = receiverPhoneTelExt;
  appParams.insert("receiver_phone_tel_ext", receiverPhoneTelExt);
}

QString LogisticsOrderConsignRequest::getReceiverPostcode() const {
  return receiverPostcode;
}
void LogisticsOrderConsignRequest::setReceiverPostcode (QString receiverPostcode) {
  this->receiverPostcode = receiverPostcode;
  appParams.insert("receiver_postcode", receiverPostcode);
}

QString LogisticsOrderConsignRequest::getReceiverProvinceName() const {
  return receiverProvinceName;
}
void LogisticsOrderConsignRequest::setReceiverProvinceName (QString receiverProvinceName) {
  this->receiverProvinceName = receiverProvinceName;
  appParams.insert("receiver_province_name", receiverProvinceName);
}

QString LogisticsOrderConsignRequest::getReceiverWangwangNo() const {
  return receiverWangwangNo;
}
void LogisticsOrderConsignRequest::setReceiverWangwangNo (QString receiverWangwangNo) {
  this->receiverWangwangNo = receiverWangwangNo;
  appParams.insert("receiver_wangwang_no", receiverWangwangNo);
}

QString LogisticsOrderConsignRequest::getRefunderAddress() const {
  return refunderAddress;
}
void LogisticsOrderConsignRequest::setRefunderAddress (QString refunderAddress) {
  this->refunderAddress = refunderAddress;
  appParams.insert("refunder_address", refunderAddress);
}

qlonglong LogisticsOrderConsignRequest::getRefunderAreaId() const {
  return refunderAreaId;
}
void LogisticsOrderConsignRequest::setRefunderAreaId (qlonglong refunderAreaId) {
  this->refunderAreaId = refunderAreaId;
  appParams.insert("refunder_area_id", QString::number(refunderAreaId));
}

QString LogisticsOrderConsignRequest::getRefunderCityName() const {
  return refunderCityName;
}
void LogisticsOrderConsignRequest::setRefunderCityName (QString refunderCityName) {
  this->refunderCityName = refunderCityName;
  appParams.insert("refunder_city_name", refunderCityName);
}

QString LogisticsOrderConsignRequest::getRefunderCorpName() const {
  return refunderCorpName;
}
void LogisticsOrderConsignRequest::setRefunderCorpName (QString refunderCorpName) {
  this->refunderCorpName = refunderCorpName;
  appParams.insert("refunder_corp_name", refunderCorpName);
}

QString LogisticsOrderConsignRequest::getRefunderCountyName() const {
  return refunderCountyName;
}
void LogisticsOrderConsignRequest::setRefunderCountyName (QString refunderCountyName) {
  this->refunderCountyName = refunderCountyName;
  appParams.insert("refunder_county_name", refunderCountyName);
}

QString LogisticsOrderConsignRequest::getRefunderMobile() const {
  return refunderMobile;
}
void LogisticsOrderConsignRequest::setRefunderMobile (QString refunderMobile) {
  this->refunderMobile = refunderMobile;
  appParams.insert("refunder_mobile", refunderMobile);
}

QString LogisticsOrderConsignRequest::getRefunderName() const {
  return refunderName;
}
void LogisticsOrderConsignRequest::setRefunderName (QString refunderName) {
  this->refunderName = refunderName;
  appParams.insert("refunder_name", refunderName);
}

QString LogisticsOrderConsignRequest::getRefunderPhoneAreaCode() const {
  return refunderPhoneAreaCode;
}
void LogisticsOrderConsignRequest::setRefunderPhoneAreaCode (QString refunderPhoneAreaCode) {
  this->refunderPhoneAreaCode = refunderPhoneAreaCode;
  appParams.insert("refunder_phone_area_code", refunderPhoneAreaCode);
}

QString LogisticsOrderConsignRequest::getRefunderPhoneTel() const {
  return refunderPhoneTel;
}
void LogisticsOrderConsignRequest::setRefunderPhoneTel (QString refunderPhoneTel) {
  this->refunderPhoneTel = refunderPhoneTel;
  appParams.insert("refunder_phone_tel", refunderPhoneTel);
}

QString LogisticsOrderConsignRequest::getRefunderPhoneTelExt() const {
  return refunderPhoneTelExt;
}
void LogisticsOrderConsignRequest::setRefunderPhoneTelExt (QString refunderPhoneTelExt) {
  this->refunderPhoneTelExt = refunderPhoneTelExt;
  appParams.insert("refunder_phone_tel_ext", refunderPhoneTelExt);
}

QString LogisticsOrderConsignRequest::getRefunderPostcode() const {
  return refunderPostcode;
}
void LogisticsOrderConsignRequest::setRefunderPostcode (QString refunderPostcode) {
  this->refunderPostcode = refunderPostcode;
  appParams.insert("refunder_postcode", refunderPostcode);
}

QString LogisticsOrderConsignRequest::getRefunderProvinceName() const {
  return refunderProvinceName;
}
void LogisticsOrderConsignRequest::setRefunderProvinceName (QString refunderProvinceName) {
  this->refunderProvinceName = refunderProvinceName;
  appParams.insert("refunder_province_name", refunderProvinceName);
}

QString LogisticsOrderConsignRequest::getRefunderWangwangNo() const {
  return refunderWangwangNo;
}
void LogisticsOrderConsignRequest::setRefunderWangwangNo (QString refunderWangwangNo) {
  this->refunderWangwangNo = refunderWangwangNo;
  appParams.insert("refunder_wangwang_no", refunderWangwangNo);
}

QString LogisticsOrderConsignRequest::getRemark() const {
  return remark;
}
void LogisticsOrderConsignRequest::setRemark (QString remark) {
  this->remark = remark;
  appParams.insert("remark", remark);
}

QString LogisticsOrderConsignRequest::getRouteCode() const {
  return routeCode;
}
void LogisticsOrderConsignRequest::setRouteCode (QString routeCode) {
  this->routeCode = routeCode;
  appParams.insert("route_code", routeCode);
}

QString LogisticsOrderConsignRequest::getSenderAddress() const {
  return senderAddress;
}
void LogisticsOrderConsignRequest::setSenderAddress (QString senderAddress) {
  this->senderAddress = senderAddress;
  appParams.insert("sender_address", senderAddress);
}

qlonglong LogisticsOrderConsignRequest::getSenderAreaId() const {
  return senderAreaId;
}
void LogisticsOrderConsignRequest::setSenderAreaId (qlonglong senderAreaId) {
  this->senderAreaId = senderAreaId;
  appParams.insert("sender_area_id", QString::number(senderAreaId));
}

QString LogisticsOrderConsignRequest::getSenderCityName() const {
  return senderCityName;
}
void LogisticsOrderConsignRequest::setSenderCityName (QString senderCityName) {
  this->senderCityName = senderCityName;
  appParams.insert("sender_city_name", senderCityName);
}

QString LogisticsOrderConsignRequest::getSenderCorpName() const {
  return senderCorpName;
}
void LogisticsOrderConsignRequest::setSenderCorpName (QString senderCorpName) {
  this->senderCorpName = senderCorpName;
  appParams.insert("sender_corp_name", senderCorpName);
}

QString LogisticsOrderConsignRequest::getSenderCountyName() const {
  return senderCountyName;
}
void LogisticsOrderConsignRequest::setSenderCountyName (QString senderCountyName) {
  this->senderCountyName = senderCountyName;
  appParams.insert("sender_county_name", senderCountyName);
}

QString LogisticsOrderConsignRequest::getSenderMobile() const {
  return senderMobile;
}
void LogisticsOrderConsignRequest::setSenderMobile (QString senderMobile) {
  this->senderMobile = senderMobile;
  appParams.insert("sender_mobile", senderMobile);
}

QString LogisticsOrderConsignRequest::getSenderName() const {
  return senderName;
}
void LogisticsOrderConsignRequest::setSenderName (QString senderName) {
  this->senderName = senderName;
  appParams.insert("sender_name", senderName);
}

QString LogisticsOrderConsignRequest::getSenderPhoneAreaCode() const {
  return senderPhoneAreaCode;
}
void LogisticsOrderConsignRequest::setSenderPhoneAreaCode (QString senderPhoneAreaCode) {
  this->senderPhoneAreaCode = senderPhoneAreaCode;
  appParams.insert("sender_phone_area_code", senderPhoneAreaCode);
}

QString LogisticsOrderConsignRequest::getSenderPhoneTel() const {
  return senderPhoneTel;
}
void LogisticsOrderConsignRequest::setSenderPhoneTel (QString senderPhoneTel) {
  this->senderPhoneTel = senderPhoneTel;
  appParams.insert("sender_phone_tel", senderPhoneTel);
}

QString LogisticsOrderConsignRequest::getSenderPhoneTelExt() const {
  return senderPhoneTelExt;
}
void LogisticsOrderConsignRequest::setSenderPhoneTelExt (QString senderPhoneTelExt) {
  this->senderPhoneTelExt = senderPhoneTelExt;
  appParams.insert("sender_phone_tel_ext", senderPhoneTelExt);
}

QString LogisticsOrderConsignRequest::getSenderPostcode() const {
  return senderPostcode;
}
void LogisticsOrderConsignRequest::setSenderPostcode (QString senderPostcode) {
  this->senderPostcode = senderPostcode;
  appParams.insert("sender_postcode", senderPostcode);
}

QString LogisticsOrderConsignRequest::getSenderProvinceName() const {
  return senderProvinceName;
}
void LogisticsOrderConsignRequest::setSenderProvinceName (QString senderProvinceName) {
  this->senderProvinceName = senderProvinceName;
  appParams.insert("sender_province_name", senderProvinceName);
}

QString LogisticsOrderConsignRequest::getSenderWangwangNo() const {
  return senderWangwangNo;
}
void LogisticsOrderConsignRequest::setSenderWangwangNo (QString senderWangwangNo) {
  this->senderWangwangNo = senderWangwangNo;
  appParams.insert("sender_wangwang_no", senderWangwangNo);
}

QString LogisticsOrderConsignRequest::getSource() const {
  return source;
}
void LogisticsOrderConsignRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

qlonglong LogisticsOrderConsignRequest::getTotalNumber() const {
  return totalNumber;
}
void LogisticsOrderConsignRequest::setTotalNumber (qlonglong totalNumber) {
  this->totalNumber = totalNumber;
  appParams.insert("total_number", QString::number(totalNumber));
}

QString LogisticsOrderConsignRequest::getTotalVolume() const {
  return totalVolume;
}
void LogisticsOrderConsignRequest::setTotalVolume (QString totalVolume) {
  this->totalVolume = totalVolume;
  appParams.insert("total_volume", totalVolume);
}

QString LogisticsOrderConsignRequest::getTotalWeight() const {
  return totalWeight;
}
void LogisticsOrderConsignRequest::setTotalWeight (QString totalWeight) {
  this->totalWeight = totalWeight;
  appParams.insert("total_weight", totalWeight);
}

QString LogisticsOrderConsignRequest::getVasList() const {
  return vasList;
}
void LogisticsOrderConsignRequest::setVasList (QString vasList) {
  this->vasList = vasList;
  appParams.insert("vas_list", vasList);
}



LogisticsOrderConsignResponse *LogisticsOrderConsignRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOrderConsignResponse *tmpResponse = new LogisticsOrderConsignResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
