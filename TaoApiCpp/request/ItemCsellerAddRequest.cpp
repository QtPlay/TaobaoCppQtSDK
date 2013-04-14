#include <TaoApiCpp/request/ItemCsellerAddRequest.h>

QString ItemCsellerAddRequest::getApiMethodName() const {
  return "taobao.item.cseller.add";
}

qlonglong ItemCsellerAddRequest::getAfterSaleId() const {
  return afterSaleId;
}
void ItemCsellerAddRequest::setAfterSaleId (qlonglong afterSaleId) {
  this->afterSaleId = afterSaleId;
  appParams.insert("after_sale_id", QString::number(afterSaleId));
}

QString ItemCsellerAddRequest::getApproveStatus() const {
  return approveStatus;
}
void ItemCsellerAddRequest::setApproveStatus (QString approveStatus) {
  this->approveStatus = approveStatus;
  appParams.insert("approve_status", approveStatus);
}

QString ItemCsellerAddRequest::getAutoFill() const {
  return autoFill;
}
void ItemCsellerAddRequest::setAutoFill (QString autoFill) {
  this->autoFill = autoFill;
  appParams.insert("auto_fill", autoFill);
}

bool ItemCsellerAddRequest::getAutoRepost() const {
  return autoRepost;
}
void ItemCsellerAddRequest::setAutoRepost (bool autoRepost) {
  this->autoRepost = autoRepost;
  appParams.insert("auto_repost", autoRepost? "true": "false");
}

qlonglong ItemCsellerAddRequest::getCid() const {
  return cid;
}
void ItemCsellerAddRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

qlonglong ItemCsellerAddRequest::getCodPostageId() const {
  return codPostageId;
}
void ItemCsellerAddRequest::setCodPostageId (qlonglong codPostageId) {
  this->codPostageId = codPostageId;
  appParams.insert("cod_postage_id", QString::number(codPostageId));
}

QString ItemCsellerAddRequest::getDesc() const {
  return desc;
}
void ItemCsellerAddRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

QString ItemCsellerAddRequest::getEmsFee() const {
  return emsFee;
}
void ItemCsellerAddRequest::setEmsFee (QString emsFee) {
  this->emsFee = emsFee;
  appParams.insert("ems_fee", emsFee);
}

QString ItemCsellerAddRequest::getExpressFee() const {
  return expressFee;
}
void ItemCsellerAddRequest::setExpressFee (QString expressFee) {
  this->expressFee = expressFee;
  appParams.insert("express_fee", expressFee);
}

QString ItemCsellerAddRequest::getFeatures() const {
  return features;
}
void ItemCsellerAddRequest::setFeatures (QString features) {
  this->features = features;
  appParams.insert("features", features);
}

QString ItemCsellerAddRequest::getFreightPayer() const {
  return freightPayer;
}
void ItemCsellerAddRequest::setFreightPayer (QString freightPayer) {
  this->freightPayer = freightPayer;
  appParams.insert("freight_payer", freightPayer);
}

QString ItemCsellerAddRequest::getGlobalStockType() const {
  return globalStockType;
}
void ItemCsellerAddRequest::setGlobalStockType (QString globalStockType) {
  this->globalStockType = globalStockType;
  appParams.insert("global_stock_type", globalStockType);
}

bool ItemCsellerAddRequest::getHasDiscount() const {
  return hasDiscount;
}
void ItemCsellerAddRequest::setHasDiscount (bool hasDiscount) {
  this->hasDiscount = hasDiscount;
  appParams.insert("has_discount", hasDiscount? "true": "false");
}

bool ItemCsellerAddRequest::getHasInvoice() const {
  return hasInvoice;
}
void ItemCsellerAddRequest::setHasInvoice (bool hasInvoice) {
  this->hasInvoice = hasInvoice;
  appParams.insert("has_invoice", hasInvoice? "true": "false");
}

bool ItemCsellerAddRequest::getHasShowcase() const {
  return hasShowcase;
}
void ItemCsellerAddRequest::setHasShowcase (bool hasShowcase) {
  this->hasShowcase = hasShowcase;
  appParams.insert("has_showcase", hasShowcase? "true": "false");
}

bool ItemCsellerAddRequest::getHasWarranty() const {
  return hasWarranty;
}
void ItemCsellerAddRequest::setHasWarranty (bool hasWarranty) {
  this->hasWarranty = hasWarranty;
  appParams.insert("has_warranty", hasWarranty? "true": "false");
}

