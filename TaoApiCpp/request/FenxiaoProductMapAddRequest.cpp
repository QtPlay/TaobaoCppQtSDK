#include <TaoApiCpp/request/FenxiaoProductMapAddRequest.h>

QString FenxiaoProductMapAddRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.map.add";
}

bool FenxiaoProductMapAddRequest::getNotCheckOuterCode() const {
  return notCheckOuterCode;
}
void FenxiaoProductMapAddRequest::setNotCheckOuterCode (bool notCheckOuterCode) {
  this->notCheckOuterCode = notCheckOuterCode;
  appParams.insert("not_check_outer_code", notCheckOuterCode? "true": "false");
}

qlonglong FenxiaoProductMapAddRequest::getProductId() const {
  return productId;
}
void FenxiaoProductMapAddRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

qlonglong FenxiaoProductMapAddRequest::getScItemId() const {
  return scItemId;
}
void FenxiaoProductMapAddRequest::setScItemId (qlonglong scItemId) {
  this->scItemId = scItemId;
  appParams.insert("sc_item_id", QString::number(scItemId));
}

QString FenxiaoProductMapAddRequest::getScItemIds() const {
  return scItemIds;
}
void FenxiaoProductMapAddRequest::setScItemIds (QString scItemIds) {
  this->scItemIds = scItemIds;
  appParams.insert("sc_item_ids", scItemIds);
}

QString FenxiaoProductMapAddRequest::getSkuIds() const {
  return skuIds;
}
void FenxiaoProductMapAddRequest::setSkuIds (QString skuIds) {
  this->skuIds = skuIds;
  appParams.insert("sku_ids", skuIds);
}



FenxiaoProductMapAddResponse *FenxiaoProductMapAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductMapAddResponse *tmpResponse = new FenxiaoProductMapAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
