#include <TaoApiCpp/request/ProductsSearchRequest.h>

QString ProductsSearchRequest::getApiMethodName() const {
  return "taobao.products.search";
}

qlonglong ProductsSearchRequest::getCid() const {
  return cid;
}
void ProductsSearchRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString ProductsSearchRequest::getFields() const {
  return fields;
}
void ProductsSearchRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong ProductsSearchRequest::getPageNo() const {
  return pageNo;
}
void ProductsSearchRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong ProductsSearchRequest::getPageSize() const {
  return pageSize;
}
void ProductsSearchRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString ProductsSearchRequest::getProps() const {
  return props;
}
void ProductsSearchRequest::setProps (QString props) {
  this->props = props;
  appParams.insert("props", props);
}

QString ProductsSearchRequest::getQ() const {
  return q;
}
void ProductsSearchRequest::setQ (QString q) {
  this->q = q;
  appParams.insert("q", q);
}

QString ProductsSearchRequest::getStatus() const {
  return status;
}
void ProductsSearchRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

qlonglong ProductsSearchRequest::getVerticalMarket() const {
  return verticalMarket;
}
void ProductsSearchRequest::setVerticalMarket (qlonglong verticalMarket) {
  this->verticalMarket = verticalMarket;
  appParams.insert("vertical_market", QString::number(verticalMarket));
}



ProductsSearchResponse *ProductsSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ProductsSearchResponse *tmpResponse = new ProductsSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
