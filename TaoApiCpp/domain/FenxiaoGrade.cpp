#include <TaoApiCpp/domain/FenxiaoGrade.h>
QDateTime FenxiaoGrade::getCreated() const {
  return created;
}
void FenxiaoGrade::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong FenxiaoGrade::getGradeId() const {
  return gradeId;
}
void FenxiaoGrade::setGradeId (qlonglong gradeId) {
  this->gradeId = gradeId;
}

QDateTime FenxiaoGrade::getModified() const {
  return modified;
}
void FenxiaoGrade::setModified (QDateTime modified) {
  this->modified = modified;
}

QString FenxiaoGrade::getName() const {
  return name;
}
void FenxiaoGrade::setName (QString name) {
  this->name = name;
}


void FenxiaoGrade::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("grade_id")) {
  gradeId = responseParser->getNumByName("grade_id");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }

}

