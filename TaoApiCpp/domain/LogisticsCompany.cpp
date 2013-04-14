#include <TaoApiCpp/domain/LogisticsCompany.h>
QString LogisticsCompany::getCode() const {
  return code;
}
void LogisticsCompany::setCode (QString code) {
  this->code = code;
}

qlonglong LogisticsCompany::getId() const {
  return id;
}
void LogisticsCompany::setId (qlonglong id) {
  this->id = id;
}

QString LogisticsCompany::getName() const {
  return name;
}
void LogisticsCompany::setName (QString name) {
  this->name = name;
}

QString LogisticsCompany::getRegMailNo() const {
  return regMailNo;
}
void LogisticsCompany::setRegMailNo (QString regMailNo) {
  this->regMailNo = regMailNo;
}


void LogisticsCompany::parseResponse() {
  if (responseParser->hasName("code")) {
  code = responseParser->getStrByName("code");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("reg_mail_no")) {
  regMailNo = responseParser->getStrByName("reg_mail_no");
  }

}

