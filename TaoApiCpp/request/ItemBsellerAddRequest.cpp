#include <TaoApiCpp/request/ItemBsellerAddRequest.h>

QString ItemBsellerAddRequest::getApiMethodName() const {
  return "taobao.item.bseller.add";
}

qlonglong ItemBsellerAddRequest::getAfterSaleId() const {
  return afterSaleId;
}
void ItemBsellerAddRequest::setAfterSaleId (qlonglong afterSaleId) {
  this->afterSaleId = afterSaleId;
  appParams.insert("after_sale_id", QString::number(afterSaleId));
}

QString ItemBsellerAddRequest::getApproveStatus() const {
  return approveStatus;
}
void ItemBsellerAddRequest::setApproveStatus (QString approveStatus) {
  this->approveStatus = approveStatus;
  appParams.insert("approve_status", approveStatus);
}

qlonglong ItemBsellerAddRequest::getAuctionPoint() const {
  return auctionPoint;
}
void ItemBsellerAddRequest::setAuctionPoint (qlonglong auctionPoint) {
  this->auctionPoint = auctionPoint;
  appParams.insert("auction_point", QString::number(auctionPoint));
}

QString ItemBsellerAddRequest::getAutoFill() const {
  return autoFill;
}
void ItemBsellerAddRequest::setAutoFill (QString autoFill) {
  this->autoFill = autoFill;
  appParams.insert("auto_fill", autoFill);
}

bool ItemBsellerAddRequest::getAutoRepost() const {
  return autoRepost;
}
void ItemBsellerAddRequest::setAutoRepost (bool autoRepost) {
  this->autoRepost = autoRepost;
  appParams.insert("auto_repost", autoRepost? "true": "false");
}

qlonglong ItemBsellerAddRequest::getCid() const {
  return cid;
}
void ItemBsellerAddRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

qlonglong ItemBsellerAddRequest::getCodPostageId() const {
  return codPostageId;
}
void ItemBsellerAddRequest::setCodPostageId (qlonglong codPostageId) {
  this->codPostageId = codPostageId;
  appParams.insert("cod_postage_id", QString::number(codPostageId));
}

QString ItemBsellerAddRequest::getColorPropAndPicUrls() const {
  return colorPropAndPicUrls;
}
void ItemBsellerAddRequest::setColorPropAndPicUrls (QString colorPropAndPicUrls) {
  this->colorPropAndPicUrls = colorPropAndPicUrls;
  appParams.insert("color_prop_and_pic_urls", colorPropAndPicUrls);
}

QString ItemBsellerAddRequest::getDesc() const {
  return desc;
}
void ItemBsellerAddRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

QString ItemBsellerAddRequest::getEmsFee() const {
  return emsFee;
}
void ItemBsellerAddRequest::setEmsFee (QString emsFee) {
  this->emsFee = emsFee;
  appParams.insert("ems_fee", emsFee);
}

QString ItemBsellerAddRequest::getExpressFee() const {
  return expressFee;
}
void ItemBsellerAddRequest::setExpressFee (QString expressFee) {
  this->expressFee = expressFee;
  appParams.insert("express_fee", expressFee);
}

QString ItemBsellerAddRequest::getFeatures() const {
  return features;
}
void ItemBsellerAddRequest::setFeatures (QString features) {
  this->features = features;
  appParams.insert("features", features);
}

QString ItemBsellerAddRequest::getFreightPayer() const {
  return freightPayer;
}
void ItemBsellerAddRequest::setFreightPayer (QString freightPayer) {
  this->freightPayer = freightPayer;
  appParams.insert("freight_payer", freightPayer);
}

QString ItemBsellerAddRequest::getGlobalStockType() const {
  return globalStockType;
}
void ItemBsellerAddRequest::setGlobalStockType (QString globalStockType) {
  this->globalStockType = globalStockType;
  appParams.insert("global_stock_type", globalStockType);
}

bool ItemBsellerAddRequest::getHasDiscount() const {
  return hasDiscount;
}
void ItemBsellerAddRequest::setHasDiscount (bool hasDiscount) {
  this->hasDiscount = hasDiscount;
  appParams.insert("has_discount", hasDiscount? "true": "false");
}

bool ItemBsellerAddRequest::getHasInvoice() const {
  return hasInvoice;
}
void ItemBsellerAddRequest::setHasInvoice (bool hasInvoice) {
  this->hasInvoice = hasInvoice;
  appParams.insert("has_invoice", hasInvoice? "true": "false");
}

