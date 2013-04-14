#include <TaoApiCpp/request/ProductGetRequest.h>

QString ProductGetRequest::getApiMethodName() const {
  return "taobao.product.get";
}

qlonglong ProductGetRequest::getCid() const {
  return cid;
}
void ProductGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString ProductGetRequest::getFields() const {
  return fields;
}
void ProductGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong ProductGetRequest::getProductId() const {
  return productId;
}
void ProductGetRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString ProductGetRequest::getProps() const {
  return props;
}
void ProductGetRequest::setProps (QString props) {
  this->props = props;
  appParams.insert("props", props);
}



ProductGetResponse *ProductGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ProductGetResponse *tmpResponse = new ProductGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
