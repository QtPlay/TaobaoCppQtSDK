#include <TaoApiCpp/domain/BookBill.h>
qlonglong BookBill::getAccountId() const {
  return accountId;
}
void BookBill::setAccountId (qlonglong accountId) {
  this->accountId = accountId;
}

qlonglong BookBill::getAmount() const {
  return amount;
}
void BookBill::setAmount (qlonglong amount) {
  this->amount = amount;
}

qlonglong BookBill::getBid() const {
  return bid;
}
void BookBill::setBid (qlonglong bid) {
  this->bid = bid;
}

QDateTime BookBill::getBookTime() const {
  return bookTime;
}
void BookBill::setBookTime (QDateTime bookTime) {
  this->bookTime = bookTime;
}

QString BookBill::getDescription() const {
  return description;
}
void BookBill::setDescription (QString description) {
  this->description = description;
}

QDateTime BookBill::getGmtCreate() const {
  return gmtCreate;
}
void BookBill::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

qlonglong BookBill::getJournalType() const {
  return journalType;
}
void BookBill::setJournalType (qlonglong journalType) {
  this->journalType = journalType;
}


void BookBill::parseResponse() {
  if (responseParser->hasName("account_id")) {
  accountId = responseParser->getNumByName("account_id");
  }
  if (responseParser->hasName("amount")) {
  amount = responseParser->getNumByName("amount");
  }
  if (responseParser->hasName("bid")) {
  bid = responseParser->getNumByName("bid");
  }
  if (responseParser->hasName("book_time")) {
  bookTime = responseParser->getDateByName("book_time");
  }
  if (responseParser->hasName("description")) {
  description = responseParser->getStrByName("description");
  }
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }
  if (responseParser->hasName("journal_type")) {
  journalType = responseParser->getNumByName("journal_type");
  }

}

