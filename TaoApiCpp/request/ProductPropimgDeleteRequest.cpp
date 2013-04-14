#include <TaoApiCpp/request/ProductPropimgDeleteRequest.h>

QString ProductPropimgDeleteRequest::getApiMethodName() const {
  return "taobao.product.propimg.delete";
}

qlonglong ProductPropimgDeleteRequest::getId() const {
  return id;
}
void ProductPropimgDeleteRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

qlonglong ProductPropimgDeleteRequest::getProductId() const {
  return productId;
}
void ProductPropimgDeleteRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}



ProductPropimgDeleteResponse *ProductPropimgDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ProductPropimgDeleteResponse *tmpResponse = new ProductPropimgDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
