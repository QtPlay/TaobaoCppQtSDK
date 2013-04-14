#include <TaoApiCpp/request/RefundsApplyGetRequest.h>

QString RefundsApplyGetRequest::getApiMethodName() const {
  return "taobao.refunds.apply.get";
}

QString RefundsApplyGetRequest::getFields() const {
  return fields;
}
void RefundsApplyGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong RefundsApplyGetRequest::getPageNo() const {
  return pageNo;
}
void RefundsApplyGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong RefundsApplyGetRequest::getPageSize() const {
  return pageSize;
}
void RefundsApplyGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString RefundsApplyGetRequest::getSellerNick() const {
  return sellerNick;
}
void RefundsApplyGetRequest::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
  appParams.insert("seller_nick", sellerNick);
}

QString RefundsApplyGetRequest::getStatus() const {
  return status;
}
void RefundsApplyGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString RefundsApplyGetRequest::getType() const {
  return type;
}
void RefundsApplyGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



RefundsApplyGetResponse *RefundsApplyGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RefundsApplyGetResponse *tmpResponse = new RefundsApplyGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
