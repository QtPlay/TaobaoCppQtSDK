#include <TaoApiCpp/request/ItemUpdateRequest.h>

QString ItemUpdateRequest::getApiMethodName() const {
  return "taobao.item.update";
}

qlonglong ItemUpdateRequest::getAfterSaleId() const {
  return afterSaleId;
}
void ItemUpdateRequest::setAfterSaleId (qlonglong afterSaleId) {
  this->afterSaleId = afterSaleId;
  appParams.insert("after_sale_id", QString::number(afterSaleId));
}

QString ItemUpdateRequest::getApproveStatus() const {
  return approveStatus;
}
void ItemUpdateRequest::setApproveStatus (QString approveStatus) {
  this->approveStatus = approveStatus;
  appParams.insert("approve_status", approveStatus);
}

qlonglong ItemUpdateRequest::getAuctionPoint() const {
  return auctionPoint;
}
void ItemUpdateRequest::setAuctionPoint (qlonglong auctionPoint) {
  this->auctionPoint = auctionPoint;
  appParams.insert("auction_point", QString::number(auctionPoint));
}

QString ItemUpdateRequest::getAutoFill() const {
  return autoFill;
}
void ItemUpdateRequest::setAutoFill (QString autoFill) {
  this->autoFill = autoFill;
  appParams.insert("auto_fill", autoFill);
}

qlonglong ItemUpdateRequest::getCid() const {
  return cid;
}
void ItemUpdateRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

qlonglong ItemUpdateRequest::getCodPostageId() const {
  return codPostageId;
}
void ItemUpdateRequest::setCodPostageId (qlonglong codPostageId) {
  this->codPostageId = codPostageId;
  appParams.insert("cod_postage_id", QString::number(codPostageId));
}

QString ItemUpdateRequest::getDesc() const {
  return desc;
}
void ItemUpdateRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

QString ItemUpdateRequest::getEmptyFields() const {
  return emptyFields;
}
void ItemUpdateRequest::setEmptyFields (QString emptyFields) {
  this->emptyFields = emptyFields;
  appParams.insert("empty_fields", emptyFields);
}

QString ItemUpdateRequest::getEmsFee() const {
  return emsFee;
}
void ItemUpdateRequest::setEmsFee (QString emsFee) {
  this->emsFee = emsFee;
  appParams.insert("ems_fee", emsFee);
}

QString ItemUpdateRequest::getExpressFee() const {
  return expressFee;
}
void ItemUpdateRequest::setExpressFee (QString expressFee) {
  this->expressFee = expressFee;
  appParams.insert("express_fee", expressFee);
}

QString ItemUpdateRequest::getFoodSecurityContact() const {
  return foodSecurityContact;
}
void ItemUpdateRequest::setFoodSecurityContact (QString foodSecurityContact) {
  this->foodSecurityContact = foodSecurityContact;
  appParams.insert("food_security.contact", foodSecurityContact);
}

QString ItemUpdateRequest::getFoodSecurityDesignCode() const {
  return foodSecurityDesignCode;
}
void ItemUpdateRequest::setFoodSecurityDesignCode (QString foodSecurityDesignCode) {
  this->foodSecurityDesignCode = foodSecurityDesignCode;
  appParams.insert("food_security.design_code", foodSecurityDesignCode);
}

QString ItemUpdateRequest::getFoodSecurityFactory() const {
  return foodSecurityFactory;
}
void ItemUpdateRequest::setFoodSecurityFactory (QString foodSecurityFactory) {
  this->foodSecurityFactory = foodSecurityFactory;
  appParams.insert("food_security.factory", foodSecurityFactory);
}

QString ItemUpdateRequest::getFoodSecurityFactorySite() const {
  return foodSecurityFactorySite;
}
void ItemUpdateRequest::setFoodSecurityFactorySite (QString foodSecurityFactorySite) {
  this->foodSecurityFactorySite = foodSecurityFactorySite;
  appParams.insert("food_security.factory_site", foodSecurityFactorySite);
}