bool ItemBsellerAddRequest::getHasShowcase() const {
  return hasShowcase;
}
void ItemBsellerAddRequest::setHasShowcase (bool hasShowcase) {
  this->hasShowcase = hasShowcase;
  appParams.insert("has_showcase", hasShowcase? "true": "false");
}

bool ItemBsellerAddRequest::getHasWarranty() const {
  return hasWarranty;
}
void ItemBsellerAddRequest::setHasWarranty (bool hasWarranty) {
  this->hasWarranty = hasWarranty;
  appParams.insert("has_warranty", hasWarranty? "true": "false");
}

QString ItemBsellerAddRequest::getIncrement() const {
  return increment;
}
void ItemBsellerAddRequest::setIncrement (QString increment) {
  this->increment = increment;
  appParams.insert("increment", increment);
}

qlonglong ItemBsellerAddRequest::getInnerShopAuctionTemplateId() const {
  return innerShopAuctionTemplateId;
}
void ItemBsellerAddRequest::setInnerShopAuctionTemplateId (qlonglong innerShopAuctionTemplateId) {
  this->innerShopAuctionTemplateId = innerShopAuctionTemplateId;
  appParams.insert("inner_shop_auction_template_id", QString::number(innerShopAuctionTemplateId));
}

QString ItemBsellerAddRequest::getInputPids() const {
  return inputPids;
}
void ItemBsellerAddRequest::setInputPids (QString inputPids) {
  this->inputPids = inputPids;
  appParams.insert("input_pids", inputPids);
}

QString ItemBsellerAddRequest::getInputStr() const {
  return inputStr;
}
void ItemBsellerAddRequest::setInputStr (QString inputStr) {
  this->inputStr = inputStr;
  appParams.insert("input_str", inputStr);
}

bool ItemBsellerAddRequest::getIs3D() const {
  return is3D;
}
void ItemBsellerAddRequest::setIs3D (bool is3D) {
  this->is3D = is3D;
  appParams.insert("is_3D", is3D? "true": "false");
}

bool ItemBsellerAddRequest::getIsEx() const {
  return isEx;
}
void ItemBsellerAddRequest::setIsEx (bool isEx) {
  this->isEx = isEx;
  appParams.insert("is_ex", isEx? "true": "false");
}

bool ItemBsellerAddRequest::getIsLightningConsignment() const {
  return isLightningConsignment;
}
void ItemBsellerAddRequest::setIsLightningConsignment (bool isLightningConsignment) {
  this->isLightningConsignment = isLightningConsignment;
  appParams.insert("is_lightning_consignment", isLightningConsignment? "true": "false");
}

bool ItemBsellerAddRequest::getIsTaobao() const {
  return isTaobao;
}
void ItemBsellerAddRequest::setIsTaobao (bool isTaobao) {
  this->isTaobao = isTaobao;
  appParams.insert("is_taobao", isTaobao? "true": "false");
}

bool ItemBsellerAddRequest::getIsXinpin() const {
  return isXinpin;
}
void ItemBsellerAddRequest::setIsXinpin (bool isXinpin) {
  this->isXinpin = isXinpin;
  appParams.insert("is_xinpin", isXinpin? "true": "false");
}

QString ItemBsellerAddRequest::getItemSize() const {
  return itemSize;
}
void ItemBsellerAddRequest::setItemSize (QString itemSize) {
  this->itemSize = itemSize;
  appParams.insert("item_size", itemSize);
}

QString ItemBsellerAddRequest::getItemSpecProp() const {
  return itemSpecProp;
}
void ItemBsellerAddRequest::setItemSpecProp (QString itemSpecProp) {
  this->itemSpecProp = itemSpecProp;
  appParams.insert("item_spec_prop", itemSpecProp);
}

QString ItemBsellerAddRequest::getItemWeight() const {
  return itemWeight;
}
void ItemBsellerAddRequest::setItemWeight (QString itemWeight) {
  this->itemWeight = itemWeight;
  appParams.insert("item_weight", itemWeight);
}

QString ItemBsellerAddRequest::getLang() const {
  return lang;
}
void ItemBsellerAddRequest::setLang (QString lang) {
  this->lang = lang;
  appParams.insert("lang", lang);
}