QString ItemCsellerAddRequest::getIncrement() const {
  return increment;
}
void ItemCsellerAddRequest::setIncrement (QString increment) {
  this->increment = increment;
  appParams.insert("increment", increment);
}

qlonglong ItemCsellerAddRequest::getInnerShopAuctionTemplateId() const {
  return innerShopAuctionTemplateId;
}
void ItemCsellerAddRequest::setInnerShopAuctionTemplateId (qlonglong innerShopAuctionTemplateId) {
  this->innerShopAuctionTemplateId = innerShopAuctionTemplateId;
  appParams.insert("inner_shop_auction_template_id", QString::number(innerShopAuctionTemplateId));
}

QString ItemCsellerAddRequest::getInputPids() const {
  return inputPids;
}
void ItemCsellerAddRequest::setInputPids (QString inputPids) {
  this->inputPids = inputPids;
  appParams.insert("input_pids", inputPids);
}

QString ItemCsellerAddRequest::getInputStr() const {
  return inputStr;
}
void ItemCsellerAddRequest::setInputStr (QString inputStr) {
  this->inputStr = inputStr;
  appParams.insert("input_str", inputStr);
}

bool ItemCsellerAddRequest::getIs3D() const {
  return is3D;
}
void ItemCsellerAddRequest::setIs3D (bool is3D) {
  this->is3D = is3D;
  appParams.insert("is_3D", is3D? "true": "false");
}

bool ItemCsellerAddRequest::getIsEx() const {
  return isEx;
}
void ItemCsellerAddRequest::setIsEx (bool isEx) {
  this->isEx = isEx;
  appParams.insert("is_ex", isEx? "true": "false");
}

bool ItemCsellerAddRequest::getIsLightningConsignment() const {
  return isLightningConsignment;
}
void ItemCsellerAddRequest::setIsLightningConsignment (bool isLightningConsignment) {
  this->isLightningConsignment = isLightningConsignment;
  appParams.insert("is_lightning_consignment", isLightningConsignment? "true": "false");
}

bool ItemCsellerAddRequest::getIsTaobao() const {
  return isTaobao;
}
void ItemCsellerAddRequest::setIsTaobao (bool isTaobao) {
  this->isTaobao = isTaobao;
  appParams.insert("is_taobao", isTaobao? "true": "false");
}

bool ItemCsellerAddRequest::getIsXinpin() const {
  return isXinpin;
}
void ItemCsellerAddRequest::setIsXinpin (bool isXinpin) {
  this->isXinpin = isXinpin;
  appParams.insert("is_xinpin", isXinpin? "true": "false");
}

QString ItemCsellerAddRequest::getItemSize() const {
  return itemSize;
}
void ItemCsellerAddRequest::setItemSize (QString itemSize) {
  this->itemSize = itemSize;
  appParams.insert("item_size", itemSize);
}

QString ItemCsellerAddRequest::getItemSpecProp() const {
  return itemSpecProp;
}
void ItemCsellerAddRequest::setItemSpecProp (QString itemSpecProp) {
  this->itemSpecProp = itemSpecProp;
  appParams.insert("item_spec_prop", itemSpecProp);
}

QString ItemCsellerAddRequest::getItemWeight() const {
  return itemWeight;
}
void ItemCsellerAddRequest::setItemWeight (QString itemWeight) {
  this->itemWeight = itemWeight;
  appParams.insert("item_weight", itemWeight);
}

QString ItemCsellerAddRequest::getLang() const {
  return lang;
}
void ItemCsellerAddRequest::setLang (QString lang) {
  this->lang = lang;
  appParams.insert("lang", lang);
}

