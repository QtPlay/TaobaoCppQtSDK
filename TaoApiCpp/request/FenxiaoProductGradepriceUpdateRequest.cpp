#include <TaoApiCpp/request/FenxiaoProductGradepriceUpdateRequest.h>

QString FenxiaoProductGradepriceUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.gradeprice.update";
}

qlonglong FenxiaoProductGradepriceUpdateRequest::getIds() const {
  return ids;
}
void FenxiaoProductGradepriceUpdateRequest::setIds (qlonglong ids) {
  this->ids = ids;
  appParams.insert("ids", QString::number(ids));
}

QString FenxiaoProductGradepriceUpdateRequest::getPrices() const {
  return prices;
}
void FenxiaoProductGradepriceUpdateRequest::setPrices (QString prices) {
  this->prices = prices;
  appParams.insert("prices", prices);
}

qlonglong FenxiaoProductGradepriceUpdateRequest::getProductId() const {
  return productId;
}
void FenxiaoProductGradepriceUpdateRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

qlonglong FenxiaoProductGradepriceUpdateRequest::getSkuId() const {
  return skuId;
}
void FenxiaoProductGradepriceUpdateRequest::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
  appParams.insert("sku_id", QString::number(skuId));
}

QString FenxiaoProductGradepriceUpdateRequest::getTargetType() const {
  return targetType;
}
void FenxiaoProductGradepriceUpdateRequest::setTargetType (QString targetType) {
  this->targetType = targetType;
  appParams.insert("target_type", targetType);
}

QString FenxiaoProductGradepriceUpdateRequest::getTradeType() const {
  return tradeType;
}
void FenxiaoProductGradepriceUpdateRequest::setTradeType (QString tradeType) {
  this->tradeType = tradeType;
  appParams.insert("trade_type", tradeType);
}



FenxiaoProductGradepriceUpdateResponse *FenxiaoProductGradepriceUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductGradepriceUpdateResponse *tmpResponse = new FenxiaoProductGradepriceUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
