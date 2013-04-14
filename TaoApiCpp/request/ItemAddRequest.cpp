#include <TaoApiCpp/request/ItemAddRequest.h>

QString ItemAddRequest::getApiMethodName() const {
  return "taobao.item.add";
}

qlonglong ItemAddRequest::getAfterSaleId() const {
  return afterSaleId;
}
void ItemAddRequest::setAfterSaleId (qlonglong afterSaleId) {
  this->afterSaleId = afterSaleId;
  appParams.insert("after_sale_id", QString::number(afterSaleId));
}

QString ItemAddRequest::getApproveStatus() const {
  return approveStatus;
}
void ItemAddRequest::setApproveStatus (QString approveStatus) {
  this->approveStatus = approveStatus;
  appParams.insert("approve_status", approveStatus);
}

qlonglong ItemAddRequest::getAuctionPoint() const {
  return auctionPoint;
}
void ItemAddRequest::setAuctionPoint (qlonglong auctionPoint) {
  this->auctionPoint = auctionPoint;
  appParams.insert("auction_point", QString::number(auctionPoint));
}

QString ItemAddRequest::getAutoFill() const {
  return autoFill;
}
void ItemAddRequest::setAutoFill (QString autoFill) {
  this->autoFill = autoFill;
  appParams.insert("auto_fill", autoFill);
}

qlonglong ItemAddRequest::getCid() const {
  return cid;
}
void ItemAddRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

qlonglong ItemAddRequest::getCodPostageId() const {
  return codPostageId;
}
void ItemAddRequest::setCodPostageId (qlonglong codPostageId) {
  this->codPostageId = codPostageId;
  appParams.insert("cod_postage_id", QString::number(codPostageId));
}

QString ItemAddRequest::getDesc() const {
  return desc;
}
void ItemAddRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

QString ItemAddRequest::getEmsFee() const {
  return emsFee;
}
void ItemAddRequest::setEmsFee (QString emsFee) {
  this->emsFee = emsFee;
  appParams.insert("ems_fee", emsFee);
}

QString ItemAddRequest::getExpressFee() const {
  return expressFee;
}
void ItemAddRequest::setExpressFee (QString expressFee) {
  this->expressFee = expressFee;
  appParams.insert("express_fee", expressFee);
}

QString ItemAddRequest::getFoodSecurityContact() const {
  return foodSecurityContact;
}
void ItemAddRequest::setFoodSecurityContact (QString foodSecurityContact) {
  this->foodSecurityContact = foodSecurityContact;
  appParams.insert("food_security.contact", foodSecurityContact);
}

QString ItemAddRequest::getFoodSecurityDesignCode() const {
  return foodSecurityDesignCode;
}
void ItemAddRequest::setFoodSecurityDesignCode (QString foodSecurityDesignCode) {
  this->foodSecurityDesignCode = foodSecurityDesignCode;
  appParams.insert("food_security.design_code", foodSecurityDesignCode);
}

QString ItemAddRequest::getFoodSecurityFactory() const {
  return foodSecurityFactory;
}
void ItemAddRequest::setFoodSecurityFactory (QString foodSecurityFactory) {
  this->foodSecurityFactory = foodSecurityFactory;
  appParams.insert("food_security.factory", foodSecurityFactory);
}

QString ItemAddRequest::getFoodSecurityFactorySite() const {
  return foodSecurityFactorySite;
}
void ItemAddRequest::setFoodSecurityFactorySite (QString foodSecurityFactorySite) {
  this->foodSecurityFactorySite = foodSecurityFactorySite;
  appParams.insert("food_security.factory_site", foodSecurityFactorySite);
}

QString ItemAddRequest::getFoodSecurityFoodAdditive() const {
  return foodSecurityFoodAdditive;
}
void ItemAddRequest::setFoodSecurityFoodAdditive (QString foodSecurityFoodAdditive) {
  this->foodSecurityFoodAdditive = foodSecurityFoodAdditive;
  appParams.insert("food_security.food_additive", foodSecurityFoodAdditive);
}

QString ItemAddRequest::getFoodSecurityMix() const {
  return foodSecurityMix;
}
void ItemAddRequest::setFoodSecurityMix (QString foodSecurityMix) {
  this->foodSecurityMix = foodSecurityMix;
  appParams.insert("food_security.mix", foodSecurityMix);
}