QDateTime ItemBsellerAddRequest::getListTime() const {
  return listTime;
}
void ItemBsellerAddRequest::setListTime (QDateTime listTime) {
  this->listTime = listTime;
  appParams.insert("list_time", listTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString ItemBsellerAddRequest::getLocalityLifeChooseLogis() const {
  return localityLifeChooseLogis;
}
void ItemBsellerAddRequest::setLocalityLifeChooseLogis (QString localityLifeChooseLogis) {
  this->localityLifeChooseLogis = localityLifeChooseLogis;
  appParams.insert("locality_life.choose_logis", localityLifeChooseLogis);
}

QString ItemBsellerAddRequest::getLocalityLifeExpirydate() const {
  return localityLifeExpirydate;
}
void ItemBsellerAddRequest::setLocalityLifeExpirydate (QString localityLifeExpirydate) {
  this->localityLifeExpirydate = localityLifeExpirydate;
  appParams.insert("locality_life.expirydate", localityLifeExpirydate);
}

QString ItemBsellerAddRequest::getLocalityLifeMerchant() const {
  return localityLifeMerchant;
}
void ItemBsellerAddRequest::setLocalityLifeMerchant (QString localityLifeMerchant) {
  this->localityLifeMerchant = localityLifeMerchant;
  appParams.insert("locality_life.merchant", localityLifeMerchant);
}

QString ItemBsellerAddRequest::getLocalityLifeNetworkId() const {
  return localityLifeNetworkId;
}
void ItemBsellerAddRequest::setLocalityLifeNetworkId (QString localityLifeNetworkId) {
  this->localityLifeNetworkId = localityLifeNetworkId;
  appParams.insert("locality_life.network_id", localityLifeNetworkId);
}

qlonglong ItemBsellerAddRequest::getLocalityLifeOnsaleAutoRefundRatio() const {
  return localityLifeOnsaleAutoRefundRatio;
}
void ItemBsellerAddRequest::setLocalityLifeOnsaleAutoRefundRatio (qlonglong localityLifeOnsaleAutoRefundRatio) {
  this->localityLifeOnsaleAutoRefundRatio = localityLifeOnsaleAutoRefundRatio;
  appParams.insert("locality_life.onsale_auto_refund_ratio", QString::number(localityLifeOnsaleAutoRefundRatio));
}

qlonglong ItemBsellerAddRequest::getLocalityLifeRefundRatio() const {
  return localityLifeRefundRatio;
}
void ItemBsellerAddRequest::setLocalityLifeRefundRatio (qlonglong localityLifeRefundRatio) {
  this->localityLifeRefundRatio = localityLifeRefundRatio;
  appParams.insert("locality_life.refund_ratio", QString::number(localityLifeRefundRatio));
}

QString ItemBsellerAddRequest::getLocalityLifeVerification() const {
  return localityLifeVerification;
}
void ItemBsellerAddRequest::setLocalityLifeVerification (QString localityLifeVerification) {
  this->localityLifeVerification = localityLifeVerification;
  appParams.insert("locality_life.verification", localityLifeVerification);
}

QString ItemBsellerAddRequest::getLocationCity() const {
  return locationCity;
}
void ItemBsellerAddRequest::setLocationCity (QString locationCity) {
  this->locationCity = locationCity;
  appParams.insert("location.city", locationCity);
}

QString ItemBsellerAddRequest::getLocationState() const {
  return locationState;
}
void ItemBsellerAddRequest::setLocationState (QString locationState) {
  this->locationState = locationState;
  appParams.insert("location.state", locationState);
}

qlonglong ItemBsellerAddRequest::getNum() const {
  return num;
}
void ItemBsellerAddRequest::setNum (qlonglong num) {
  this->num = num;
  appParams.insert("num", QString::number(num));
}

QString ItemBsellerAddRequest::getOuterId() const {
  return outerId;
}
void ItemBsellerAddRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

qlonglong ItemBsellerAddRequest::getOuterShopAuctionTemplateId() const {
  return outerShopAuctionTemplateId;
}
void ItemBsellerAddRequest::setOuterShopAuctionTemplateId (qlonglong outerShopAuctionTemplateId) {
  this->outerShopAuctionTemplateId = outerShopAuctionTemplateId;
  appParams.insert("outer_shop_auction_template_id", QString::number(outerShopAuctionTemplateId));
}

QString ItemBsellerAddRequest::getPicUrl() const {
  return picUrl;
}
void ItemBsellerAddRequest::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
  appParams.insert("pic_url", picUrl);
}

QString ItemBsellerAddRequest::getPostFee() const {
  return postFee;
}
void ItemBsellerAddRequest::setPostFee (QString postFee) {
  this->postFee = postFee;
  appParams.insert("post_fee", postFee);
}

qlonglong ItemBsellerAddRequest::getPostageId() const {
  return postageId;
}
void ItemBsellerAddRequest::setPostageId (qlonglong postageId) {
  this->postageId = postageId;
  appParams.insert("postage_id", QString::number(postageId));
}

QString ItemBsellerAddRequest::getPrice() const {
  return price;
}
void ItemBsellerAddRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

qlonglong ItemBsellerAddRequest::getProductId() const {
  return productId;
}
void ItemBsellerAddRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString ItemBsellerAddRequest::getPropertyAlias() const {
  return propertyAlias;
}
void ItemBsellerAddRequest::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
  appParams.insert("property_alias", propertyAlias);
}

