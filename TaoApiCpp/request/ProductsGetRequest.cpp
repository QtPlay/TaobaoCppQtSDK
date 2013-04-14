#include <TaoApiCpp/request/ProductsGetRequest.h>

QString ProductsGetRequest::getApiMethodName() const {
  return "taobao.products.get";
}

QString ProductsGetRequest::getFields() const {
  return fields;
}
void ProductsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString ProductsGetRequest::getNick() const {
  return nick;
}
void ProductsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong ProductsGetRequest::getPageNo() const {
  return pageNo;
}
void ProductsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong ProductsGetRequest::getPageSize() const {
  return pageSize;
}
void ProductsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



ProductsGetResponse *ProductsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ProductsGetResponse *tmpResponse = new ProductsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