QString ItemAddRequest::getFoodSecurityPeriod() const {
  return foodSecurityPeriod;
}
void ItemAddRequest::setFoodSecurityPeriod (QString foodSecurityPeriod) {
  this->foodSecurityPeriod = foodSecurityPeriod;
  appParams.insert("food_security.period", foodSecurityPeriod);
}

QString ItemAddRequest::getFoodSecurityPlanStorage() const {
  return foodSecurityPlanStorage;
}
void ItemAddRequest::setFoodSecurityPlanStorage (QString foodSecurityPlanStorage) {
  this->foodSecurityPlanStorage = foodSecurityPlanStorage;
  appParams.insert("food_security.plan_storage", foodSecurityPlanStorage);
}

QString ItemAddRequest::getFoodSecurityPrdLicenseNo() const {
  return foodSecurityPrdLicenseNo;
}
void ItemAddRequest::setFoodSecurityPrdLicenseNo (QString foodSecurityPrdLicenseNo) {
  this->foodSecurityPrdLicenseNo = foodSecurityPrdLicenseNo;
  appParams.insert("food_security.prd_license_no", foodSecurityPrdLicenseNo);
}

QString ItemAddRequest::getFoodSecurityProductDateEnd() const {
  return foodSecurityProductDateEnd;
}
void ItemAddRequest::setFoodSecurityProductDateEnd (QString foodSecurityProductDateEnd) {
  this->foodSecurityProductDateEnd = foodSecurityProductDateEnd;
  appParams.insert("food_security.product_date_end", foodSecurityProductDateEnd);
}

QString ItemAddRequest::getFoodSecurityProductDateStart() const {
  return foodSecurityProductDateStart;
}
void ItemAddRequest::setFoodSecurityProductDateStart (QString foodSecurityProductDateStart) {
  this->foodSecurityProductDateStart = foodSecurityProductDateStart;
  appParams.insert("food_security.product_date_start", foodSecurityProductDateStart);
}

QString ItemAddRequest::getFoodSecurityStockDateEnd() const {
  return foodSecurityStockDateEnd;
}
void ItemAddRequest::setFoodSecurityStockDateEnd (QString foodSecurityStockDateEnd) {
  this->foodSecurityStockDateEnd = foodSecurityStockDateEnd;
  appParams.insert("food_security.stock_date_end", foodSecurityStockDateEnd);
}

QString ItemAddRequest::getFoodSecurityStockDateStart() const {
  return foodSecurityStockDateStart;
}
void ItemAddRequest::setFoodSecurityStockDateStart (QString foodSecurityStockDateStart) {
  this->foodSecurityStockDateStart = foodSecurityStockDateStart;
  appParams.insert("food_security.stock_date_start", foodSecurityStockDateStart);
}

QString ItemAddRequest::getFoodSecuritySupplier() const {
  return foodSecuritySupplier;
}
void ItemAddRequest::setFoodSecuritySupplier (QString foodSecuritySupplier) {
  this->foodSecuritySupplier = foodSecuritySupplier;
  appParams.insert("food_security.supplier", foodSecuritySupplier);
}

QString ItemAddRequest::getFreightPayer() const {
  return freightPayer;
}
void ItemAddRequest::setFreightPayer (QString freightPayer) {
  this->freightPayer = freightPayer;
  appParams.insert("freight_payer", freightPayer);
}

QString ItemAddRequest::getGlobalStockType() const {
  return globalStockType;
}
void ItemAddRequest::setGlobalStockType (QString globalStockType) {
  this->globalStockType = globalStockType;
  appParams.insert("global_stock_type", globalStockType);
}

bool ItemAddRequest::getHasDiscount() const {
  return hasDiscount;
}
void ItemAddRequest::setHasDiscount (bool hasDiscount) {
  this->hasDiscount = hasDiscount;
  appParams.insert("has_discount", hasDiscount? "true": "false");
}

bool ItemAddRequest::getHasInvoice() const {
  return hasInvoice;
}
void ItemAddRequest::setHasInvoice (bool hasInvoice) {
  this->hasInvoice = hasInvoice;
  appParams.insert("has_invoice", hasInvoice? "true": "false");
}

bool ItemAddRequest::getHasShowcase() const {
  return hasShowcase;
}
void ItemAddRequest::setHasShowcase (bool hasShowcase) {
  this->hasShowcase = hasShowcase;
  appParams.insert("has_showcase", hasShowcase? "true": "false");
}

