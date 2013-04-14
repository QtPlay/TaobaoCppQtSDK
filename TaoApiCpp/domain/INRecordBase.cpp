#include <TaoApiCpp/domain/INRecordBase.h>
qlonglong INRecordBase::getAvgPrice() const {
  return avgPrice;
}
void INRecordBase::setAvgPrice (qlonglong avgPrice) {
  this->avgPrice = avgPrice;
}

qlonglong INRecordBase::getClick() const {
  return click;
}
void INRecordBase::setClick (qlonglong click) {
  this->click = click;
}

qlonglong INRecordBase::getCompetition() const {
  return competition;
}
void INRecordBase::setCompetition (qlonglong competition) {
  this->competition = competition;
}

QString INRecordBase::getCtr() const {
  return ctr;
}
void INRecordBase::setCtr (QString ctr) {
  this->ctr = ctr;
}

QDateTime INRecordBase::getDate() const {
  return date;
}
void INRecordBase::setDate (QDateTime date) {
  this->date = date;
}

qlonglong INRecordBase::getPv() const {
  return pv;
}
void INRecordBase::setPv (qlonglong pv) {
  this->pv = pv;
}


void INRecordBase::parseResponse() {
  if (responseParser->hasName("avg_price")) {
  avgPrice = responseParser->getNumByName("avg_price");
  }
  if (responseParser->hasName("click")) {
  click = responseParser->getNumByName("click");
  }
  if (responseParser->hasName("competition")) {
  competition = responseParser->getNumByName("competition");
  }
  if (responseParser->hasName("ctr")) {
  ctr = responseParser->getStrByName("ctr");
  }
  if (responseParser->hasName("date")) {
  date = responseParser->getDateByName("date");
  }
  if (responseParser->hasName("pv")) {
  pv = responseParser->getNumByName("pv");
  }

}

