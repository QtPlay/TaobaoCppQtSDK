#include <TaoApiCpp/request/FenxiaoProductUpdateRequest.h>

QString FenxiaoProductUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.update";
}

qlonglong FenxiaoProductUpdateRequest::getAlarmNumber() const {
  return alarmNumber;
}
void FenxiaoProductUpdateRequest::setAlarmNumber (qlonglong alarmNumber) {
  this->alarmNumber = alarmNumber;
  appParams.insert("alarm_number", QString::number(alarmNumber));
}

qlonglong FenxiaoProductUpdateRequest::getCategoryId() const {
  return categoryId;
}
void FenxiaoProductUpdateRequest::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
  appParams.insert("category_id", QString::number(categoryId));
}

QString FenxiaoProductUpdateRequest::getCity() const {
  return city;
}
void FenxiaoProductUpdateRequest::setCity (QString city) {
  this->city = city;
  appParams.insert("city", city);
}

QString FenxiaoProductUpdateRequest::getCostPrice() const {
  return costPrice;
}
void FenxiaoProductUpdateRequest::setCostPrice (QString costPrice) {
  this->costPrice = costPrice;
  appParams.insert("cost_price", costPrice);
}

QString FenxiaoProductUpdateRequest::getDealerCostPrice() const {
  return dealerCostPrice;
}
void FenxiaoProductUpdateRequest::setDealerCostPrice (QString dealerCostPrice) {
  this->dealerCostPrice = dealerCostPrice;
  appParams.insert("dealer_cost_price", dealerCostPrice);
}

QString FenxiaoProductUpdateRequest::getDesc() const {
  return desc;
}
void FenxiaoProductUpdateRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

qlonglong FenxiaoProductUpdateRequest::getDiscountId() const {
  return discountId;
}
void FenxiaoProductUpdateRequest::setDiscountId (qlonglong discountId) {
  this->discountId = discountId;
  appParams.insert("discount_id", QString::number(discountId));
}

QString FenxiaoProductUpdateRequest::getHaveGuarantee() const {
  return haveGuarantee;
}
void FenxiaoProductUpdateRequest::setHaveGuarantee (QString haveGuarantee) {
  this->haveGuarantee = haveGuarantee;
  appParams.insert("have_guarantee", haveGuarantee);
}

QString FenxiaoProductUpdateRequest::getHaveInvoice() const {
  return haveInvoice;
}
void FenxiaoProductUpdateRequest::setHaveInvoice (QString haveInvoice) {
  this->haveInvoice = haveInvoice;
  appParams.insert("have_invoice", haveInvoice);
}

FileItem FenxiaoProductUpdateRequest::getImage() const {
  return image;
}
void FenxiaoProductUpdateRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

QString FenxiaoProductUpdateRequest::getInputProperties() const {
  return inputProperties;
}
void FenxiaoProductUpdateRequest::setInputProperties (QString inputProperties) {
  this->inputProperties = inputProperties;
  appParams.insert("input_properties", inputProperties);
}

QString FenxiaoProductUpdateRequest::getIsAuthz() const {
  return isAuthz;
}
void FenxiaoProductUpdateRequest::setIsAuthz (QString isAuthz) {
  this->isAuthz = isAuthz;
  appParams.insert("is_authz", isAuthz);
}

QString FenxiaoProductUpdateRequest::getName() const {
  return name;
}
void FenxiaoProductUpdateRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString FenxiaoProductUpdateRequest::getOuterId() const {
  return outerId;
}
void FenxiaoProductUpdateRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

QString FenxiaoProductUpdateRequest::getPicPath() const {
  return picPath;
}
void FenxiaoProductUpdateRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

qlonglong FenxiaoProductUpdateRequest::getPid() const {
  return pid;
}
void FenxiaoProductUpdateRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

QString FenxiaoProductUpdateRequest::getPostageEms() const {
  return postageEms;
}
void FenxiaoProductUpdateRequest::setPostageEms (QString postageEms) {
  this->postageEms = postageEms;
  appParams.insert("postage_ems", postageEms);
}

QString FenxiaoProductUpdateRequest::getPostageFast() const {
  return postageFast;
}
void FenxiaoProductUpdateRequest::setPostageFast (QString postageFast) {
  this->postageFast = postageFast;
  appParams.insert("postage_fast", postageFast);
}

qlonglong FenxiaoProductUpdateRequest::getPostageId() const {
  return postageId;
}
void FenxiaoProductUpdateRequest::setPostageId (qlonglong postageId) {
  this->postageId = postageId;
  appParams.insert("postage_id", QString::number(postageId));
}

QString FenxiaoProductUpdateRequest::getPostageOrdinary() const {
  return postageOrdinary;
}
void FenxiaoProductUpdateRequest::setPostageOrdinary (QString postageOrdinary) {
  this->postageOrdinary = postageOrdinary;
  appParams.insert("postage_ordinary", postageOrdinary);
}