bool ItemAddRequest::getHasWarranty() const {
  return hasWarranty;
}
void ItemAddRequest::setHasWarranty (bool hasWarranty) {
  this->hasWarranty = hasWarranty;
  appParams.insert("has_warranty", hasWarranty? "true": "false");
}

FileItem ItemAddRequest::getImage() const {
  return image;
}
void ItemAddRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

QString ItemAddRequest::getIncrement() const {
  return increment;
}
void ItemAddRequest::setIncrement (QString increment) {
  this->increment = increment;
  appParams.insert("increment", increment);
}

QString ItemAddRequest::getInputPids() const {
  return inputPids;
}
void ItemAddRequest::setInputPids (QString inputPids) {
  this->inputPids = inputPids;
  appParams.insert("input_pids", inputPids);
}

QString ItemAddRequest::getInputStr() const {
  return inputStr;
}
void ItemAddRequest::setInputStr (QString inputStr) {
  this->inputStr = inputStr;
  appParams.insert("input_str", inputStr);
}

bool ItemAddRequest::getIs3D() const {
  return is3D;
}
void ItemAddRequest::setIs3D (bool is3D) {
  this->is3D = is3D;
  appParams.insert("is_3D", is3D? "true": "false");
}

bool ItemAddRequest::getIsEx() const {
  return isEx;
}
void ItemAddRequest::setIsEx (bool isEx) {
  this->isEx = isEx;
  appParams.insert("is_ex", isEx? "true": "false");
}

bool ItemAddRequest::getIsLightningConsignment() const {
  return isLightningConsignment;
}
void ItemAddRequest::setIsLightningConsignment (bool isLightningConsignment) {
  this->isLightningConsignment = isLightningConsignment;
  appParams.insert("is_lightning_consignment", isLightningConsignment? "true": "false");
}

bool ItemAddRequest::getIsTaobao() const {
  return isTaobao;
}
void ItemAddRequest::setIsTaobao (bool isTaobao) {
  this->isTaobao = isTaobao;
  appParams.insert("is_taobao", isTaobao? "true": "false");
}

bool ItemAddRequest::getIsXinpin() const {
  return isXinpin;
}
void ItemAddRequest::setIsXinpin (bool isXinpin) {
  this->isXinpin = isXinpin;
  appParams.insert("is_xinpin", isXinpin? "true": "false");
}

QString ItemAddRequest::getItemSize() const {
  return itemSize;
}
void ItemAddRequest::setItemSize (QString itemSize) {
  this->itemSize = itemSize;
  appParams.insert("item_size", itemSize);
}

QString ItemAddRequest::getItemWeight() const {
  return itemWeight;
}
void ItemAddRequest::setItemWeight (QString itemWeight) {
  this->itemWeight = itemWeight;
  appParams.insert("item_weight", itemWeight);
}

QString ItemAddRequest::getLang() const {
  return lang;
}
void ItemAddRequest::setLang (QString lang) {
  this->lang = lang;
  appParams.insert("lang", lang);
}

