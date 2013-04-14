#include <TaoApiCpp/domain/Account.h>
QString Account::getAccountCode() const {
  return accountCode;
}
void Account::setAccountCode (QString accountCode) {
  this->accountCode = accountCode;
}

qlonglong Account::getAccountId() const {
  return accountId;
}
void Account::setAccountId (qlonglong accountId) {
  this->accountId = accountId;
}

QString Account::getAccountName() const {
  return accountName;
}
void Account::setAccountName (QString accountName) {
  this->accountName = accountName;
}

qlonglong Account::getAccountType() const {
  return accountType;
}
void Account::setAccountType (qlonglong accountType) {
  this->accountType = accountType;
}

QDateTime Account::getGmtCreate() const {
  return gmtCreate;
}
void Account::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

QDateTime Account::getGmtModified() const {
  return gmtModified;
}
void Account::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

qlonglong Account::getRelatedOrder() const {
  return relatedOrder;
}
void Account::setRelatedOrder (qlonglong relatedOrder) {
  this->relatedOrder = relatedOrder;
}

qlonglong Account::getStatus() const {
  return status;
}
void Account::setStatus (qlonglong status) {
  this->status = status;
}


void Account::parseResponse() {
  if (responseParser->hasName("account_code")) {
  accountCode = responseParser->getStrByName("account_code");
  }
  if (responseParser->hasName("account_id")) {
  accountId = responseParser->getNumByName("account_id");
  }
  if (responseParser->hasName("account_name")) {
  accountName = responseParser->getStrByName("account_name");
  }
  if (responseParser->hasName("account_type")) {
  accountType = responseParser->getNumByName("account_type");
  }
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }
  if (responseParser->hasName("related_order")) {
  relatedOrder = responseParser->getNumByName("related_order");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }

}

