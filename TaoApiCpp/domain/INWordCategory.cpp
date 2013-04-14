#include <TaoApiCpp/domain/INWordCategory.h>
qlonglong INWordCategory::getAvgPrice() const {
  return avgPrice;
}
void INWordCategory::setAvgPrice (qlonglong avgPrice) {
  this->avgPrice = avgPrice;
}

qlonglong INWordCategory::getCategoryId() const {
  return categoryId;
}
void INWordCategory::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
}

qlonglong INWordCategory::getClick() const {
  return click;
}
void INWordCategory::setClick (qlonglong click) {
  this->click = click;
}

qlonglong INWordCategory::getCompetition() const {
  return competition;
}
void INWordCategory::setCompetition (qlonglong competition) {
  this->competition = competition;
}

QString INWordCategory::getCtr() const {
  return ctr;
}
void INWordCategory::setCtr (QString ctr) {
  this->ctr = ctr;
}

QDateTime INWordCategory::getDate() const {
  return date;
}
void INWordCategory::setDate (QDateTime date) {
  this->date = date;
}

qlonglong INWordCategory::getPv() const {
  return pv;
}
void INWordCategory::setPv (qlonglong pv) {
  this->pv = pv;
}

QString INWordCategory::getWord() const {
  return word;
}
void INWordCategory::setWord (QString word) {
  this->word = word;
}


void INWordCategory::parseResponse() {
  if (responseParser->hasName("avg_price")) {
  avgPrice = responseParser->getNumByName("avg_price");
  }
  if (responseParser->hasName("category_id")) {
  categoryId = responseParser->getNumByName("category_id");
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
  if (responseParser->hasName("word")) {
  word = responseParser->getStrByName("word");
  }

}

