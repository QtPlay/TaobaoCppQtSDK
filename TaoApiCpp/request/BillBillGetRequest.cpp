#include <TaoApiCpp/request/BillBillGetRequest.h>

QString BillBillGetRequest::getApiMethodName() const {
  return "taobao.bill.bill.get";
}

qlonglong BillBillGetRequest::getBid() const {
  return bid;
}
void BillBillGetRequest::setBid (qlonglong bid) {
  this->bid = bid;
  appParams.insert("bid", QString::number(bid));
}

QString BillBillGetRequest::getFields() const {
  return fields;
}
void BillBillGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



BillBillGetResponse *BillBillGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  BillBillGetResponse *tmpResponse = new BillBillGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
