#include <TaoApiCpp/domain/Brand.h>
QString Brand::getName() const {
  return name;
}
void Brand::setName (QString name) {
  this->name = name;
}

qlonglong Brand::getPid() const {
  return pid;
}
void Brand::setPid (qlonglong pid) {
  this->pid = pid;
}

QString Brand::getPropName() const {
  return propName;
}
void Brand::setPropName (QString propName) {
  this->propName = propName;
}

qlonglong Brand::getVid() const {
  return vid;
}
void Brand::setVid (qlonglong vid) {
  this->vid = vid;
}


void Brand::parseResponse() {
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("pid")) {
  pid = responseParser->getNumByName("pid");
  }
  if (responseParser->hasName("prop_name")) {
  propName = responseParser->getStrByName("prop_name");
  }
  if (responseParser->hasName("vid")) {
  vid = responseParser->getNumByName("vid");
  }

}