QDateTime ItemCsellerAddRequest::getListTime() const {
  return listTime;
}
void ItemCsellerAddRequest::setListTime (QDateTime listTime) {
  this->listTime = listTime;
  appParams.insert("list_time", listTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString ItemCsellerAddRequest::getLocalityLifeChooseLogis() const {
  return localityLifeChooseLogis;
}
void ItemCsellerAddRequest::setLocalityLifeChooseLogis (QString localityLifeChooseLogis) {
  this->localityLifeChooseLogis = localityLifeChooseLogis;
  appParams.insert("locality_life.choose_logis", localityLifeChooseLogis);
}

QString ItemCsellerAddRequest::getLocalityLifeExpirydate() const {
  return localityLifeExpirydate;
}
void ItemCsellerAddRequest::setLocalityLifeExpirydate (QString localityLifeExpirydate) {
  this->localityLifeExpirydate = localityLifeExpirydate;
  appParams.insert("locality_life.expirydate", localityLifeExpirydate);
}

QString ItemCsellerAddRequest::getLocalityLifeMerchant() const {
  return localityLifeMerchant;
}
void ItemCsellerAddRequest::setLocalityLifeMerchant (QString localityLifeMerchant) {
  this->localityLifeMerchant = localityLifeMerchant;
  appParams.insert("locality_life.merchant", localityLifeMerchant);
}

QString ItemCsellerAddRequest::getLocalityLifeNetworkId() const {
  return localityLifeNetworkId;
}
void ItemCsellerAddRequest::setLocalityLifeNetworkId (QString localityLifeNetworkId) {
  this->localityLifeNetworkId = localityLifeNetworkId;
  appParams.insert("locality_life.network_id", localityLifeNetworkId);
}

qlonglong ItemCsellerAddRequest::getLocalityLifeOnsaleAutoRefundRatio() const {
  return localityLifeOnsaleAutoRefundRatio;
}
void ItemCsellerAddRequest::setLocalityLifeOnsaleAutoRefundRatio (qlonglong localityLifeOnsaleAutoRefundRatio) {
  this->localityLifeOnsaleAutoRefundRatio = localityLifeOnsaleAutoRefundRatio;
  appParams.insert("locality_life.onsale_auto_refund_ratio", QString::number(localityLifeOnsaleAutoRefundRatio));
}

qlonglong ItemCsellerAddRequest::getLocalityLifeRefundRatio() const {
  return localityLifeRefundRatio;
}
void ItemCsellerAddRequest::setLocalityLifeRefundRatio (qlonglong localityLifeRefundRatio) {
  this->localityLifeRefundRatio = localityLifeRefundRatio;
  appParams.insert("locality_life.refund_ratio", QString::number(localityLifeRefundRatio));
}

QString ItemCsellerAddRequest::getLocalityLifeVerification() const {
  return localityLifeVerification;
}
void ItemCsellerAddRequest::setLocalityLifeVerification (QString localityLifeVerification) {
  this->localityLifeVerification = localityLifeVerification;
  appParams.insert("locality_life.verification", localityLifeVerification);
}

QString ItemCsellerAddRequest::getLocationCity() const {
  return locationCity;
}
void ItemCsellerAddRequest::setLocationCity (QString locationCity) {
  this->locationCity = locationCity;
  appParams.insert("location.city", locationCity);
}

QString ItemCsellerAddRequest::getLocationState() const {
  return locationState;
}
void ItemCsellerAddRequest::setLocationState (QString locationState) {
  this->locationState = locationState;
  appParams.insert("location.state", locationState);
}

qlonglong ItemCsellerAddRequest::getNum() const {
  return num;
}
void ItemCsellerAddRequest::setNum (qlonglong num) {
  this->num = num;
  appParams.insert("num", QString::number(num));
}

QString ItemCsellerAddRequest::getOuterId() const {
  return outerId;
}
void ItemCsellerAddRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

qlonglong ItemCsellerAddRequest::getOuterShopAuctionTemplateId() const {
  return outerShopAuctionTemplateId;
}
void ItemCsellerAddRequest::setOuterShopAuctionTemplateId (qlonglong outerShopAuctionTemplateId) {
  this->outerShopAuctionTemplateId = outerShopAuctionTemplateId;
  appParams.insert("outer_shop_auction_template_id", QString::number(outerShopAuctionTemplateId));
}

QString ItemCsellerAddRequest::getPicPath() const {
  return picPath;
}
void ItemCsellerAddRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

QString ItemCsellerAddRequest::getPostFee() const {
  return postFee;
}
void ItemCsellerAddRequest::setPostFee (QString postFee) {
  this->postFee = postFee;
  appParams.insert("post_fee", postFee);
}

qlonglong ItemCsellerAddRequest::getPostageId() const {
  return postageId;
}
void ItemCsellerAddRequest::setPostageId (qlonglong postageId) {
  this->postageId = postageId;
  appParams.insert("postage_id", QString::number(postageId));
}

QString ItemCsellerAddRequest::getPrice() const {
  return price;
}
void ItemCsellerAddRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

QString ItemCsellerAddRequest::getPropertyAlias() const {
  return propertyAlias;
}
void ItemCsellerAddRequest::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
  appParams.insert("property_alias", propertyAlias);
}

QString ItemCsellerAddRequest::getProps() const {
  return props;
}
void ItemCsellerAddRequest::setProps (QString props) {
  this->props = props;
  appParams.insert("props", props);
}

QString ItemCsellerAddRequest::getSecondKill() const {
  return secondKill;
}
void ItemCsellerAddRequest::setSecondKill (QString secondKill) {
  this->secondKill = secondKill;
  appParams.insert("second_kill", secondKill);
}

bool ItemCsellerAddRequest::getSellPromise() const {
  return sellPromise;
}
void ItemCsellerAddRequest::setSellPromise (bool sellPromise) {
  this->sellPromise = sellPromise;
  appParams.insert("sell_promise", sellPromise? "true": "false");
}

QString ItemCsellerAddRequest::getSellerCids() const {
  return sellerCids;
}
void ItemCsellerAddRequest::setSellerCids (QString sellerCids) {
  this->sellerCids = sellerCids;
  appParams.insert("seller_cids", sellerCids);
}

QString ItemCsellerAddRequest::getSkuOuterIds() const {
  return skuOuterIds;
}
void ItemCsellerAddRequest::setSkuOuterIds (QString skuOuterIds) {
  this->skuOuterIds = skuOuterIds;
  appParams.insert("sku_outer_ids", skuOuterIds);
}

QString ItemCsellerAddRequest::getSkuPrices() const {
  return skuPrices;
}
void ItemCsellerAddRequest::setSkuPrices (QString skuPrices) {
  this->skuPrices = skuPrices;
  appParams.insert("sku_prices", skuPrices);
}

QString ItemCsellerAddRequest::getSkuProperties() const {
  return skuProperties;
}
void ItemCsellerAddRequest::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
  appParams.insert("sku_properties", skuProperties);
}

