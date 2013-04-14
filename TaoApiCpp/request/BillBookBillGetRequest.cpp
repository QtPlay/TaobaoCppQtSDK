#include <TaoApiCpp/request/BillBookBillGetRequest.h>

QString BillBookBillGetRequest::getApiMethodName() const {
  return "taobao.bill.book.bill.get";
}

qlonglong BillBookBillGetRequest::getBid() const {
  return bid;
}
void BillBookBillGetRequest::setBid (qlonglong bid) {
  this->bid = bid;
  appParams.insert("bid", QString::number(bid));
}

QString BillBookBillGetRequest::getFields() const {
  return fields;
}
void BillBookBillGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



BillBookBillGetResponse *BillBookBillGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  BillBookBillGetResponse *tmpResponse = new BillBookBillGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
