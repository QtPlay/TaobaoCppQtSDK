#include <TaoApiCpp/domain/Hotel.h>
QString Hotel::getAddress() const {
  return address;
}
void Hotel::setAddress (QString address) {
  this->address = address;
}

QString Hotel::getAliasName() const {
  return aliasName;
}
void Hotel::setAliasName (QString aliasName) {
  this->aliasName = aliasName;
}

QString Hotel::getAuditDenyReason() const {
  return auditDenyReason;
}
void Hotel::setAuditDenyReason (QString auditDenyReason) {
  this->auditDenyReason = auditDenyReason;
}

qlonglong Hotel::getCity() const {
  return city;
}
void Hotel::setCity (qlonglong city) {
  this->city = city;
}

QString Hotel::getCityStr() const {
  return cityStr;
}
void Hotel::setCityStr (QString cityStr) {
  this->cityStr = cityStr;
}

QString Hotel::getCountry() const {
  return country;
}
void Hotel::setCountry (QString country) {
  this->country = country;
}

QString Hotel::getCountryStr() const {
  return countryStr;
}
void Hotel::setCountryStr (QString countryStr) {
  this->countryStr = countryStr;
}

QDateTime Hotel::getCreated() const {
  return created;
}
void Hotel::setCreated (QDateTime created) {
  this->created = created;
}

QString Hotel::getDecorateTime() const {
  return decorateTime;
}
void Hotel::setDecorateTime (QString decorateTime) {
  this->decorateTime = decorateTime;
}

QString Hotel::getDesc() const {
  return desc;
}
void Hotel::setDesc (QString desc) {
  this->desc = desc;
}

qlonglong Hotel::getDistrict() const {
  return district;
}
void Hotel::setDistrict (qlonglong district) {
  this->district = district;
}

QString Hotel::getDistrictStr() const {
  return districtStr;
}
void Hotel::setDistrictStr (QString districtStr) {
  this->districtStr = districtStr;
}

qlonglong Hotel::getHid() const {
  return hid;
}
void Hotel::setHid (qlonglong hid) {
  this->hid = hid;
}

QString Hotel::getLevel() const {
  return level;
}
void Hotel::setLevel (QString level) {
  this->level = level;
}

QDateTime Hotel::getModified() const {
  return modified;
}
void Hotel::setModified (QDateTime modified) {
  this->modified = modified;
}

QString Hotel::getName() const {
  return name;
}
void Hotel::setName (QString name) {
  this->name = name;
}

QString Hotel::getOpeningTime() const {
  return openingTime;
}
void Hotel::setOpeningTime (QString openingTime) {
  this->openingTime = openingTime;
}

QString Hotel::getOrientation() const {
  return orientation;
}
void Hotel::setOrientation (QString orientation) {
  this->orientation = orientation;
}

QString Hotel::getPicUrl() const {
  return picUrl;
}
void Hotel::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

qlonglong Hotel::getProvince() const {
  return province;
}
void Hotel::setProvince (qlonglong province) {
  this->province = province;
}

QString Hotel::getProvinceStr() const {
  return provinceStr;
}
void Hotel::setProvinceStr (QString provinceStr) {
  this->provinceStr = provinceStr;
}

QList<RoomType> Hotel::getRoomTypes() const {
  return roomTypes;
}
void Hotel::setRoomTypes (QList<RoomType> roomTypes) {
  this->roomTypes = roomTypes;
}

qlonglong Hotel::getRooms() const {
  return rooms;
}
void Hotel::setRooms (qlonglong rooms) {
  this->rooms = rooms;
}

QString Hotel::getService() const {
  return service;
}
void Hotel::setService (QString service) {
  this->service = service;
}

qlonglong Hotel::getStatus() const {
  return status;
}
void Hotel::setStatus (qlonglong status) {
  this->status = status;
}

qlonglong Hotel::getStoreys() const {
  return storeys;
}
void Hotel::setStoreys (qlonglong storeys) {
  this->storeys = storeys;
}

QString Hotel::getTel() const {
  return tel;
}
void Hotel::setTel (QString tel) {
  this->tel = tel;
}


void Hotel::parseResponse() {
  if (responseParser->hasName("address")) {
  address = responseParser->getStrByName("address");
  }
  if (responseParser->hasName("alias_name")) {
  aliasName = responseParser->getStrByName("alias_name");
  }
  if (responseParser->hasName("audit_deny_reason")) {
  auditDenyReason = responseParser->getStrByName("audit_deny_reason");
  }
  if (responseParser->hasName("city")) {
  city = responseParser->getNumByName("city");
  }
  if (responseParser->hasName("city_str")) {
  cityStr = responseParser->getStrByName("city_str");
  }
  if (responseParser->hasName("country")) {
  country = responseParser->getStrByName("country");
  }
  if (responseParser->hasName("country_str")) {
  countryStr = responseParser->getStrByName("country_str");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("decorate_time")) {
  decorateTime = responseParser->getStrByName("decorate_time");
  }
  if (responseParser->hasName("desc")) {
  desc = responseParser->getStrByName("desc");
  }
  if (responseParser->hasName("district")) {
  district = responseParser->getNumByName("district");
  }
  if (responseParser->hasName("district_str")) {
  districtStr = responseParser->getStrByName("district_str");
  }
  if (responseParser->hasName("hid")) {
  hid = responseParser->getNumByName("hid");
  }
  if (responseParser->hasName("level")) {
  level = responseParser->getStrByName("level");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("opening_time")) {
  openingTime = responseParser->getStrByName("opening_time");
  }
  if (responseParser->hasName("orientation")) {
  orientation = responseParser->getStrByName("orientation");
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("province")) {
  province = responseParser->getNumByName("province");
  }
  if (responseParser->hasName("province_str")) {
  provinceStr = responseParser->getStrByName("province_str");
  }
  if (responseParser->hasName("room_types")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("room_types");
  Parser *parser;
  foreach (parser, listParser) {
    RoomType tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    roomTypes.append(tmp);
  }
  }
  if (responseParser->hasName("rooms")) {
  rooms = responseParser->getNumByName("rooms");
  }
  if (responseParser->hasName("service")) {
  service = responseParser->getStrByName("service");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }
  if (responseParser->hasName("storeys")) {
  storeys = responseParser->getNumByName("storeys");
  }
  if (responseParser->hasName("tel")) {
  tel = responseParser->getStrByName("tel");
  }

}

