#include <TaoApiCpp/request/FenxiaoProductAddRequest.h>

QString FenxiaoProductAddRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.add";
}

qlonglong FenxiaoProductAddRequest::getAlarmNumber() const {
  return alarmNumber;
}
void FenxiaoProductAddRequest::setAlarmNumber (qlonglong alarmNumber) {
  this->alarmNumber = alarmNumber;
  appParams.insert("alarm_number", QString::number(alarmNumber));
}

qlonglong FenxiaoProductAddRequest::getCategoryId() const {
  return categoryId;
}
void FenxiaoProductAddRequest::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
  appParams.insert("category_id", QString::number(categoryId));
}

QString FenxiaoProductAddRequest::getCity() const {
  return city;
}
void FenxiaoProductAddRequest::setCity (QString city) {
  this->city = city;
  appParams.insert("city", city);
}

QString FenxiaoProductAddRequest::getCostPrice() const {
  return costPrice;
}
void FenxiaoProductAddRequest::setCostPrice (QString costPrice) {
  this->costPrice = costPrice;
  appParams.insert("cost_price", costPrice);
}

QString FenxiaoProductAddRequest::getDealerCostPrice() const {
  return dealerCostPrice;
}
void FenxiaoProductAddRequest::setDealerCostPrice (QString dealerCostPrice) {
  this->dealerCostPrice = dealerCostPrice;
  appParams.insert("dealer_cost_price", dealerCostPrice);
}

QString FenxiaoProductAddRequest::getDesc() const {
  return desc;
}
void FenxiaoProductAddRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

qlonglong FenxiaoProductAddRequest::getDiscountId() const {
  return discountId;
}
void FenxiaoProductAddRequest::setDiscountId (qlonglong discountId) {
  this->discountId = discountId;
  appParams.insert("discount_id", QString::number(discountId));
}

QString FenxiaoProductAddRequest::getHaveGuarantee() const {
  return haveGuarantee;
}
void FenxiaoProductAddRequest::setHaveGuarantee (QString haveGuarantee) {
  this->haveGuarantee = haveGuarantee;
  appParams.insert("have_guarantee", haveGuarantee);
}

QString FenxiaoProductAddRequest::getHaveInvoice() const {
  return haveInvoice;
}
void FenxiaoProductAddRequest::setHaveInvoice (QString haveInvoice) {
  this->haveInvoice = haveInvoice;
  appParams.insert("have_invoice", haveInvoice);
}

FileItem FenxiaoProductAddRequest::getImage() const {
  return image;
}
void FenxiaoProductAddRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

QString FenxiaoProductAddRequest::getInputProperties() const {
  return inputProperties;
}
void FenxiaoProductAddRequest::setInputProperties (QString inputProperties) {
  this->inputProperties = inputProperties;
  appParams.insert("input_properties", inputProperties);
}

QString FenxiaoProductAddRequest::getIsAuthz() const {
  return isAuthz;
}
void FenxiaoProductAddRequest::setIsAuthz (QString isAuthz) {
  this->isAuthz = isAuthz;
  appParams.insert("is_authz", isAuthz);
}

qlonglong FenxiaoProductAddRequest::getItemId() const {
  return itemId;
}
void FenxiaoProductAddRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString FenxiaoProductAddRequest::getName() const {
  return name;
}
void FenxiaoProductAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString FenxiaoProductAddRequest::getOuterId() const {
  return outerId;
}
void FenxiaoProductAddRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

QString FenxiaoProductAddRequest::getPicPath() const {
  return picPath;
}
void FenxiaoProductAddRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

QString FenxiaoProductAddRequest::getPostageEms() const {
  return postageEms;
}
void FenxiaoProductAddRequest::setPostageEms (QString postageEms) {
  this->postageEms = postageEms;
  appParams.insert("postage_ems", postageEms);
}

QString FenxiaoProductAddRequest::getPostageFast() const {
  return postageFast;
}
void FenxiaoProductAddRequest::setPostageFast (QString postageFast) {
  this->postageFast = postageFast;
  appParams.insert("postage_fast", postageFast);
}

qlonglong FenxiaoProductAddRequest::getPostageId() const {
  return postageId;
}
void FenxiaoProductAddRequest::setPostageId (qlonglong postageId) {
  this->postageId = postageId;
  appParams.insert("postage_id", QString::number(postageId));
}

QString FenxiaoProductAddRequest::getPostageOrdinary() const {
  return postageOrdinary;
}
void FenxiaoProductAddRequest::setPostageOrdinary (QString postageOrdinary) {
  this->postageOrdinary = postageOrdinary;
  appParams.insert("postage_ordinary", postageOrdinary);
}

