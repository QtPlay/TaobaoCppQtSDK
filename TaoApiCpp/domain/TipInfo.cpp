#include <TaoApiCpp/domain/TipInfo.h>
QString TipInfo::getInfo() const {
  return info;
}
void TipInfo::setInfo (QString info) {
  this->info = info;
}

QString TipInfo::getScItemId() const {
  return scItemId;
}
void TipInfo::setScItemId (QString scItemId) {
  this->scItemId = scItemId;
}


void TipInfo::parseResponse() {
  if (responseParser->hasName("info")) {
  info = responseParser->getStrByName("info");
  }
  if (responseParser->hasName("sc_item_id")) {
  scItemId = responseParser->getStrByName("sc_item_id");
  }

}