QString ItemUpdateRequest::getFoodSecurityFoodAdditive() const {
  return foodSecurityFoodAdditive;
}
void ItemUpdateRequest::setFoodSecurityFoodAdditive (QString foodSecurityFoodAdditive) {
  this->foodSecurityFoodAdditive = foodSecurityFoodAdditive;
  appParams.insert("food_security.food_additive", foodSecurityFoodAdditive);
}

QString ItemUpdateRequest::getFoodSecurityMix() const {
  return foodSecurityMix;
}
void ItemUpdateRequest::setFoodSecurityMix (QString foodSecurityMix) {
  this->foodSecurityMix = foodSecurityMix;
  appParams.insert("food_security.mix", foodSecurityMix);
}

QString ItemUpdateRequest::getFoodSecurityPeriod() const {
  return foodSecurityPeriod;
}
void ItemUpdateRequest::setFoodSecurityPeriod (QString foodSecurityPeriod) {
  this->foodSecurityPeriod = foodSecurityPeriod;
  appParams.insert("food_security.period", foodSecurityPeriod);
}

QString ItemUpdateRequest::getFoodSecurityPlanStorage() const {
  return foodSecurityPlanStorage;
}
void ItemUpdateRequest::setFoodSecurityPlanStorage (QString foodSecurityPlanStorage) {
  this->foodSecurityPlanStorage = foodSecurityPlanStorage;
  appParams.insert("food_security.plan_storage", foodSecurityPlanStorage);
}

QString ItemUpdateRequest::getFoodSecurityPrdLicenseNo() const {
  return foodSecurityPrdLicenseNo;
}
void ItemUpdateRequest::setFoodSecurityPrdLicenseNo (QString foodSecurityPrdLicenseNo) {
  this->foodSecurityPrdLicenseNo = foodSecurityPrdLicenseNo;
  appParams.insert("food_security.prd_license_no", foodSecurityPrdLicenseNo);
}

QString ItemUpdateRequest::getFoodSecurityProductDateEnd() const {
  return foodSecurityProductDateEnd;
}
void ItemUpdateRequest::setFoodSecurityProductDateEnd (QString foodSecurityProductDateEnd) {
  this->foodSecurityProductDateEnd = foodSecurityProductDateEnd;
  appParams.insert("food_security.product_date_end", foodSecurityProductDateEnd);
}

QString ItemUpdateRequest::getFoodSecurityProductDateStart() const {
  return foodSecurityProductDateStart;
}
void ItemUpdateRequest::setFoodSecurityProductDateStart (QString foodSecurityProductDateStart) {
  this->foodSecurityProductDateStart = foodSecurityProductDateStart;
  appParams.insert("food_security.product_date_start", foodSecurityProductDateStart);
}

QString ItemUpdateRequest::getFoodSecurityStockDateEnd() const {
  return foodSecurityStockDateEnd;
}
void ItemUpdateRequest::setFoodSecurityStockDateEnd (QString foodSecurityStockDateEnd) {
  this->foodSecurityStockDateEnd = foodSecurityStockDateEnd;
  appParams.insert("food_security.stock_date_end", foodSecurityStockDateEnd);
}

QString ItemUpdateRequest::getFoodSecurityStockDateStart() const {
  return foodSecurityStockDateStart;
}
void ItemUpdateRequest::setFoodSecurityStockDateStart (QString foodSecurityStockDateStart) {
  this->foodSecurityStockDateStart = foodSecurityStockDateStart;
  appParams.insert("food_security.stock_date_start", foodSecurityStockDateStart);
}

QString ItemUpdateRequest::getFoodSecuritySupplier() const {
  return foodSecuritySupplier;
}
void ItemUpdateRequest::setFoodSecuritySupplier (QString foodSecuritySupplier) {
  this->foodSecuritySupplier = foodSecuritySupplier;
  appParams.insert("food_security.supplier", foodSecuritySupplier);
}

