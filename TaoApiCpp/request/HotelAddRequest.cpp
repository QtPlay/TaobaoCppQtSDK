#include <TaoApiCpp/request/HotelAddRequest.h>

QString HotelAddRequest::getApiMethodName() const {
  return "taobao.hotel.add";
}

QString HotelAddRequest::getAddress() const {
  return address;
}
void HotelAddRequest::setAddress (QString address) {
  this->address = address;
  appParams.insert("address", address);
}

qlonglong HotelAddRequest::getCity() const {
  return city;
}
void HotelAddRequest::setCity (qlonglong city) {
  this->city = city;
  appParams.insert("city", QString::number(city));
}

QString HotelAddRequest::getCountry() const {
  return country;
}
void HotelAddRequest::setCountry (QString country) {
  this->country = country;
  appParams.insert("country", country);
}

QString HotelAddRequest::getDecorateTime() const {
  return decorateTime;
}
void HotelAddRequest::setDecorateTime (QString decorateTime) {
  this->decorateTime = decorateTime;
  appParams.insert("decorate_time", decorateTime);
}

QString HotelAddRequest::getDesc() const {
  return desc;
}
void HotelAddRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

qlonglong HotelAddRequest::getDistrict() const {
  return district;
}
void HotelAddRequest::setDistrict (qlonglong district) {
  this->district = district;
  appParams.insert("district", QString::number(district));
}

bool HotelAddRequest::getDomestic() const {
  return domestic;
}
void HotelAddRequest::setDomestic (bool domestic) {
  this->domestic = domestic;
  appParams.insert("domestic", domestic? "true": "false");
}

QString HotelAddRequest::getLevel() const {
  return level;
}
void HotelAddRequest::setLevel (QString level) {
  this->level = level;
  appParams.insert("level", level);
}

QString HotelAddRequest::getName() const {
  return name;
}
void HotelAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString HotelAddRequest::getOpeningTime() const {
  return openingTime;
}
void HotelAddRequest::setOpeningTime (QString openingTime) {
  this->openingTime = openingTime;
  appParams.insert("opening_time", openingTime);
}

QString HotelAddRequest::getOrientation() const {
  return orientation;
}
void HotelAddRequest::setOrientation (QString orientation) {
  this->orientation = orientation;
  appParams.insert("orientation", orientation);
}

FileItem HotelAddRequest::getPic() const {
  return pic;
}
void HotelAddRequest::setPic (FileItem pic) {
  this->pic = pic;
  fileParams.insert("pic", pic);
}

qlonglong HotelAddRequest::getProvince() const {
  return province;
}
void HotelAddRequest::setProvince (qlonglong province) {
  this->province = province;
  appParams.insert("province", QString::number(province));
}

qlonglong HotelAddRequest::getRooms() const {
  return rooms;
}
void HotelAddRequest::setRooms (qlonglong rooms) {
  this->rooms = rooms;
  appParams.insert("rooms", QString::number(rooms));
}

QString HotelAddRequest::getService() const {
  return service;
}
void HotelAddRequest::setService (QString service) {
  this->service = service;
  appParams.insert("service", service);
}

QString HotelAddRequest::getSiteParam() const {
  return siteParam;
}
void HotelAddRequest::setSiteParam (QString siteParam) {
  this->siteParam = siteParam;
  appParams.insert("site_param", siteParam);
}

qlonglong HotelAddRequest::getStoreys() const {
  return storeys;
}
void HotelAddRequest::setStoreys (qlonglong storeys) {
  this->storeys = storeys;
  appParams.insert("storeys", QString::number(storeys));
}

QString HotelAddRequest::getTel() const {
  return tel;
}
void HotelAddRequest::setTel (QString tel) {
  this->tel = tel;
  appParams.insert("tel", tel);
}



HotelAddResponse *HotelAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelAddResponse *tmpResponse = new HotelAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
