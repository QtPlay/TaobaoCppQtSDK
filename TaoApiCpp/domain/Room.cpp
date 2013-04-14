#include <TaoApiCpp/domain/Room.h>
QString Room::getArea() const {
  return area;
}
void Room::setArea (QString area) {
  this->area = area;
}

QString Room::getBbn() const {
  return bbn;
}
void Room::setBbn (QString bbn) {
  this->bbn = bbn;
}

QString Room::getBedType() const {
  return bedType;
}
void Room::setBedType (QString bedType) {
  this->bedType = bedType;
}

QString Room::getBreakfast() const {
  return breakfast;
}
void Room::setBreakfast (QString breakfast) {
  this->breakfast = breakfast;
}

QDateTime Room::getCreated() const {
  return created;
}
void Room::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong Room::getDeposit() const {
  return deposit;
}
void Room::setDeposit (qlonglong deposit) {
  this->deposit = deposit;
}

QString Room::getDesc() const {
  return desc;
}
void Room::setDesc (QString desc) {
  this->desc = desc;
}

qlonglong Room::getFee() const {
  return fee;
}
void Room::setFee (qlonglong fee) {
  this->fee = fee;
}

qlonglong Room::getGid() const {
  return gid;
}
void Room::setGid (qlonglong gid) {
  this->gid = gid;
}

QString Room::getGuide() const {
  return guide;
}
void Room::setGuide (QString guide) {
  this->guide = guide;
}

qlonglong Room::getHid() const {
  return hid;
}
void Room::setHid (qlonglong hid) {
  this->hid = hid;
}

Hotel Room::getHotel() const {
  return hotel;
}
void Room::setHotel (Hotel hotel) {
  this->hotel = hotel;
}

qlonglong Room::getIid() const {
  return iid;
}
void Room::setIid (qlonglong iid) {
  this->iid = iid;
}

QDateTime Room::getModified() const {
  return modified;
}
void Room::setModified (QDateTime modified) {
  this->modified = modified;
}

QString Room::getMultiRoomQuotas() const {
  return multiRoomQuotas;
}
void Room::setMultiRoomQuotas (QString multiRoomQuotas) {
  this->multiRoomQuotas = multiRoomQuotas;
}

QString Room::getPaymentType() const {
  return paymentType;
}
void Room::setPaymentType (QString paymentType) {
  this->paymentType = paymentType;
}

QString Room::getPicUrl() const {
  return picUrl;
}
void Room::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

QString Room::getPriceType() const {
  return priceType;
}
void Room::setPriceType (QString priceType) {
  this->priceType = priceType;
}

qlonglong Room::getRid() const {
  return rid;
}
void Room::setRid (qlonglong rid) {
  this->rid = rid;
}

QString Room::getRoomQuotas() const {
  return roomQuotas;
}
void Room::setRoomQuotas (QString roomQuotas) {
  this->roomQuotas = roomQuotas;
}

RoomType Room::getRoomType() const {
  return roomType;
}
void Room::setRoomType (RoomType roomType) {
  this->roomType = roomType;
}

QString Room::getService() const {
  return service;
}
void Room::setService (QString service) {
  this->service = service;
}

QString Room::getSize() const {
  return size;
}
void Room::setSize (QString size) {
  this->size = size;
}

qlonglong Room::getStatus() const {
  return status;
}
void Room::setStatus (qlonglong status) {
  this->status = status;
}

QString Room::getStorey() const {
  return storey;
}
void Room::setStorey (QString storey) {
  this->storey = storey;
}

QString Room::getTitle() const {
  return title;
}
void Room::setTitle (QString title) {
  this->title = title;
}


void Room::parseResponse() {
  if (responseParser->hasName("area")) {
  area = responseParser->getStrByName("area");
  }
  if (responseParser->hasName("bbn")) {
  bbn = responseParser->getStrByName("bbn");
  }
  if (responseParser->hasName("bed_type")) {
  bedType = responseParser->getStrByName("bed_type");
  }
  if (responseParser->hasName("breakfast")) {
  breakfast = responseParser->getStrByName("breakfast");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("deposit")) {
  deposit = responseParser->getNumByName("deposit");
  }
  if (responseParser->hasName("desc")) {
  desc = responseParser->getStrByName("desc");
  }
  if (responseParser->hasName("fee")) {
  fee = responseParser->getNumByName("fee");
  }
  if (responseParser->hasName("gid")) {
  gid = responseParser->getNumByName("gid");
  }
  if (responseParser->hasName("guide")) {
  guide = responseParser->getStrByName("guide");
  }
  if (responseParser->hasName("hid")) {
  hid = responseParser->getNumByName("hid");
  }
  if (responseParser->hasName("hotel")) {
  hotel.setParser(responseParser->getObjectParser("hotel"));
  hotel.parseResponse();
  }
  if (responseParser->hasName("iid")) {
  iid = responseParser->getNumByName("iid");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("multi_room_quotas")) {
  multiRoomQuotas = responseParser->getStrByName("multi_room_quotas");
  }
  if (responseParser->hasName("payment_type")) {
  paymentType = responseParser->getStrByName("payment_type");
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("price_type")) {
  priceType = responseParser->getStrByName("price_type");
  }
  if (responseParser->hasName("rid")) {
  rid = responseParser->getNumByName("rid");
  }
  if (responseParser->hasName("room_quotas")) {
  roomQuotas = responseParser->getStrByName("room_quotas");
  }
  if (responseParser->hasName("room_type")) {
  roomType.setParser(responseParser->getObjectParser("room_type"));
  roomType.parseResponse();
  }
  if (responseParser->hasName("service")) {
  service = responseParser->getStrByName("service");
  }
  if (responseParser->hasName("size")) {
  size = responseParser->getStrByName("size");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }
  if (responseParser->hasName("storey")) {
  storey = responseParser->getStrByName("storey");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }

}