QString ItemBsellerAddRequest::getProps() const {
  return props;
}
void ItemBsellerAddRequest::setProps (QString props) {
  this->props = props;
  appParams.insert("props", props);
}

QString ItemBsellerAddRequest::getSecondKill() const {
  return secondKill;
}
void ItemBsellerAddRequest::setSecondKill (QString secondKill) {
  this->secondKill = secondKill;
  appParams.insert("second_kill", secondKill);
}

bool ItemBsellerAddRequest::getSellPromise() const {
  return sellPromise;
}
void ItemBsellerAddRequest::setSellPromise (bool sellPromise) {
  this->sellPromise = sellPromise;
  appParams.insert("sell_promise", sellPromise? "true": "false");
}

QString ItemBsellerAddRequest::getSellerCids() const {
  return sellerCids;
}
void ItemBsellerAddRequest::setSellerCids (QString sellerCids) {
  this->sellerCids = sellerCids;
  appParams.insert("seller_cids", sellerCids);
}

QString ItemBsellerAddRequest::getSkuOuterIds() const {
  return skuOuterIds;
}
void ItemBsellerAddRequest::setSkuOuterIds (QString skuOuterIds) {
  this->skuOuterIds = skuOuterIds;
  appParams.insert("sku_outer_ids", skuOuterIds);
}

QString ItemBsellerAddRequest::getSkuPrices() const {
  return skuPrices;
}
void ItemBsellerAddRequest::setSkuPrices (QString skuPrices) {
  this->skuPrices = skuPrices;
  appParams.insert("sku_prices", skuPrices);
}

QString ItemBsellerAddRequest::getSkuProperties() const {
  return skuProperties;
}
void ItemBsellerAddRequest::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
  appParams.insert("sku_properties", skuProperties);
}

QString ItemBsellerAddRequest::getSkuQuantities() const {
  return skuQuantities;
}
void ItemBsellerAddRequest::setSkuQuantities (QString skuQuantities) {
  this->skuQuantities = skuQuantities;
  appParams.insert("sku_quantities", skuQuantities);
}

QString ItemBsellerAddRequest::getSkuSpecIds() const {
  return skuSpecIds;
}
void ItemBsellerAddRequest::setSkuSpecIds (QString skuSpecIds) {
  this->skuSpecIds = skuSpecIds;
  appParams.insert("sku_spec_ids", skuSpecIds);
}

QString ItemBsellerAddRequest::getStuffStatus() const {
  return stuffStatus;
}
void ItemBsellerAddRequest::setStuffStatus (QString stuffStatus) {
  this->stuffStatus = stuffStatus;
  appParams.insert("stuff_status", stuffStatus);
}

QString ItemBsellerAddRequest::getSubPicUrls() const {
  return subPicUrls;
}
void ItemBsellerAddRequest::setSubPicUrls (QString subPicUrls) {
  this->subPicUrls = subPicUrls;
  appParams.insert("sub_pic_urls", subPicUrls);
}

qlonglong ItemBsellerAddRequest::getSubStock() const {
  return subStock;
}
void ItemBsellerAddRequest::setSubStock (qlonglong subStock) {
  this->subStock = subStock;
  appParams.insert("sub_stock", QString::number(subStock));
}

QString ItemBsellerAddRequest::getTitle() const {
  return title;
}
void ItemBsellerAddRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}

QString ItemBsellerAddRequest::getType() const {
  return type;
}
void ItemBsellerAddRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}

qlonglong ItemBsellerAddRequest::getValidThru() const {
  return validThru;
}
void ItemBsellerAddRequest::setValidThru (qlonglong validThru) {
  this->validThru = validThru;
  appParams.insert("valid_thru", QString::number(validThru));
}

qlonglong ItemBsellerAddRequest::getWeight() const {
  return weight;
}
void ItemBsellerAddRequest::setWeight (qlonglong weight) {
  this->weight = weight;
  appParams.insert("weight", QString::number(weight));
}



ItemBsellerAddResponse *ItemBsellerAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemBsellerAddResponse *tmpResponse = new ItemBsellerAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
