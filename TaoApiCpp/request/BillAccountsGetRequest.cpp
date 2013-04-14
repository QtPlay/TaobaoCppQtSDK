#include <TaoApiCpp/request/BillAccountsGetRequest.h>

QString BillAccountsGetRequest::getApiMethodName() const {
  return "taobao.bill.accounts.get";
}

qlonglong BillAccountsGetRequest::getAids() const {
  return aids;
}
void BillAccountsGetRequest::setAids (qlonglong aids) {
  this->aids = aids;
  appParams.insert("aids", QString::number(aids));
}

QString BillAccountsGetRequest::getFields() const {
  return fields;
}
void BillAccountsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



BillAccountsGetResponse *BillAccountsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  BillAccountsGetResponse *tmpResponse = new BillAccountsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
