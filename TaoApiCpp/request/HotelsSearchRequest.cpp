#include <TaoApiCpp/request/HotelsSearchRequest.h>

QString HotelsSearchRequest::getApiMethodName() const {
  return "taobao.hotels.search";
}

qlonglong HotelsSearchRequest::getCity() const {
  return city;
}
void HotelsSearchRequest::setCity (qlonglong city) {
  this->city = city;
  appParams.insert("city", QString::number(city));
}

QString HotelsSearchRequest::getCountry() const {
  return country;
}
void HotelsSearchRequest::setCountry (QString country) {
  this->country = country;
  appParams.insert("country", country);
}

qlonglong HotelsSearchRequest::getDistrict() const {
  return district;
}
void HotelsSearchRequest::setDistrict (qlonglong district) {
  this->district = district;
  appParams.insert("district", QString::number(district));
}

bool HotelsSearchRequest::getDomestic() const {
  return domestic;
}
void HotelsSearchRequest::setDomestic (bool domestic) {
  this->domestic = domestic;
  appParams.insert("domestic", domestic? "true": "false");
}

QString HotelsSearchRequest::getName() const {
  return name;
}
void HotelsSearchRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

qlonglong HotelsSearchRequest::getPageNo() const {
  return pageNo;
}
void HotelsSearchRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong HotelsSearchRequest::getProvince() const {
  return province;
}
void HotelsSearchRequest::setProvince (qlonglong province) {
  this->province = province;
  appParams.insert("province", QString::number(province));
}



HotelsSearchResponse *HotelsSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelsSearchResponse *tmpResponse = new HotelsSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
