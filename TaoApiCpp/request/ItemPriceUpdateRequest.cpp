#include <TaoApiCpp/request/ItemPriceUpdateRequest.h>

QString ItemPriceUpdateRequest::getApiMethodName() const {
  return "taobao.item.price.update";
}

qlonglong ItemPriceUpdateRequest::getAfterSaleId() const {
  return afterSaleId;
}
void ItemPriceUpdateRequest::setAfterSaleId (qlonglong afterSaleId) {
  this->afterSaleId = afterSaleId;
  appParams.insert("after_sale_id", QString::number(afterSaleId));
}

QString ItemPriceUpdateRequest::getApproveStatus() const {
  return approveStatus;
}
void ItemPriceUpdateRequest::setApproveStatus (QString approveStatus) {
  this->approveStatus = approveStatus;
  appParams.insert("approve_status", approveStatus);
}

qlonglong ItemPriceUpdateRequest::getAuctionPoint() const {
  return auctionPoint;
}
void ItemPriceUpdateRequest::setAuctionPoint (qlonglong auctionPoint) {
  this->auctionPoint = auctionPoint;
  appParams.insert("auction_point", QString::number(auctionPoint));
}

QString ItemPriceUpdateRequest::getAutoFill() const {
  return autoFill;
}
void ItemPriceUpdateRequest::setAutoFill (QString autoFill) {
  this->autoFill = autoFill;
  appParams.insert("auto_fill", autoFill);
}

qlonglong ItemPriceUpdateRequest::getCid() const {
  return cid;
}
void ItemPriceUpdateRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

qlonglong ItemPriceUpdateRequest::getCodPostageId() const {
  return codPostageId;
}
void ItemPriceUpdateRequest::setCodPostageId (qlonglong codPostageId) {
  this->codPostageId = codPostageId;
  appParams.insert("cod_postage_id", QString::number(codPostageId));
}

QString ItemPriceUpdateRequest::getDesc() const {
  return desc;
}
void ItemPriceUpdateRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

QString ItemPriceUpdateRequest::getEmsFee() const {
  return emsFee;
}
void ItemPriceUpdateRequest::setEmsFee (QString emsFee) {
  this->emsFee = emsFee;
  appParams.insert("ems_fee", emsFee);
}

QString ItemPriceUpdateRequest::getExpressFee() const {
  return expressFee;
}
void ItemPriceUpdateRequest::setExpressFee (QString expressFee) {
  this->expressFee = expressFee;
  appParams.insert("express_fee", expressFee);
}

QString ItemPriceUpdateRequest::getFreightPayer() const {
  return freightPayer;
}
void ItemPriceUpdateRequest::setFreightPayer (QString freightPayer) {
  this->freightPayer = freightPayer;
  appParams.insert("freight_payer", freightPayer);
}

bool ItemPriceUpdateRequest::getHasDiscount() const {
  return hasDiscount;
}
void ItemPriceUpdateRequest::setHasDiscount (bool hasDiscount) {
  this->hasDiscount = hasDiscount;
  appParams.insert("has_discount", hasDiscount? "true": "false");
}

bool ItemPriceUpdateRequest::getHasInvoice() const {
  return hasInvoice;
}
void ItemPriceUpdateRequest::setHasInvoice (bool hasInvoice) {
  this->hasInvoice = hasInvoice;
  appParams.insert("has_invoice", hasInvoice? "true": "false");
}

bool ItemPriceUpdateRequest::getHasShowcase() const {
  return hasShowcase;
}
void ItemPriceUpdateRequest::setHasShowcase (bool hasShowcase) {
  this->hasShowcase = hasShowcase;
  appParams.insert("has_showcase", hasShowcase? "true": "false");
}

bool ItemPriceUpdateRequest::getHasWarranty() const {
  return hasWarranty;
}
void ItemPriceUpdateRequest::setHasWarranty (bool hasWarranty) {
  this->hasWarranty = hasWarranty;
  appParams.insert("has_warranty", hasWarranty? "true": "false");
}

FileItem ItemPriceUpdateRequest::getImage() const {
  return image;
}
void ItemPriceUpdateRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