QString ItemUpdateRequest::getFreightPayer() const {
  return freightPayer;
}
void ItemUpdateRequest::setFreightPayer (QString freightPayer) {
  this->freightPayer = freightPayer;
  appParams.insert("freight_payer", freightPayer);
}

QString ItemUpdateRequest::getGlobalStockType() const {
  return globalStockType;
}
void ItemUpdateRequest::setGlobalStockType (QString globalStockType) {
  this->globalStockType = globalStockType;
  appParams.insert("global_stock_type", globalStockType);
}

bool ItemUpdateRequest::getHasDiscount() const {
  return hasDiscount;
}
void ItemUpdateRequest::setHasDiscount (bool hasDiscount) {
  this->hasDiscount = hasDiscount;
  appParams.insert("has_discount", hasDiscount? "true": "false");
}

bool ItemUpdateRequest::getHasInvoice() const {
  return hasInvoice;
}
void ItemUpdateRequest::setHasInvoice (bool hasInvoice) {
  this->hasInvoice = hasInvoice;
  appParams.insert("has_invoice", hasInvoice? "true": "false");
}

bool ItemUpdateRequest::getHasShowcase() const {
  return hasShowcase;
}
void ItemUpdateRequest::setHasShowcase (bool hasShowcase) {
  this->hasShowcase = hasShowcase;
  appParams.insert("has_showcase", hasShowcase? "true": "false");
}

bool ItemUpdateRequest::getHasWarranty() const {
  return hasWarranty;
}
void ItemUpdateRequest::setHasWarranty (bool hasWarranty) {
  this->hasWarranty = hasWarranty;
  appParams.insert("has_warranty", hasWarranty? "true": "false");
}

FileItem ItemUpdateRequest::getImage() const {
  return image;
}
void ItemUpdateRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

QString ItemUpdateRequest::getIncrement() const {
  return increment;
}
void ItemUpdateRequest::setIncrement (QString increment) {
  this->increment = increment;
  appParams.insert("increment", increment);
}

QString ItemUpdateRequest::getInputPids() const {
  return inputPids;
}
void ItemUpdateRequest::setInputPids (QString inputPids) {
  this->inputPids = inputPids;
  appParams.insert("input_pids", inputPids);
}

QString ItemUpdateRequest::getInputStr() const {
  return inputStr;
}
void ItemUpdateRequest::setInputStr (QString inputStr) {
  this->inputStr = inputStr;
  appParams.insert("input_str", inputStr);
}

bool ItemUpdateRequest::getIs3D() const {
  return is3D;
}
void ItemUpdateRequest::setIs3D (bool is3D) {
  this->is3D = is3D;
  appParams.insert("is_3D", is3D? "true": "false");
}

bool ItemUpdateRequest::getIsEx() const {
  return isEx;
}
void ItemUpdateRequest::setIsEx (bool isEx) {
  this->isEx = isEx;
  appParams.insert("is_ex", isEx? "true": "false");
}

bool ItemUpdateRequest::getIsLightningConsignment() const {
  return isLightningConsignment;
}
void ItemUpdateRequest::setIsLightningConsignment (bool isLightningConsignment) {
  this->isLightningConsignment = isLightningConsignment;
  appParams.insert("is_lightning_consignment", isLightningConsignment? "true": "false");
}

bool ItemUpdateRequest::getIsReplaceSku() const {
  return isReplaceSku;
}
void ItemUpdateRequest::setIsReplaceSku (bool isReplaceSku) {
  this->isReplaceSku = isReplaceSku;
  appParams.insert("is_replace_sku", isReplaceSku? "true": "false");
}

bool ItemUpdateRequest::getIsTaobao() const {
  return isTaobao;
}
void ItemUpdateRequest::setIsTaobao (bool isTaobao) {
  this->isTaobao = isTaobao;
  appParams.insert("is_taobao", isTaobao? "true": "false");
}

