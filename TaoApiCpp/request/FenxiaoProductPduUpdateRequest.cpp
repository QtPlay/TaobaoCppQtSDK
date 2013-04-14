#include <TaoApiCpp/request/FenxiaoProductPduUpdateRequest.h>

QString FenxiaoProductPduUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.pdu.update";
}

qlonglong FenxiaoProductPduUpdateRequest::getDistributorId() const {
  return distributorId;
}
void FenxiaoProductPduUpdateRequest::setDistributorId (qlonglong distributorId) {
  this->distributorId = distributorId;
  appParams.insert("distributor_id", QString::number(distributorId));
}

bool FenxiaoProductPduUpdateRequest::getIsDelete() const {
  return isDelete;
}
void FenxiaoProductPduUpdateRequest::setIsDelete (bool isDelete) {
  this->isDelete = isDelete;
  appParams.insert("is_delete", isDelete? "true": "false");
}

qlonglong FenxiaoProductPduUpdateRequest::getProductId() const {
  return productId;
}
void FenxiaoProductPduUpdateRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString FenxiaoProductPduUpdateRequest::getQuantityType() const {
  return quantityType;
}
void FenxiaoProductPduUpdateRequest::setQuantityType (QString quantityType) {
  this->quantityType = quantityType;
  appParams.insert("quantity_type", quantityType);
}

QString FenxiaoProductPduUpdateRequest::getQuantitys() const {
  return quantitys;
}
void FenxiaoProductPduUpdateRequest::setQuantitys (QString quantitys) {
  this->quantitys = quantitys;
  appParams.insert("quantitys", quantitys);
}

QString FenxiaoProductPduUpdateRequest::getSkuProperties() const {
  return skuProperties;
}
void FenxiaoProductPduUpdateRequest::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
  appParams.insert("sku_properties", skuProperties);
}



FenxiaoProductPduUpdateResponse *FenxiaoProductPduUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductPduUpdateResponse *tmpResponse = new FenxiaoProductPduUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
