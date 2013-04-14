#include <TaoApiCpp/domain/TravelItemsPropValue.h>
qlonglong TravelItemsPropValue::getCid() const {
  return cid;
}
void TravelItemsPropValue::setCid (qlonglong cid) {
  this->cid = cid;
}

QString TravelItemsPropValue::getName() const {
  return name;
}
void TravelItemsPropValue::setName (QString name) {
  this->name = name;
}

qlonglong TravelItemsPropValue::getPid() const {
  return pid;
}
void TravelItemsPropValue::setPid (qlonglong pid) {
  this->pid = pid;
}

QString TravelItemsPropValue::getPropName() const {
  return propName;
}
void TravelItemsPropValue::setPropName (QString propName) {
  this->propName = propName;
}

qlonglong TravelItemsPropValue::getSortOrder() const {
  return sortOrder;
}
void TravelItemsPropValue::setSortOrder (qlonglong sortOrder) {
  this->sortOrder = sortOrder;
}

qlonglong TravelItemsPropValue::getVid() const {
  return vid;
}
void TravelItemsPropValue::setVid (qlonglong vid) {
  this->vid = vid;
}


void TravelItemsPropValue::parseResponse() {
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("pid")) {
  pid = responseParser->getNumByName("pid");
  }
  if (responseParser->hasName("prop_name")) {
  propName = responseParser->getStrByName("prop_name");
  }
  if (responseParser->hasName("sort_order")) {
  sortOrder = responseParser->getNumByName("sort_order");
  }
  if (responseParser->hasName("vid")) {
  vid = responseParser->getNumByName("vid");
  }

}