QString ItemPriceUpdateRequest::getIncrement() const {
  return increment;
}
void ItemPriceUpdateRequest::setIncrement (QString increment) {
  this->increment = increment;
  appParams.insert("increment", increment);
}

QString ItemPriceUpdateRequest::getInputPids() const {
  return inputPids;
}
void ItemPriceUpdateRequest::setInputPids (QString inputPids) {
  this->inputPids = inputPids;
  appParams.insert("input_pids", inputPids);
}

QString ItemPriceUpdateRequest::getInputStr() const {
  return inputStr;
}
void ItemPriceUpdateRequest::setInputStr (QString inputStr) {
  this->inputStr = inputStr;
  appParams.insert("input_str", inputStr);
}

bool ItemPriceUpdateRequest::getIs3D() const {
  return is3D;
}
void ItemPriceUpdateRequest::setIs3D (bool is3D) {
  this->is3D = is3D;
  appParams.insert("is_3D", is3D? "true": "false");
}

bool ItemPriceUpdateRequest::getIsEx() const {
  return isEx;
}
void ItemPriceUpdateRequest::setIsEx (bool isEx) {
  this->isEx = isEx;
  appParams.insert("is_ex", isEx? "true": "false");
}

bool ItemPriceUpdateRequest::getIsLightningConsignment() const {
  return isLightningConsignment;
}
void ItemPriceUpdateRequest::setIsLightningConsignment (bool isLightningConsignment) {
  this->isLightningConsignment = isLightningConsignment;
  appParams.insert("is_lightning_consignment", isLightningConsignment? "true": "false");
}

bool ItemPriceUpdateRequest::getIsReplaceSku() const {
  return isReplaceSku;
}
void ItemPriceUpdateRequest::setIsReplaceSku (bool isReplaceSku) {
  this->isReplaceSku = isReplaceSku;
  appParams.insert("is_replace_sku", isReplaceSku? "true": "false");
}

bool ItemPriceUpdateRequest::getIsTaobao() const {
  return isTaobao;
}
void ItemPriceUpdateRequest::setIsTaobao (bool isTaobao) {
  this->isTaobao = isTaobao;
  appParams.insert("is_taobao", isTaobao? "true": "false");
}

bool ItemPriceUpdateRequest::getIsXinpin() const {
  return isXinpin;
}
void ItemPriceUpdateRequest::setIsXinpin (bool isXinpin) {
  this->isXinpin = isXinpin;
  appParams.insert("is_xinpin", isXinpin? "true": "false");
}

QString ItemPriceUpdateRequest::getLang() const {
  return lang;
}
void ItemPriceUpdateRequest::setLang (QString lang) {
  this->lang = lang;
  appParams.insert("lang", lang);
}

