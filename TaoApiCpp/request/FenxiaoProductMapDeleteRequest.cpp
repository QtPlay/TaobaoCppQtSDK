#include <TaoApiCpp/request/FenxiaoProductMapDeleteRequest.h>

QString FenxiaoProductMapDeleteRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.map.delete";
}

qlonglong FenxiaoProductMapDeleteRequest::getProductId() const {
  return productId;
}
void FenxiaoProductMapDeleteRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString FenxiaoProductMapDeleteRequest::getSkuIds() const {
  return skuIds;
}
void FenxiaoProductMapDeleteRequest::setSkuIds (QString skuIds) {
  this->skuIds = skuIds;
  appParams.insert("sku_ids", skuIds);
}



FenxiaoProductMapDeleteResponse *FenxiaoProductMapDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductMapDeleteResponse *tmpResponse = new FenxiaoProductMapDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
