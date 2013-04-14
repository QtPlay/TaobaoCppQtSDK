#include <TaoApiCpp/request/FenxiaoProductSkuAddRequest.h>

QString FenxiaoProductSkuAddRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.sku.add";
}

QString FenxiaoProductSkuAddRequest::getAgentCostPrice() const {
  return agentCostPrice;
}
void FenxiaoProductSkuAddRequest::setAgentCostPrice (QString agentCostPrice) {
  this->agentCostPrice = agentCostPrice;
  appParams.insert("agent_cost_price", agentCostPrice);
}

QString FenxiaoProductSkuAddRequest::getDealerCostPrice() const {
  return dealerCostPrice;
}
void FenxiaoProductSkuAddRequest::setDealerCostPrice (QString dealerCostPrice) {
  this->dealerCostPrice = dealerCostPrice;
  appParams.insert("dealer_cost_price", dealerCostPrice);
}

qlonglong FenxiaoProductSkuAddRequest::getProductId() const {
  return productId;
}
void FenxiaoProductSkuAddRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString FenxiaoProductSkuAddRequest::getProperties() const {
  return properties;
}
void FenxiaoProductSkuAddRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}

qlonglong FenxiaoProductSkuAddRequest::getQuantity() const {
  return quantity;
}
void FenxiaoProductSkuAddRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}

QString FenxiaoProductSkuAddRequest::getSkuNumber() const {
  return skuNumber;
}
void FenxiaoProductSkuAddRequest::setSkuNumber (QString skuNumber) {
  this->skuNumber = skuNumber;
  appParams.insert("sku_number", skuNumber);
}

QString FenxiaoProductSkuAddRequest::getStandardPrice() const {
  return standardPrice;
}
void FenxiaoProductSkuAddRequest::setStandardPrice (QString standardPrice) {
  this->standardPrice = standardPrice;
  appParams.insert("standard_price", standardPrice);
}



FenxiaoProductSkuAddResponse *FenxiaoProductSkuAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductSkuAddResponse *tmpResponse = new FenxiaoProductSkuAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
