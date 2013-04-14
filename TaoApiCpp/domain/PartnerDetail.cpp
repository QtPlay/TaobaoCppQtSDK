#include <TaoApiCpp/domain/PartnerDetail.h>
QString PartnerDetail::getAccountNo() const {
  return accountNo;
}
void PartnerDetail::setAccountNo (QString accountNo) {
  this->accountNo = accountNo;
}

QString PartnerDetail::getCompanyCode() const {
  return companyCode;
}
void PartnerDetail::setCompanyCode (QString companyCode) {
  this->companyCode = companyCode;
}

qlonglong PartnerDetail::getCompanyId() const {
  return companyId;
}
void PartnerDetail::setCompanyId (qlonglong companyId) {
  this->companyId = companyId;
}

QString PartnerDetail::getCompanyName() const {
  return companyName;
}
void PartnerDetail::setCompanyName (QString companyName) {
  this->companyName = companyName;
}

QString PartnerDetail::getFullName() const {
  return fullName;
}
void PartnerDetail::setFullName (QString fullName) {
  this->fullName = fullName;
}

QString PartnerDetail::getRegMailNo() const {
  return regMailNo;
}
void PartnerDetail::setRegMailNo (QString regMailNo) {
  this->regMailNo = regMailNo;
}

QString PartnerDetail::getWangwangId() const {
  return wangwangId;
}
void PartnerDetail::setWangwangId (QString wangwangId) {
  this->wangwangId = wangwangId;
}


void PartnerDetail::parseResponse() {
  if (responseParser->hasName("account_no")) {
  accountNo = responseParser->getStrByName("account_no");
  }
  if (responseParser->hasName("company_code")) {
  companyCode = responseParser->getStrByName("company_code");
  }
  if (responseParser->hasName("company_id")) {
  companyId = responseParser->getNumByName("company_id");
  }
  if (responseParser->hasName("company_name")) {
  companyName = responseParser->getStrByName("company_name");
  }
  if (responseParser->hasName("full_name")) {
  fullName = responseParser->getStrByName("full_name");
  }
  if (responseParser->hasName("reg_mail_no")) {
  regMailNo = responseParser->getStrByName("reg_mail_no");
  }
  if (responseParser->hasName("wangwang_id")) {
  wangwangId = responseParser->getStrByName("wangwang_id");
  }

}

