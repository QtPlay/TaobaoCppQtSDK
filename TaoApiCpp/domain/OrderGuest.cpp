#include <TaoApiCpp/domain/OrderGuest.h>
QString OrderGuest::getName() const {
  return name;
}
void OrderGuest::setName (QString name) {
  this->name = name;
}

qlonglong OrderGuest::getOid() const {
  return oid;
}
void OrderGuest::setOid (qlonglong oid) {
  this->oid = oid;
}

qlonglong OrderGuest::getPersonPos() const {
  return personPos;
}
void OrderGuest::setPersonPos (qlonglong personPos) {
  this->personPos = personPos;
}

qlonglong OrderGuest::getRoomPos() const {
  return roomPos;
}
void OrderGuest::setRoomPos (qlonglong roomPos) {
  this->roomPos = roomPos;
}

QString OrderGuest::getTel() const {
  return tel;
}
void OrderGuest::setTel (QString tel) {
  this->tel = tel;
}


void OrderGuest::parseResponse() {
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("oid")) {
  oid = responseParser->getNumByName("oid");
  }
  if (responseParser->hasName("person_pos")) {
  personPos = responseParser->getNumByName("person_pos");
  }
  if (responseParser->hasName("room_pos")) {
  roomPos = responseParser->getNumByName("room_pos");
  }
  if (responseParser->hasName("tel")) {
  tel = responseParser->getStrByName("tel");
  }

}

