#include <TaoApiCpp/request/FenxiaoProductSkuUpdateRequest.h>

QString FenxiaoProductSkuUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.sku.update";
}

QString FenxiaoProductSkuUpdateRequest::getAgentCostPrice() const {
  return agentCostPrice;
}
void FenxiaoProductSkuUpdateRequest::setAgentCostPrice (QString agentCostPrice) {
  this->agentCostPrice = agentCostPrice;
  appParams.insert("agent_cost_price", agentCostPrice);
}

QString FenxiaoProductSkuUpdateRequest::getDealerCostPrice() const {
  return dealerCostPrice;
}
void FenxiaoProductSkuUpdateRequest::setDealerCostPrice (QString dealerCostPrice) {
  this->dealerCostPrice = dealerCostPrice;
  appParams.insert("dealer_cost_price", dealerCostPrice);
}

qlonglong FenxiaoProductSkuUpdateRequest::getProductId() const {
  return productId;
}
void FenxiaoProductSkuUpdateRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString FenxiaoProductSkuUpdateRequest::getProperties() const {
  return properties;
}
void FenxiaoProductSkuUpdateRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}

qlonglong FenxiaoProductSkuUpdateRequest::getQuantity() const {
  return quantity;
}
void FenxiaoProductSkuUpdateRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}

QString FenxiaoProductSkuUpdateRequest::getSkuNumber() const {
  return skuNumber;
}
void FenxiaoProductSkuUpdateRequest::setSkuNumber (QString skuNumber) {
  this->skuNumber = skuNumber;
  appParams.insert("sku_number", skuNumber);
}

QString FenxiaoProductSkuUpdateRequest::getStandardPrice() const {
  return standardPrice;
}
void FenxiaoProductSkuUpdateRequest::setStandardPrice (QString standardPrice) {
  this->standardPrice = standardPrice;
  appParams.insert("standard_price", standardPrice);
}



FenxiaoProductSkuUpdateResponse *FenxiaoProductSkuUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductSkuUpdateResponse *tmpResponse = new FenxiaoProductSkuUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
