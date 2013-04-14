#include <TaoApiCpp/request/BillBookBillsGetRequest.h>

QString BillBookBillsGetRequest::getApiMethodName() const {
  return "taobao.bill.book.bills.get";
}

qlonglong BillBookBillsGetRequest::getAccountId() const {
  return accountId;
}
void BillBookBillsGetRequest::setAccountId (qlonglong accountId) {
  this->accountId = accountId;
  appParams.insert("account_id", QString::number(accountId));
}

QDateTime BillBookBillsGetRequest::getEndTime() const {
  return endTime;
}
void BillBookBillsGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString BillBookBillsGetRequest::getFields() const {
  return fields;
}
void BillBookBillsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong BillBookBillsGetRequest::getJournalTypes() const {
  return journalTypes;
}
void BillBookBillsGetRequest::setJournalTypes (qlonglong journalTypes) {
  this->journalTypes = journalTypes;
  appParams.insert("journal_types", QString::number(journalTypes));
}

qlonglong BillBookBillsGetRequest::getPageNo() const {
  return pageNo;
}
void BillBookBillsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong BillBookBillsGetRequest::getPageSize() const {
  return pageSize;
}
void BillBookBillsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime BillBookBillsGetRequest::getStartTime() const {
  return startTime;
}
void BillBookBillsGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



BillBookBillsGetResponse *BillBookBillsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  BillBookBillsGetResponse *tmpResponse = new BillBookBillsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
