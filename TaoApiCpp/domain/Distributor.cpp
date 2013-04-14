#include <TaoApiCpp/domain/Distributor.h>
QString Distributor::getAlipayAccount() const {
  return alipayAccount;
}
void Distributor::setAlipayAccount (QString alipayAccount) {
  this->alipayAccount = alipayAccount;
}

qlonglong Distributor::getAppraise() const {
  return appraise;
}
void Distributor::setAppraise (qlonglong appraise) {
  this->appraise = appraise;
}

qlonglong Distributor::getCategoryId() const {
  return categoryId;
}
void Distributor::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
}

QString Distributor::getContactPerson() const {
  return contactPerson;
}
void Distributor::setContactPerson (QString contactPerson) {
  this->contactPerson = contactPerson;
}

QDateTime Distributor::getCreated() const {
  return created;
}
void Distributor::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong Distributor::getDistributorId() const {
  return distributorId;
}
void Distributor::setDistributorId (qlonglong distributorId) {
  this->distributorId = distributorId;
}

QString Distributor::getDistributorName() const {
  return distributorName;
}
void Distributor::setDistributorName (QString distributorName) {
  this->distributorName = distributorName;
}

QString Distributor::getEmail() const {
  return email;
}
void Distributor::setEmail (QString email) {
  this->email = email;
}

QString Distributor::getFullName() const {
  return fullName;
}
void Distributor::setFullName (QString fullName) {
  this->fullName = fullName;
}

qlonglong Distributor::getLevel() const {
  return level;
}
void Distributor::setLevel (qlonglong level) {
  this->level = level;
}

QString Distributor::getMobilePhone() const {
  return mobilePhone;
}
void Distributor::setMobilePhone (QString mobilePhone) {
  this->mobilePhone = mobilePhone;
}

QString Distributor::getPhone() const {
  return phone;
}
void Distributor::setPhone (QString phone) {
  this->phone = phone;
}

QString Distributor::getShopWebLink() const {
  return shopWebLink;
}
void Distributor::setShopWebLink (QString shopWebLink) {
  this->shopWebLink = shopWebLink;
}

QDateTime Distributor::getStarts() const {
  return starts;
}
void Distributor::setStarts (QDateTime starts) {
  this->starts = starts;
}

qlonglong Distributor::getUserId() const {
  return userId;
}
void Distributor::setUserId (qlonglong userId) {
  this->userId = userId;
}


void Distributor::parseResponse() {
  if (responseParser->hasName("alipay_account")) {
  alipayAccount = responseParser->getStrByName("alipay_account");
  }
  if (responseParser->hasName("appraise")) {
  appraise = responseParser->getNumByName("appraise");
  }
  if (responseParser->hasName("category_id")) {
  categoryId = responseParser->getNumByName("category_id");
  }
  if (responseParser->hasName("contact_person")) {
  contactPerson = responseParser->getStrByName("contact_person");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("distributor_id")) {
  distributorId = responseParser->getNumByName("distributor_id");
  }
  if (responseParser->hasName("distributor_name")) {
  distributorName = responseParser->getStrByName("distributor_name");
  }
  if (responseParser->hasName("email")) {
  email = responseParser->getStrByName("email");
  }
  if (responseParser->hasName("full_name")) {
  fullName = responseParser->getStrByName("full_name");
  }
  if (responseParser->hasName("level")) {
  level = responseParser->getNumByName("level");
  }
  if (responseParser->hasName("mobile_phone")) {
  mobilePhone = responseParser->getStrByName("mobile_phone");
  }
  if (responseParser->hasName("phone")) {
  phone = responseParser->getStrByName("phone");
  }
  if (responseParser->hasName("shop_web_link")) {
  shopWebLink = responseParser->getStrByName("shop_web_link");
  }
  if (responseParser->hasName("starts")) {
  starts = responseParser->getDateByName("starts");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