QDateTime ItemAddRequest::getListTime() const {
  return listTime;
}
void ItemAddRequest::setListTime (QDateTime listTime) {
  this->listTime = listTime;
  appParams.insert("list_time", listTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString ItemAddRequest::getLocalityLifeChooseLogis() const {
  return localityLifeChooseLogis;
}
void ItemAddRequest::setLocalityLifeChooseLogis (QString localityLifeChooseLogis) {
  this->localityLifeChooseLogis = localityLifeChooseLogis;
  appParams.insert("locality_life.choose_logis", localityLifeChooseLogis);
}

QString ItemAddRequest::getLocalityLifeExpirydate() const {
  return localityLifeExpirydate;
}
void ItemAddRequest::setLocalityLifeExpirydate (QString localityLifeExpirydate) {
  this->localityLifeExpirydate = localityLifeExpirydate;
  appParams.insert("locality_life.expirydate", localityLifeExpirydate);
}

QString ItemAddRequest::getLocalityLifeMerchant() const {
  return localityLifeMerchant;
}
void ItemAddRequest::setLocalityLifeMerchant (QString localityLifeMerchant) {
  this->localityLifeMerchant = localityLifeMerchant;
  appParams.insert("locality_life.merchant", localityLifeMerchant);
}

QString ItemAddRequest::getLocalityLifeNetworkId() const {
  return localityLifeNetworkId;
}
void ItemAddRequest::setLocalityLifeNetworkId (QString localityLifeNetworkId) {
  this->localityLifeNetworkId = localityLifeNetworkId;
  appParams.insert("locality_life.network_id", localityLifeNetworkId);
}

qlonglong ItemAddRequest::getLocalityLifeOnsaleAutoRefundRatio() const {
  return localityLifeOnsaleAutoRefundRatio;
}
void ItemAddRequest::setLocalityLifeOnsaleAutoRefundRatio (qlonglong localityLifeOnsaleAutoRefundRatio) {
  this->localityLifeOnsaleAutoRefundRatio = localityLifeOnsaleAutoRefundRatio;
  appParams.insert("locality_life.onsale_auto_refund_ratio", QString::number(localityLifeOnsaleAutoRefundRatio));
}

qlonglong ItemAddRequest::getLocalityLifeRefundRatio() const {
  return localityLifeRefundRatio;
}
void ItemAddRequest::setLocalityLifeRefundRatio (qlonglong localityLifeRefundRatio) {
  this->localityLifeRefundRatio = localityLifeRefundRatio;
  appParams.insert("locality_life.refund_ratio", QString::number(localityLifeRefundRatio));
}

QString ItemAddRequest::getLocalityLifeVerification() const {
  return localityLifeVerification;
}
void ItemAddRequest::setLocalityLifeVerification (QString localityLifeVerification) {
  this->localityLifeVerification = localityLifeVerification;
  appParams.insert("locality_life.verification", localityLifeVerification);
}

QString ItemAddRequest::getLocationCity() const {
  return locationCity;
}
void ItemAddRequest::setLocationCity (QString locationCity) {
  this->locationCity = locationCity;
  appParams.insert("location.city", locationCity);
}

QString ItemAddRequest::getLocationState() const {
  return locationState;
}
void ItemAddRequest::setLocationState (QString locationState) {
  this->locationState = locationState;
  appParams.insert("location.state", locationState);
}

qlonglong ItemAddRequest::getNum() const {
  return num;
}
void ItemAddRequest::setNum (qlonglong num) {
  this->num = num;
  appParams.insert("num", QString::number(num));
}

QString ItemAddRequest::getOuterId() const {
  return outerId;
}
void ItemAddRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

qlonglong ItemAddRequest::getPaimaiInfoDeposit() const {
  return paimaiInfoDeposit;
}
void ItemAddRequest::setPaimaiInfoDeposit (qlonglong paimaiInfoDeposit) {
  this->paimaiInfoDeposit = paimaiInfoDeposit;
  appParams.insert("paimai_info.deposit", QString::number(paimaiInfoDeposit));
}

qlonglong ItemAddRequest::getPaimaiInfoInterval() const {
  return paimaiInfoInterval;
}
void ItemAddRequest::setPaimaiInfoInterval (qlonglong paimaiInfoInterval) {
  this->paimaiInfoInterval = paimaiInfoInterval;
  appParams.insert("paimai_info.interval", QString::number(paimaiInfoInterval));
}

qlonglong ItemAddRequest::getPaimaiInfoMode() const {
  return paimaiInfoMode;
}
void ItemAddRequest::setPaimaiInfoMode (qlonglong paimaiInfoMode) {
  this->paimaiInfoMode = paimaiInfoMode;
  appParams.insert("paimai_info.mode", QString::number(paimaiInfoMode));
}

QString ItemAddRequest::getPaimaiInfoReserve() const {
  return paimaiInfoReserve;
}
void ItemAddRequest::setPaimaiInfoReserve (QString paimaiInfoReserve) {
  this->paimaiInfoReserve = paimaiInfoReserve;
  appParams.insert("paimai_info.reserve", paimaiInfoReserve);
}

qlonglong ItemAddRequest::getPaimaiInfoValidHour() const {
  return paimaiInfoValidHour;
}
void ItemAddRequest::setPaimaiInfoValidHour (qlonglong paimaiInfoValidHour) {
  this->paimaiInfoValidHour = paimaiInfoValidHour;
  appParams.insert("paimai_info.valid_hour", QString::number(paimaiInfoValidHour));
}

qlonglong ItemAddRequest::getPaimaiInfoValidMinute() const {
  return paimaiInfoValidMinute;
}
void ItemAddRequest::setPaimaiInfoValidMinute (qlonglong paimaiInfoValidMinute) {
  this->paimaiInfoValidMinute = paimaiInfoValidMinute;
  appParams.insert("paimai_info.valid_minute", QString::number(paimaiInfoValidMinute));
}

QString ItemAddRequest::getPicPath() const {
  return picPath;
}
void ItemAddRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

QString ItemAddRequest::getPostFee() const {
  return postFee;
}
void ItemAddRequest::setPostFee (QString postFee) {
  this->postFee = postFee;
  appParams.insert("post_fee", postFee);
}

qlonglong ItemAddRequest::getPostageId() const {
  return postageId;
}
void ItemAddRequest::setPostageId (qlonglong postageId) {
  this->postageId = postageId;
  appParams.insert("postage_id", QString::number(postageId));
}

QString ItemAddRequest::getPrice() const {
  return price;
}
void ItemAddRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

qlonglong ItemAddRequest::getProductId() const {
  return productId;
}
void ItemAddRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString ItemAddRequest::getPropertyAlias() const {
  return propertyAlias;
}
void ItemAddRequest::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
  appParams.insert("property_alias", propertyAlias);
}

QString ItemAddRequest::getProps() const {
  return props;
}
void ItemAddRequest::setProps (QString props) {
  this->props = props;
  appParams.insert("props", props);
}

QString ItemAddRequest::getScenicTicketBookCost() const {
  return scenicTicketBookCost;
}
void ItemAddRequest::setScenicTicketBookCost (QString scenicTicketBookCost) {
  this->scenicTicketBookCost = scenicTicketBookCost;
  appParams.insert("scenic_ticket_book_cost", scenicTicketBookCost);
}

qlonglong ItemAddRequest::getScenicTicketPayWay() const {
  return scenicTicketPayWay;
}
void ItemAddRequest::setScenicTicketPayWay (qlonglong scenicTicketPayWay) {
  this->scenicTicketPayWay = scenicTicketPayWay;
  appParams.insert("scenic_ticket_pay_way", QString::number(scenicTicketPayWay));
}

bool ItemAddRequest::getSellPromise() const {
  return sellPromise;
}
void ItemAddRequest::setSellPromise (bool sellPromise) {
  this->sellPromise = sellPromise;
  appParams.insert("sell_promise", sellPromise? "true": "false");
}

QString ItemAddRequest::getSellerCids() const {
  return sellerCids;
}
void ItemAddRequest::setSellerCids (QString sellerCids) {
  this->sellerCids = sellerCids;
  appParams.insert("seller_cids", sellerCids);
}

QString ItemAddRequest::getSkuOuterIds() const {
  return skuOuterIds;
}
void ItemAddRequest::setSkuOuterIds (QString skuOuterIds) {
  this->skuOuterIds = skuOuterIds;
  appParams.insert("sku_outer_ids", skuOuterIds);
}

QString ItemAddRequest::getSkuPrices() const {
  return skuPrices;
}
void ItemAddRequest::setSkuPrices (QString skuPrices) {
  this->skuPrices = skuPrices;
  appParams.insert("sku_prices", skuPrices);
}

QString ItemAddRequest::getSkuProperties() const {
  return skuProperties;
}
void ItemAddRequest::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
  appParams.insert("sku_properties", skuProperties);
}