QString ItemCsellerAddRequest::getSkuQuantities() const {
  return skuQuantities;
}
void ItemCsellerAddRequest::setSkuQuantities (QString skuQuantities) {
  this->skuQuantities = skuQuantities;
  appParams.insert("sku_quantities", skuQuantities);
}

QString ItemCsellerAddRequest::getSkuSpecIds() const {
  return skuSpecIds;
}
void ItemCsellerAddRequest::setSkuSpecIds (QString skuSpecIds) {
  this->skuSpecIds = skuSpecIds;
  appParams.insert("sku_spec_ids", skuSpecIds);
}

QString ItemCsellerAddRequest::getStuffStatus() const {
  return stuffStatus;
}
void ItemCsellerAddRequest::setStuffStatus (QString stuffStatus) {
  this->stuffStatus = stuffStatus;
  appParams.insert("stuff_status", stuffStatus);
}

QString ItemCsellerAddRequest::getSubPicPaths() const {
  return subPicPaths;
}
void ItemCsellerAddRequest::setSubPicPaths (QString subPicPaths) {
  this->subPicPaths = subPicPaths;
  appParams.insert("sub_pic_paths", subPicPaths);
}

qlonglong ItemCsellerAddRequest::getSubStock() const {
  return subStock;
}
void ItemCsellerAddRequest::setSubStock (qlonglong subStock) {
  this->subStock = subStock;
  appParams.insert("sub_stock", QString::number(subStock));
}

QString ItemCsellerAddRequest::getTitle() const {
  return title;
}
void ItemCsellerAddRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}

QString ItemCsellerAddRequest::getType() const {
  return type;
}
void ItemCsellerAddRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}

qlonglong ItemCsellerAddRequest::getValidThru() const {
  return validThru;
}
void ItemCsellerAddRequest::setValidThru (qlonglong validThru) {
  this->validThru = validThru;
  appParams.insert("valid_thru", QString::number(validThru));
}

qlonglong ItemCsellerAddRequest::getWeight() const {
  return weight;
}
void ItemCsellerAddRequest::setWeight (qlonglong weight) {
  this->weight = weight;
  appParams.insert("weight", QString::number(weight));
}



ItemCsellerAddResponse *ItemCsellerAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemCsellerAddResponse *tmpResponse = new ItemCsellerAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
