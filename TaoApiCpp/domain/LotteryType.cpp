#include <TaoApiCpp/domain/LotteryType.h>
qlonglong LotteryType::getId() const {
  return id;
}
void LotteryType::setId (qlonglong id) {
  this->id = id;
}

QString LotteryType::getName() const {
  return name;
}
void LotteryType::setName (QString name) {
  this->name = name;
}


void LotteryType::parseResponse() {
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }

}

