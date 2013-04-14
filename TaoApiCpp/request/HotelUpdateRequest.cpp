#include <TaoApiCpp/request/HotelUpdateRequest.h>

QString HotelUpdateRequest::getApiMethodName() const {
  return "taobao.hotel.update";
}

QString HotelUpdateRequest::getAddress() const {
  return address;
}
void HotelUpdateRequest::setAddress (QString address) {
  this->address = address;
  appParams.insert("address", address);
}

qlonglong HotelUpdateRequest::getCity() const {
  return city;
}
void HotelUpdateRequest::setCity (qlonglong city) {
  this->city = city;
  appParams.insert("city", QString::number(city));
}

QString HotelUpdateRequest::getCountry() const {
  return country;
}
void HotelUpdateRequest::setCountry (QString country) {
  this->country = country;
  appParams.insert("country", country);
}

QString HotelUpdateRequest::getDecorateTime() const {
  return decorateTime;
}
void HotelUpdateRequest::setDecorateTime (QString decorateTime) {
  this->decorateTime = decorateTime;
  appParams.insert("decorate_time", decorateTime);
}

QString HotelUpdateRequest::getDesc() const {
  return desc;
}
void HotelUpdateRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

qlonglong HotelUpdateRequest::getDistrict() const {
  return district;
}
void HotelUpdateRequest::setDistrict (qlonglong district) {
  this->district = district;
  appParams.insert("district", QString::number(district));
}

bool HotelUpdateRequest::getDomestic() const {
  return domestic;
}
void HotelUpdateRequest::setDomestic (bool domestic) {
  this->domestic = domestic;
  appParams.insert("domestic", domestic? "true": "false");
}

qlonglong HotelUpdateRequest::getHid() const {
  return hid;
}
void HotelUpdateRequest::setHid (qlonglong hid) {
  this->hid = hid;
  appParams.insert("hid", QString::number(hid));
}

QString HotelUpdateRequest::getLevel() const {
  return level;
}
void HotelUpdateRequest::setLevel (QString level) {
  this->level = level;
  appParams.insert("level", level);
}

QString HotelUpdateRequest::getName() const {
  return name;
}
void HotelUpdateRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString HotelUpdateRequest::getOpeningTime() const {
  return openingTime;
}
void HotelUpdateRequest::setOpeningTime (QString openingTime) {
  this->openingTime = openingTime;
  appParams.insert("opening_time", openingTime);
}

QString HotelUpdateRequest::getOrientation() const {
  return orientation;
}
void HotelUpdateRequest::setOrientation (QString orientation) {
  this->orientation = orientation;
  appParams.insert("orientation", orientation);
}

FileItem HotelUpdateRequest::getPic() const {
  return pic;
}
void HotelUpdateRequest::setPic (FileItem pic) {
  this->pic = pic;
  fileParams.insert("pic", pic);
}

qlonglong HotelUpdateRequest::getProvince() const {
  return province;
}
void HotelUpdateRequest::setProvince (qlonglong province) {
  this->province = province;
  appParams.insert("province", QString::number(province));
}

qlonglong HotelUpdateRequest::getRooms() const {
  return rooms;
}
void HotelUpdateRequest::setRooms (qlonglong rooms) {
  this->rooms = rooms;
  appParams.insert("rooms", QString::number(rooms));
}

QString HotelUpdateRequest::getService() const {
  return service;
}
void HotelUpdateRequest::setService (QString service) {
  this->service = service;
  appParams.insert("service", service);
}

qlonglong HotelUpdateRequest::getStoreys() const {
  return storeys;
}
void HotelUpdateRequest::setStoreys (qlonglong storeys) {
  this->storeys = storeys;
  appParams.insert("storeys", QString::number(storeys));
}

QString HotelUpdateRequest::getTel() const {
  return tel;
}
void HotelUpdateRequest::setTel (QString tel) {
  this->tel = tel;
  appParams.insert("tel", tel);
}



HotelUpdateResponse *HotelUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelUpdateResponse *tmpResponse = new HotelUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
