#include <TaoApiCpp/request/RoductSpecsGetRequest.h>

QString RoductSpecsGetRequest::getApiMethodName() const {
  return "tmall.product.specs.get";
}

qlonglong RoductSpecsGetRequest::getCatId() const {
  return catId;
}
void RoductSpecsGetRequest::setCatId (qlonglong catId) {
  this->catId = catId;
  appParams.insert("cat_id", QString::number(catId));
}

qlonglong RoductSpecsGetRequest::getProductId() const {
  return productId;
}
void RoductSpecsGetRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString RoductSpecsGetRequest::getProperties() const {
  return properties;
}
void RoductSpecsGetRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}



RoductSpecsGetResponse *RoductSpecsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RoductSpecsGetResponse *tmpResponse = new RoductSpecsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
