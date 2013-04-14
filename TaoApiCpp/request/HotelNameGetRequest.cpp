#include <TaoApiCpp/request/HotelNameGetRequest.h>

QString HotelNameGetRequest::getApiMethodName() const {
  return "taobao.hotel.name.get";
}

qlonglong HotelNameGetRequest::getCity() const {
  return city;
}
void HotelNameGetRequest::setCity (qlonglong city) {
  this->city = city;
  appParams.insert("city", QString::number(city));
}

QString HotelNameGetRequest::getCountry() const {
  return country;
}
void HotelNameGetRequest::setCountry (QString country) {
  this->country = country;
  appParams.insert("country", country);
}

qlonglong HotelNameGetRequest::getDistrict() const {
  return district;
}
void HotelNameGetRequest::setDistrict (qlonglong district) {
  this->district = district;
  appParams.insert("district", QString::number(district));
}

bool HotelNameGetRequest::getDomestic() const {
  return domestic;
}
void HotelNameGetRequest::setDomestic (bool domestic) {
  this->domestic = domestic;
  appParams.insert("domestic", domestic? "true": "false");
}

QString HotelNameGetRequest::getName() const {
  return name;
}
void HotelNameGetRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

qlonglong HotelNameGetRequest::getProvince() const {
  return province;
}
void HotelNameGetRequest::setProvince (qlonglong province) {
  this->province = province;
  appParams.insert("province", QString::number(province));
}



HotelNameGetResponse *HotelNameGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelNameGetResponse *tmpResponse = new HotelNameGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