QString FenxiaoProductUpdateRequest::getPostageType() const {
  return postageType;
}
void FenxiaoProductUpdateRequest::setPostageType (QString postageType) {
  this->postageType = postageType;
  appParams.insert("postage_type", postageType);
}

QString FenxiaoProductUpdateRequest::getProperties() const {
  return properties;
}
void FenxiaoProductUpdateRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}

QString FenxiaoProductUpdateRequest::getPropertyAlias() const {
  return propertyAlias;
}
void FenxiaoProductUpdateRequest::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
  appParams.insert("property_alias", propertyAlias);
}

QString FenxiaoProductUpdateRequest::getProv() const {
  return prov;
}
void FenxiaoProductUpdateRequest::setProv (QString prov) {
  this->prov = prov;
  appParams.insert("prov", prov);
}

qlonglong FenxiaoProductUpdateRequest::getQuantity() const {
  return quantity;
}
void FenxiaoProductUpdateRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}

QString FenxiaoProductUpdateRequest::getRetailPriceHigh() const {
  return retailPriceHigh;
}
void FenxiaoProductUpdateRequest::setRetailPriceHigh (QString retailPriceHigh) {
  this->retailPriceHigh = retailPriceHigh;
  appParams.insert("retail_price_high", retailPriceHigh);
}

QString FenxiaoProductUpdateRequest::getRetailPriceLow() const {
  return retailPriceLow;
}
void FenxiaoProductUpdateRequest::setRetailPriceLow (QString retailPriceLow) {
  this->retailPriceLow = retailPriceLow;
  appParams.insert("retail_price_low", retailPriceLow);
}

QString FenxiaoProductUpdateRequest::getSkuCostPrices() const {
  return skuCostPrices;
}
void FenxiaoProductUpdateRequest::setSkuCostPrices (QString skuCostPrices) {
  this->skuCostPrices = skuCostPrices;
  appParams.insert("sku_cost_prices", skuCostPrices);
}

QString FenxiaoProductUpdateRequest::getSkuDealerCostPrices() const {
  return skuDealerCostPrices;
}
void FenxiaoProductUpdateRequest::setSkuDealerCostPrices (QString skuDealerCostPrices) {
  this->skuDealerCostPrices = skuDealerCostPrices;
  appParams.insert("sku_dealer_cost_prices", skuDealerCostPrices);
}

QString FenxiaoProductUpdateRequest::getSkuIds() const {
  return skuIds;
}
void FenxiaoProductUpdateRequest::setSkuIds (QString skuIds) {
  this->skuIds = skuIds;
  appParams.insert("sku_ids", skuIds);
}

QString FenxiaoProductUpdateRequest::getSkuOuterIds() const {
  return skuOuterIds;
}
void FenxiaoProductUpdateRequest::setSkuOuterIds (QString skuOuterIds) {
  this->skuOuterIds = skuOuterIds;
  appParams.insert("sku_outer_ids", skuOuterIds);
}

QString FenxiaoProductUpdateRequest::getSkuProperties() const {
  return skuProperties;
}
void FenxiaoProductUpdateRequest::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
  appParams.insert("sku_properties", skuProperties);
}

QString FenxiaoProductUpdateRequest::getSkuPropertiesDel() const {
  return skuPropertiesDel;
}
void FenxiaoProductUpdateRequest::setSkuPropertiesDel (QString skuPropertiesDel) {
  this->skuPropertiesDel = skuPropertiesDel;
  appParams.insert("sku_properties_del", skuPropertiesDel);
}

QString FenxiaoProductUpdateRequest::getSkuQuantitys() const {
  return skuQuantitys;
}
void FenxiaoProductUpdateRequest::setSkuQuantitys (QString skuQuantitys) {
  this->skuQuantitys = skuQuantitys;
  appParams.insert("sku_quantitys", skuQuantitys);
}

QString FenxiaoProductUpdateRequest::getSkuStandardPrices() const {
  return skuStandardPrices;
}
void FenxiaoProductUpdateRequest::setSkuStandardPrices (QString skuStandardPrices) {
  this->skuStandardPrices = skuStandardPrices;
  appParams.insert("sku_standard_prices", skuStandardPrices);
}

QString FenxiaoProductUpdateRequest::getStandardPrice() const {
  return standardPrice;
}
void FenxiaoProductUpdateRequest::setStandardPrice (QString standardPrice) {
  this->standardPrice = standardPrice;
  appParams.insert("standard_price", standardPrice);
}

QString FenxiaoProductUpdateRequest::getStatus() const {
  return status;
}
void FenxiaoProductUpdateRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}



FenxiaoProductUpdateResponse *FenxiaoProductUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductUpdateResponse *tmpResponse = new FenxiaoProductUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