QString ItemAddRequest::getSkuQuantities() const {
  return skuQuantities;
}
void ItemAddRequest::setSkuQuantities (QString skuQuantities) {
  this->skuQuantities = skuQuantities;
  appParams.insert("sku_quantities", skuQuantities);
}

QString ItemAddRequest::getStuffStatus() const {
  return stuffStatus;
}
void ItemAddRequest::setStuffStatus (QString stuffStatus) {
  this->stuffStatus = stuffStatus;
  appParams.insert("stuff_status", stuffStatus);
}

qlonglong ItemAddRequest::getSubStock() const {
  return subStock;
}
void ItemAddRequest::setSubStock (qlonglong subStock) {
  this->subStock = subStock;
  appParams.insert("sub_stock", QString::number(subStock));
}

QString ItemAddRequest::getTitle() const {
  return title;
}
void ItemAddRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}

QString ItemAddRequest::getType() const {
  return type;
}
void ItemAddRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}

qlonglong ItemAddRequest::getValidThru() const {
  return validThru;
}
void ItemAddRequest::setValidThru (qlonglong validThru) {
  this->validThru = validThru;
  appParams.insert("valid_thru", QString::number(validThru));
}

qlonglong ItemAddRequest::getWeight() const {
  return weight;
}
void ItemAddRequest::setWeight (qlonglong weight) {
  this->weight = weight;
  appParams.insert("weight", QString::number(weight));
}



ItemAddResponse *ItemAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemAddResponse *tmpResponse = new ItemAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
