#include <TaoApiCpp/request/ProductImgDeleteRequest.h>

QString ProductImgDeleteRequest::getApiMethodName() const {
  return "taobao.product.img.delete";
}

qlonglong ProductImgDeleteRequest::getId() const {
  return id;
}
void ProductImgDeleteRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

qlonglong ProductImgDeleteRequest::getProductId() const {
  return productId;
}
void ProductImgDeleteRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}



ProductImgDeleteResponse *ProductImgDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ProductImgDeleteResponse *tmpResponse = new ProductImgDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
