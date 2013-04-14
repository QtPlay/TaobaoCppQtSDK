#include <TaoApiCpp/request/FenxiaoProductImageDeleteRequest.h>

QString FenxiaoProductImageDeleteRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.image.delete";
}

qlonglong FenxiaoProductImageDeleteRequest::getPosition() const {
  return position;
}
void FenxiaoProductImageDeleteRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}

qlonglong FenxiaoProductImageDeleteRequest::getProductId() const {
  return productId;
}
void FenxiaoProductImageDeleteRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString FenxiaoProductImageDeleteRequest::getProperties() const {
  return properties;
}
void FenxiaoProductImageDeleteRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}



FenxiaoProductImageDeleteResponse *FenxiaoProductImageDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductImageDeleteResponse *tmpResponse = new FenxiaoProductImageDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