QString FenxiaoProductAddRequest::getPostageType() const {
  return postageType;
}
void FenxiaoProductAddRequest::setPostageType (QString postageType) {
  this->postageType = postageType;
  appParams.insert("postage_type", postageType);
}

qlonglong FenxiaoProductAddRequest::getProductcatId() const {
  return productcatId;
}
void FenxiaoProductAddRequest::setProductcatId (qlonglong productcatId) {
  this->productcatId = productcatId;
  appParams.insert("productcat_id", QString::number(productcatId));
}

QString FenxiaoProductAddRequest::getProperties() const {
  return properties;
}
void FenxiaoProductAddRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}

QString FenxiaoProductAddRequest::getPropertyAlias() const {
  return propertyAlias;
}
void FenxiaoProductAddRequest::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
  appParams.insert("property_alias", propertyAlias);
}

QString FenxiaoProductAddRequest::getProv() const {
  return prov;
}
void FenxiaoProductAddRequest::setProv (QString prov) {
  this->prov = prov;
  appParams.insert("prov", prov);
}

qlonglong FenxiaoProductAddRequest::getQuantity() const {
  return quantity;
}
void FenxiaoProductAddRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}

QString FenxiaoProductAddRequest::getRetailPriceHigh() const {
  return retailPriceHigh;
}
void FenxiaoProductAddRequest::setRetailPriceHigh (QString retailPriceHigh) {
  this->retailPriceHigh = retailPriceHigh;
  appParams.insert("retail_price_high", retailPriceHigh);
}

QString FenxiaoProductAddRequest::getRetailPriceLow() const {
  return retailPriceLow;
}
void FenxiaoProductAddRequest::setRetailPriceLow (QString retailPriceLow) {
  this->retailPriceLow = retailPriceLow;
  appParams.insert("retail_price_low", retailPriceLow);
}

QString FenxiaoProductAddRequest::getSkuCostPrices() const {
  return skuCostPrices;
}
void FenxiaoProductAddRequest::setSkuCostPrices (QString skuCostPrices) {
  this->skuCostPrices = skuCostPrices;
  appParams.insert("sku_cost_prices", skuCostPrices);
}

QString FenxiaoProductAddRequest::getSkuDealerCostPrices() const {
  return skuDealerCostPrices;
}
void FenxiaoProductAddRequest::setSkuDealerCostPrices (QString skuDealerCostPrices) {
  this->skuDealerCostPrices = skuDealerCostPrices;
  appParams.insert("sku_dealer_cost_prices", skuDealerCostPrices);
}

QString FenxiaoProductAddRequest::getSkuOuterIds() const {
  return skuOuterIds;
}
void FenxiaoProductAddRequest::setSkuOuterIds (QString skuOuterIds) {
  this->skuOuterIds = skuOuterIds;
  appParams.insert("sku_outer_ids", skuOuterIds);
}

QString FenxiaoProductAddRequest::getSkuProperties() const {
  return skuProperties;
}
void FenxiaoProductAddRequest::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
  appParams.insert("sku_properties", skuProperties);
}

QString FenxiaoProductAddRequest::getSkuQuantitys() const {
  return skuQuantitys;
}
void FenxiaoProductAddRequest::setSkuQuantitys (QString skuQuantitys) {
  this->skuQuantitys = skuQuantitys;
  appParams.insert("sku_quantitys", skuQuantitys);
}

QString FenxiaoProductAddRequest::getSkuStandardPrices() const {
  return skuStandardPrices;
}
void FenxiaoProductAddRequest::setSkuStandardPrices (QString skuStandardPrices) {
  this->skuStandardPrices = skuStandardPrices;
  appParams.insert("sku_standard_prices", skuStandardPrices);
}

QString FenxiaoProductAddRequest::getStandardPrice() const {
  return standardPrice;
}
void FenxiaoProductAddRequest::setStandardPrice (QString standardPrice) {
  this->standardPrice = standardPrice;
  appParams.insert("standard_price", standardPrice);
}

QString FenxiaoProductAddRequest::getTradeType() const {
  return tradeType;
}
void FenxiaoProductAddRequest::setTradeType (QString tradeType) {
  this->tradeType = tradeType;
  appParams.insert("trade_type", tradeType);
}



FenxiaoProductAddResponse *FenxiaoProductAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductAddResponse *tmpResponse = new FenxiaoProductAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