bool ItemUpdateRequest::getIsXinpin() const {
  return isXinpin;
}
void ItemUpdateRequest::setIsXinpin (bool isXinpin) {
  this->isXinpin = isXinpin;
  appParams.insert("is_xinpin", isXinpin? "true": "false");
}

QString ItemUpdateRequest::getItemSize() const {
  return itemSize;
}
void ItemUpdateRequest::setItemSize (QString itemSize) {
  this->itemSize = itemSize;
  appParams.insert("item_size", itemSize);
}

QString ItemUpdateRequest::getItemWeight() const {
  return itemWeight;
}
void ItemUpdateRequest::setItemWeight (QString itemWeight) {
  this->itemWeight = itemWeight;
  appParams.insert("item_weight", itemWeight);
}

QString ItemUpdateRequest::getLang() const {
  return lang;
}
void ItemUpdateRequest::setLang (QString lang) {
  this->lang = lang;
  appParams.insert("lang", lang);
}

QDateTime ItemUpdateRequest::getListTime() const {
  return listTime;
}
void ItemUpdateRequest::setListTime (QDateTime listTime) {
  this->listTime = listTime;
  appParams.insert("list_time", listTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString ItemUpdateRequest::getLocalityLifeChooseLogis() const {
  return localityLifeChooseLogis;
}
void ItemUpdateRequest::setLocalityLifeChooseLogis (QString localityLifeChooseLogis) {
  this->localityLifeChooseLogis = localityLifeChooseLogis;
  appParams.insert("locality_life.choose_logis", localityLifeChooseLogis);
}

QString ItemUpdateRequest::getLocalityLifeExpirydate() const {
  return localityLifeExpirydate;
}
void ItemUpdateRequest::setLocalityLifeExpirydate (QString localityLifeExpirydate) {
  this->localityLifeExpirydate = localityLifeExpirydate;
  appParams.insert("locality_life.expirydate", localityLifeExpirydate);
}

QString ItemUpdateRequest::getLocalityLifeMerchant() const {
  return localityLifeMerchant;
}
void ItemUpdateRequest::setLocalityLifeMerchant (QString localityLifeMerchant) {
  this->localityLifeMerchant = localityLifeMerchant;
  appParams.insert("locality_life.merchant", localityLifeMerchant);
}

QString ItemUpdateRequest::getLocalityLifeNetworkId() const {
  return localityLifeNetworkId;
}
void ItemUpdateRequest::setLocalityLifeNetworkId (QString localityLifeNetworkId) {
  this->localityLifeNetworkId = localityLifeNetworkId;
  appParams.insert("locality_life.network_id", localityLifeNetworkId);
}

qlonglong ItemUpdateRequest::getLocalityLifeOnsaleAutoRefundRatio() const {
  return localityLifeOnsaleAutoRefundRatio;
}
void ItemUpdateRequest::setLocalityLifeOnsaleAutoRefundRatio (qlonglong localityLifeOnsaleAutoRefundRatio) {
  this->localityLifeOnsaleAutoRefundRatio = localityLifeOnsaleAutoRefundRatio;
  appParams.insert("locality_life.onsale_auto_refund_ratio", QString::number(localityLifeOnsaleAutoRefundRatio));
}

qlonglong ItemUpdateRequest::getLocalityLifeRefundRatio() const {
  return localityLifeRefundRatio;
}
void ItemUpdateRequest::setLocalityLifeRefundRatio (qlonglong localityLifeRefundRatio) {
  this->localityLifeRefundRatio = localityLifeRefundRatio;
  appParams.insert("locality_life.refund_ratio", QString::number(localityLifeRefundRatio));
}

QString ItemUpdateRequest::getLocalityLifeVerification() const {
  return localityLifeVerification;
}
void ItemUpdateRequest::setLocalityLifeVerification (QString localityLifeVerification) {
  this->localityLifeVerification = localityLifeVerification;
  appParams.insert("locality_life.verification", localityLifeVerification);
}

QString ItemUpdateRequest::getLocationCity() const {
  return locationCity;
}
void ItemUpdateRequest::setLocationCity (QString locationCity) {
  this->locationCity = locationCity;
  appParams.insert("location.city", locationCity);
}

QString ItemUpdateRequest::getLocationState() const {
  return locationState;
}
void ItemUpdateRequest::setLocationState (QString locationState) {
  this->locationState = locationState;
  appParams.insert("location.state", locationState);
}

qlonglong ItemUpdateRequest::getNum() const {
  return num;
}
void ItemUpdateRequest::setNum (qlonglong num) {
  this->num = num;
  appParams.insert("num", QString::number(num));
}

qlonglong ItemUpdateRequest::getNumIid() const {
  return numIid;
}
void ItemUpdateRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemUpdateRequest::getOuterId() const {
  return outerId;
}
void ItemUpdateRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

qlonglong ItemUpdateRequest::getPaimaiInfoDeposit() const {
  return paimaiInfoDeposit;
}
void ItemUpdateRequest::setPaimaiInfoDeposit (qlonglong paimaiInfoDeposit) {
  this->paimaiInfoDeposit = paimaiInfoDeposit;
  appParams.insert("paimai_info.deposit", QString::number(paimaiInfoDeposit));
}

qlonglong ItemUpdateRequest::getPaimaiInfoInterval() const {
  return paimaiInfoInterval;
}
void ItemUpdateRequest::setPaimaiInfoInterval (qlonglong paimaiInfoInterval) {
  this->paimaiInfoInterval = paimaiInfoInterval;
  appParams.insert("paimai_info.interval", QString::number(paimaiInfoInterval));
}

qlonglong ItemUpdateRequest::getPaimaiInfoMode() const {
  return paimaiInfoMode;
}
void ItemUpdateRequest::setPaimaiInfoMode (qlonglong paimaiInfoMode) {
  this->paimaiInfoMode = paimaiInfoMode;
  appParams.insert("paimai_info.mode", QString::number(paimaiInfoMode));
}

QString ItemUpdateRequest::getPaimaiInfoReserve() const {
  return paimaiInfoReserve;
}
void ItemUpdateRequest::setPaimaiInfoReserve (QString paimaiInfoReserve) {
  this->paimaiInfoReserve = paimaiInfoReserve;
  appParams.insert("paimai_info.reserve", paimaiInfoReserve);
}

qlonglong ItemUpdateRequest::getPaimaiInfoValidHour() const {
  return paimaiInfoValidHour;
}
void ItemUpdateRequest::setPaimaiInfoValidHour (qlonglong paimaiInfoValidHour) {
  this->paimaiInfoValidHour = paimaiInfoValidHour;
  appParams.insert("paimai_info.valid_hour", QString::number(paimaiInfoValidHour));
}

qlonglong ItemUpdateRequest::getPaimaiInfoValidMinute() const {
  return paimaiInfoValidMinute;
}
void ItemUpdateRequest::setPaimaiInfoValidMinute (qlonglong paimaiInfoValidMinute) {
  this->paimaiInfoValidMinute = paimaiInfoValidMinute;
  appParams.insert("paimai_info.valid_minute", QString::number(paimaiInfoValidMinute));
}

QString ItemUpdateRequest::getPicPath() const {
  return picPath;
}
void ItemUpdateRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

QString ItemUpdateRequest::getPostFee() const {
  return postFee;
}
void ItemUpdateRequest::setPostFee (QString postFee) {
  this->postFee = postFee;
  appParams.insert("post_fee", postFee);
}

qlonglong ItemUpdateRequest::getPostageId() const {
  return postageId;
}
void ItemUpdateRequest::setPostageId (qlonglong postageId) {
  this->postageId = postageId;
  appParams.insert("postage_id", QString::number(postageId));
}

QString ItemUpdateRequest::getPrice() const {
  return price;
}
void ItemUpdateRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

qlonglong ItemUpdateRequest::getProductId() const {
  return productId;
}
void ItemUpdateRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString ItemUpdateRequest::getPropertyAlias() const {
  return propertyAlias;
}
void ItemUpdateRequest::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
  appParams.insert("property_alias", propertyAlias);
}

QString ItemUpdateRequest::getProps() const {
  return props;
}
void ItemUpdateRequest::setProps (QString props) {
  this->props = props;
  appParams.insert("props", props);
}

QString ItemUpdateRequest::getScenicTicketBookCost() const {
  return scenicTicketBookCost;
}
void ItemUpdateRequest::setScenicTicketBookCost (QString scenicTicketBookCost) {
  this->scenicTicketBookCost = scenicTicketBookCost;
  appParams.insert("scenic_ticket_book_cost", scenicTicketBookCost);
}

qlonglong ItemUpdateRequest::getScenicTicketPayWay() const {
  return scenicTicketPayWay;
}
void ItemUpdateRequest::setScenicTicketPayWay (qlonglong scenicTicketPayWay) {
  this->scenicTicketPayWay = scenicTicketPayWay;
  appParams.insert("scenic_ticket_pay_way", QString::number(scenicTicketPayWay));
}

bool ItemUpdateRequest::getSellPromise() const {
  return sellPromise;
}
void ItemUpdateRequest::setSellPromise (bool sellPromise) {
  this->sellPromise = sellPromise;
  appParams.insert("sell_promise", sellPromise? "true": "false");
}

QString ItemUpdateRequest::getSellerCids() const {
  return sellerCids;
}
void ItemUpdateRequest::setSellerCids (QString sellerCids) {
  this->sellerCids = sellerCids;
  appParams.insert("seller_cids", sellerCids);
}

QString ItemUpdateRequest::getSkuOuterIds() const {
  return skuOuterIds;
}
void ItemUpdateRequest::setSkuOuterIds (QString skuOuterIds) {
  this->skuOuterIds = skuOuterIds;
  appParams.insert("sku_outer_ids", skuOuterIds);
}

QString ItemUpdateRequest::getSkuPrices() const {
  return skuPrices;
}
void ItemUpdateRequest::setSkuPrices (QString skuPrices) {
  this->skuPrices = skuPrices;
  appParams.insert("sku_prices", skuPrices);
}

QString ItemUpdateRequest::getSkuProperties() const {
  return skuProperties;
}
void ItemUpdateRequest::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
  appParams.insert("sku_properties", skuProperties);
}

