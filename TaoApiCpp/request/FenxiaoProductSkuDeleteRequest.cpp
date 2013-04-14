#include <TaoApiCpp/request/FenxiaoProductSkuDeleteRequest.h>

QString FenxiaoProductSkuDeleteRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.sku.delete";
}

qlonglong FenxiaoProductSkuDeleteRequest::getProductId() const {
  return productId;
}
void FenxiaoProductSkuDeleteRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString FenxiaoProductSkuDeleteRequest::getProperties() const {
  return properties;
}
void FenxiaoProductSkuDeleteRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}



FenxiaoProductSkuDeleteResponse *FenxiaoProductSkuDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductSkuDeleteResponse *tmpResponse = new FenxiaoProductSkuDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
