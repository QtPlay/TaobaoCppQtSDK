#include <TaoApiCpp/domain/WangwangInfo.h>
QString WangwangInfo::getSite() const {
  return site;
}
void WangwangInfo::setSite (QString site) {
  this->site = site;
}

QString WangwangInfo::getWangwangId() const {
  return wangwangId;
}
void WangwangInfo::setWangwangId (QString wangwangId) {
  this->wangwangId = wangwangId;
}


void WangwangInfo::parseResponse() {
  if (responseParser->hasName("site")) {
  site = responseParser->getStrByName("site");
  }
  if (responseParser->hasName("wangwang_id")) {
  wangwangId = responseParser->getStrByName("wangwang_id");
  }

}

