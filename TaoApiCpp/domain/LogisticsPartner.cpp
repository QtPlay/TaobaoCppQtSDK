#include <TaoApiCpp/domain/LogisticsPartner.h>
CarriageDetail LogisticsPartner::getCarriage() const {
  return carriage;
}
void LogisticsPartner::setCarriage (CarriageDetail carriage) {
  this->carriage = carriage;
}

QString LogisticsPartner::getCoverRemark() const {
  return coverRemark;
}
void LogisticsPartner::setCoverRemark (QString coverRemark) {
  this->coverRemark = coverRemark;
}

PartnerDetail LogisticsPartner::getPartner() const {
  return partner;
}
void LogisticsPartner::setPartner (PartnerDetail partner) {
  this->partner = partner;
}

QString LogisticsPartner::getUncoverRemark() const {
  return uncoverRemark;
}
void LogisticsPartner::setUncoverRemark (QString uncoverRemark) {
  this->uncoverRemark = uncoverRemark;
}


void LogisticsPartner::parseResponse() {
  if (responseParser->hasName("carriage")) {
  carriage.setParser(responseParser->getObjectParser("carriage"));
  carriage.parseResponse();
  }
  if (responseParser->hasName("cover_remark")) {
  coverRemark = responseParser->getStrByName("cover_remark");
  }
  if (responseParser->hasName("partner")) {
  partner.setParser(responseParser->getObjectParser("partner"));
  partner.parseResponse();
  }
  if (responseParser->hasName("uncover_remark")) {
  uncoverRemark = responseParser->getStrByName("uncover_remark");
  }

}