QString ItemUpdateRequest::getSkuQuantities() const {
  return skuQuantities;
}
void ItemUpdateRequest::setSkuQuantities (QString skuQuantities) {
  this->skuQuantities = skuQuantities;
  appParams.insert("sku_quantities", skuQuantities);
}

QString ItemUpdateRequest::getStuffStatus() const {
  return stuffStatus;
}
void ItemUpdateRequest::setStuffStatus (QString stuffStatus) {
  this->stuffStatus = stuffStatus;
  appParams.insert("stuff_status", stuffStatus);
}

qlonglong ItemUpdateRequest::getSubStock() const {
  return subStock;
}
void ItemUpdateRequest::setSubStock (qlonglong subStock) {
  this->subStock = subStock;
  appParams.insert("sub_stock", QString::number(subStock));
}

QString ItemUpdateRequest::getTitle() const {
  return title;
}
void ItemUpdateRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}

qlonglong ItemUpdateRequest::getValidThru() const {
  return validThru;
}
void ItemUpdateRequest::setValidThru (qlonglong validThru) {
  this->validThru = validThru;
  appParams.insert("valid_thru", QString::number(validThru));
}

qlonglong ItemUpdateRequest::getWeight() const {
  return weight;
}
void ItemUpdateRequest::setWeight (qlonglong weight) {
  this->weight = weight;
  appParams.insert("weight", QString::number(weight));
}



ItemUpdateResponse *ItemUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemUpdateResponse *tmpResponse = new ItemUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
