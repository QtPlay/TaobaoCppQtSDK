#include <TaoApiCpp/request/FenxiaoProductGradepriceGetRequest.h>

QString FenxiaoProductGradepriceGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.gradeprice.get";
}

qlonglong FenxiaoProductGradepriceGetRequest::getProductId() const {
  return productId;
}
void FenxiaoProductGradepriceGetRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

qlonglong FenxiaoProductGradepriceGetRequest::getSkuId() const {
  return skuId;
}
void FenxiaoProductGradepriceGetRequest::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
  appParams.insert("sku_id", QString::number(skuId));
}

qlonglong FenxiaoProductGradepriceGetRequest::getTradeType() const {
  return tradeType;
}
void FenxiaoProductGradepriceGetRequest::setTradeType (qlonglong tradeType) {
  this->tradeType = tradeType;
  appParams.insert("trade_type", QString::number(tradeType));
}



FenxiaoProductGradepriceGetResponse *FenxiaoProductGradepriceGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductGradepriceGetResponse *tmpResponse = new FenxiaoProductGradepriceGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