QDateTime ItemPriceUpdateRequest::getListTime() const {
  return listTime;
}
void ItemPriceUpdateRequest::setListTime (QDateTime listTime) {
  this->listTime = listTime;
  appParams.insert("list_time", listTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString ItemPriceUpdateRequest::getLocationCity() const {
  return locationCity;
}
void ItemPriceUpdateRequest::setLocationCity (QString locationCity) {
  this->locationCity = locationCity;
  appParams.insert("location.city", locationCity);
}

QString ItemPriceUpdateRequest::getLocationState() const {
  return locationState;
}
void ItemPriceUpdateRequest::setLocationState (QString locationState) {
  this->locationState = locationState;
  appParams.insert("location.state", locationState);
}

qlonglong ItemPriceUpdateRequest::getNum() const {
  return num;
}
void ItemPriceUpdateRequest::setNum (qlonglong num) {
  this->num = num;
  appParams.insert("num", QString::number(num));
}

qlonglong ItemPriceUpdateRequest::getNumIid() const {
  return numIid;
}
void ItemPriceUpdateRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemPriceUpdateRequest::getOuterId() const {
  return outerId;
}
void ItemPriceUpdateRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

QString ItemPriceUpdateRequest::getPicPath() const {
  return picPath;
}
void ItemPriceUpdateRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

QString ItemPriceUpdateRequest::getPostFee() const {
  return postFee;
}
void ItemPriceUpdateRequest::setPostFee (QString postFee) {
  this->postFee = postFee;
  appParams.insert("post_fee", postFee);
}

qlonglong ItemPriceUpdateRequest::getPostageId() const {
  return postageId;
}
void ItemPriceUpdateRequest::setPostageId (qlonglong postageId) {
  this->postageId = postageId;
  appParams.insert("postage_id", QString::number(postageId));
}

QString ItemPriceUpdateRequest::getPrice() const {
  return price;
}
void ItemPriceUpdateRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

qlonglong ItemPriceUpdateRequest::getProductId() const {
  return productId;
}
void ItemPriceUpdateRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString ItemPriceUpdateRequest::getPropertyAlias() const {
  return propertyAlias;
}
void ItemPriceUpdateRequest::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
  appParams.insert("property_alias", propertyAlias);
}

QString ItemPriceUpdateRequest::getProps() const {
  return props;
}
void ItemPriceUpdateRequest::setProps (QString props) {
  this->props = props;
  appParams.insert("props", props);
}

bool ItemPriceUpdateRequest::getSellPromise() const {
  return sellPromise;
}
void ItemPriceUpdateRequest::setSellPromise (bool sellPromise) {
  this->sellPromise = sellPromise;
  appParams.insert("sell_promise", sellPromise? "true": "false");
}

QString ItemPriceUpdateRequest::getSellerCids() const {
  return sellerCids;
}
void ItemPriceUpdateRequest::setSellerCids (QString sellerCids) {
  this->sellerCids = sellerCids;
  appParams.insert("seller_cids", sellerCids);
}

QString ItemPriceUpdateRequest::getSkuOuterIds() const {
  return skuOuterIds;
}
void ItemPriceUpdateRequest::setSkuOuterIds (QString skuOuterIds) {
  this->skuOuterIds = skuOuterIds;
  appParams.insert("sku_outer_ids", skuOuterIds);
}

QString ItemPriceUpdateRequest::getSkuPrices() const {
  return skuPrices;
}
void ItemPriceUpdateRequest::setSkuPrices (QString skuPrices) {
  this->skuPrices = skuPrices;
  appParams.insert("sku_prices", skuPrices);
}

QString ItemPriceUpdateRequest::getSkuProperties() const {
  return skuProperties;
}
void ItemPriceUpdateRequest::setSkuProperties (QString skuProperties) {
  this->skuProperties = skuProperties;
  appParams.insert("sku_properties", skuProperties);
}

QString ItemPriceUpdateRequest::getSkuQuantities() const {
  return skuQuantities;
}
void ItemPriceUpdateRequest::setSkuQuantities (QString skuQuantities) {
  this->skuQuantities = skuQuantities;
  appParams.insert("sku_quantities", skuQuantities);
}

QString ItemPriceUpdateRequest::getStuffStatus() const {
  return stuffStatus;
}
void ItemPriceUpdateRequest::setStuffStatus (QString stuffStatus) {
  this->stuffStatus = stuffStatus;
  appParams.insert("stuff_status", stuffStatus);
}

qlonglong ItemPriceUpdateRequest::getSubStock() const {
  return subStock;
}
void ItemPriceUpdateRequest::setSubStock (qlonglong subStock) {
  this->subStock = subStock;
  appParams.insert("sub_stock", QString::number(subStock));
}

QString ItemPriceUpdateRequest::getTitle() const {
  return title;
}
void ItemPriceUpdateRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}

qlonglong ItemPriceUpdateRequest::getValidThru() const {
  return validThru;
}
void ItemPriceUpdateRequest::setValidThru (qlonglong validThru) {
  this->validThru = validThru;
  appParams.insert("valid_thru", QString::number(validThru));
}

qlonglong ItemPriceUpdateRequest::getWeight() const {
  return weight;
}
void ItemPriceUpdateRequest::setWeight (qlonglong weight) {
  this->weight = weight;
  appParams.insert("weight", QString::number(weight));
}



ItemPriceUpdateResponse *ItemPriceUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemPriceUpdateResponse *tmpResponse = new ItemPriceUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
