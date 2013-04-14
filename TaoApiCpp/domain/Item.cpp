#include <TaoApiCpp/domain/Item.h>
qlonglong Item::getAfterSaleId() const {
  return afterSaleId;
}
void Item::setAfterSaleId (qlonglong afterSaleId) {
  this->afterSaleId = afterSaleId;
}

QString Item::getApproveStatus() const {
  return approveStatus;
}
void Item::setApproveStatus (QString approveStatus) {
  this->approveStatus = approveStatus;
}

qlonglong Item::getAuctionPoint() const {
  return auctionPoint;
}
void Item::setAuctionPoint (qlonglong auctionPoint) {
  this->auctionPoint = auctionPoint;
}

QString Item::getAutoFill() const {
  return autoFill;
}
void Item::setAutoFill (QString autoFill) {
  this->autoFill = autoFill;
}

QString Item::getChangeProp() const {
  return changeProp;
}
void Item::setChangeProp (QString changeProp) {
  this->changeProp = changeProp;
}

qlonglong Item::getCid() const {
  return cid;
}
void Item::setCid (qlonglong cid) {
  this->cid = cid;
}

qlonglong Item::getCodPostageId() const {
  return codPostageId;
}
void Item::setCodPostageId (qlonglong codPostageId) {
  this->codPostageId = codPostageId;
}

QDateTime Item::getCreated() const {
  return created;
}
void Item::setCreated (QDateTime created) {
  this->created = created;
}

QDateTime Item::getDelistTime() const {
  return delistTime;
}
void Item::setDelistTime (QDateTime delistTime) {
  this->delistTime = delistTime;
}

DeliveryTime Item::getDeliveryTime() const {
  return deliveryTime;
}
void Item::setDeliveryTime (DeliveryTime deliveryTime) {
  this->deliveryTime = deliveryTime;
}

QString Item::getDesc() const {
  return desc;
}
void Item::setDesc (QString desc) {
  this->desc = desc;
}

DescModuleInfo Item::getDescModuleInfo() const {
  return descModuleInfo;
}
void Item::setDescModuleInfo (DescModuleInfo descModuleInfo) {
  this->descModuleInfo = descModuleInfo;
}

QString Item::getDetailUrl() const {
  return detailUrl;
}
void Item::setDetailUrl (QString detailUrl) {
  this->detailUrl = detailUrl;
}

QString Item::getEmsFee() const {
  return emsFee;
}
void Item::setEmsFee (QString emsFee) {
  this->emsFee = emsFee;
}

QString Item::getExpressFee() const {
  return expressFee;
}
void Item::setExpressFee (QString expressFee) {
  this->expressFee = expressFee;
}

QString Item::getFeatures() const {
  return features;
}
void Item::setFeatures (QString features) {
  this->features = features;
}

FoodSecurity Item::getFoodSecurity() const {
  return foodSecurity;
}
void Item::setFoodSecurity (FoodSecurity foodSecurity) {
  this->foodSecurity = foodSecurity;
}

QString Item::getFreightPayer() const {
  return freightPayer;
}
void Item::setFreightPayer (QString freightPayer) {
  this->freightPayer = freightPayer;
}

QString Item::getGlobalStockType() const {
  return globalStockType;
}
void Item::setGlobalStockType (QString globalStockType) {
  this->globalStockType = globalStockType;
}

bool Item::getHasDiscount() const {
  return hasDiscount;
}
void Item::setHasDiscount (bool hasDiscount) {
  this->hasDiscount = hasDiscount;
}

bool Item::getHasInvoice() const {
  return hasInvoice;
}
void Item::setHasInvoice (bool hasInvoice) {
  this->hasInvoice = hasInvoice;
}

bool Item::getHasShowcase() const {
  return hasShowcase;
}
void Item::setHasShowcase (bool hasShowcase) {
  this->hasShowcase = hasShowcase;
}

bool Item::getHasWarranty() const {
  return hasWarranty;
}
void Item::setHasWarranty (bool hasWarranty) {
  this->hasWarranty = hasWarranty;
}

QString Item::getIncrement() const {
  return increment;
}
void Item::setIncrement (QString increment) {
  this->increment = increment;
}

qlonglong Item::getInnerShopAuctionTemplateId() const {
  return innerShopAuctionTemplateId;
}
void Item::setInnerShopAuctionTemplateId (qlonglong innerShopAuctionTemplateId) {
  this->innerShopAuctionTemplateId = innerShopAuctionTemplateId;
}

QString Item::getInputPids() const {
  return inputPids;
}
void Item::setInputPids (QString inputPids) {
  this->inputPids = inputPids;
}

QString Item::getInputStr() const {
  return inputStr;
}
void Item::setInputStr (QString inputStr) {
  this->inputStr = inputStr;
}

bool Item::getIs3D() const {
  return is3D;
}
void Item::setIs3D (bool is3D) {
  this->is3D = is3D;
}

bool Item::getIsEx() const {
  return isEx;
}
void Item::setIsEx (bool isEx) {
  this->isEx = isEx;
}

qlonglong Item::getIsFenxiao() const {
  return isFenxiao;
}
void Item::setIsFenxiao (qlonglong isFenxiao) {
  this->isFenxiao = isFenxiao;
}

bool Item::getIsLightningConsignment() const {
  return isLightningConsignment;
}
void Item::setIsLightningConsignment (bool isLightningConsignment) {
  this->isLightningConsignment = isLightningConsignment;
}

bool Item::getIsPrepay() const {
  return isPrepay;
}
void Item::setIsPrepay (bool isPrepay) {
  this->isPrepay = isPrepay;
}

bool Item::getIsTaobao() const {
  return isTaobao;
}
void Item::setIsTaobao (bool isTaobao) {
  this->isTaobao = isTaobao;
}

bool Item::getIsTiming() const {
  return isTiming;
}
void Item::setIsTiming (bool isTiming) {
  this->isTiming = isTiming;
}

bool Item::getIsVirtual() const {
  return isVirtual;
}
void Item::setIsVirtual (bool isVirtual) {
  this->isVirtual = isVirtual;
}

bool Item::getIsXinpin() const {
  return isXinpin;
}
void Item::setIsXinpin (bool isXinpin) {
  this->isXinpin = isXinpin;
}

QList<ItemImg> Item::getItemImgs() const {
  return itemImgs;
}
void Item::setItemImgs (QList<ItemImg> itemImgs) {
  this->itemImgs = itemImgs;
}

QString Item::getItemSize() const {
  return itemSize;
}
void Item::setItemSize (QString itemSize) {
  this->itemSize = itemSize;
}

QString Item::getItemWeight() const {
  return itemWeight;
}
void Item::setItemWeight (QString itemWeight) {
  this->itemWeight = itemWeight;
}

QDateTime Item::getListTime() const {
  return listTime;
}
void Item::setListTime (QDateTime listTime) {
  this->listTime = listTime;
}

LocalityLife Item::getLocalityLife() const {
  return localityLife;
}
void Item::setLocalityLife (LocalityLife localityLife) {
  this->localityLife = localityLife;
}

Location Item::getLocation() const {
  return location;
}
void Item::setLocation (Location location) {
  this->location = location;
}

QDateTime Item::getModified() const {
  return modified;
}
void Item::setModified (QDateTime modified) {
  this->modified = modified;
}

QString Item::getNick() const {
  return nick;
}
void Item::setNick (QString nick) {
  this->nick = nick;
}

qlonglong Item::getNum() const {
  return num;
}
void Item::setNum (qlonglong num) {
  this->num = num;
}

qlonglong Item::getNumIid() const {
  return numIid;
}
void Item::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

bool Item::getOneStation() const {
  return oneStation;
}
void Item::setOneStation (bool oneStation) {
  this->oneStation = oneStation;
}

QString Item::getOuterId() const {
  return outerId;
}
void Item::setOuterId (QString outerId) {
  this->outerId = outerId;
}

qlonglong Item::getOuterShopAuctionTemplateId() const {
  return outerShopAuctionTemplateId;
}
void Item::setOuterShopAuctionTemplateId (qlonglong outerShopAuctionTemplateId) {
  this->outerShopAuctionTemplateId = outerShopAuctionTemplateId;
}

PaimaiInfo Item::getPaimaiInfo() const {
  return paimaiInfo;
}
void Item::setPaimaiInfo (PaimaiInfo paimaiInfo) {
  this->paimaiInfo = paimaiInfo;
}

QString Item::getPicUrl() const {
  return picUrl;
}
void Item::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

QString Item::getPostFee() const {
  return postFee;
}
void Item::setPostFee (QString postFee) {
  this->postFee = postFee;
}

qlonglong Item::getPostageId() const {
  return postageId;
}
void Item::setPostageId (qlonglong postageId) {
  this->postageId = postageId;
}

QString Item::getPrice() const {
  return price;
}
void Item::setPrice (QString price) {
  this->price = price;
}

qlonglong Item::getProductId() const {
  return productId;
}
void Item::setProductId (qlonglong productId) {
  this->productId = productId;
}

QString Item::getPromotedService() const {
  return promotedService;
}
void Item::setPromotedService (QString promotedService) {
  this->promotedService = promotedService;
}

QList<PropImg> Item::getPropImgs() const {
  return propImgs;
}
void Item::setPropImgs (QList<PropImg> propImgs) {
  this->propImgs = propImgs;
}

QString Item::getPropertyAlias() const {
  return propertyAlias;
}
void Item::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
}

QString Item::getProps() const {
  return props;
}
void Item::setProps (QString props) {
  this->props = props;
}

QString Item::getPropsName() const {
  return propsName;
}
void Item::setPropsName (QString propsName) {
  this->propsName = propsName;
}

qlonglong Item::getScore() const {
  return score;
}
void Item::setScore (qlonglong score) {
  this->score = score;
}

QString Item::getSecondKill() const {
  return secondKill;
}
void Item::setSecondKill (QString secondKill) {
  this->secondKill = secondKill;
}

bool Item::getSellPromise() const {
  return sellPromise;
}
void Item::setSellPromise (bool sellPromise) {
  this->sellPromise = sellPromise;
}

QString Item::getSellerCids() const {
  return sellerCids;
}
void Item::setSellerCids (QString sellerCids) {
  this->sellerCids = sellerCids;
}

QList<Sku> Item::getSkus() const {
  return skus;
}
void Item::setSkus (QList<Sku> skus) {
  this->skus = skus;
}

QString Item::getStuffStatus() const {
  return stuffStatus;
}
void Item::setStuffStatus (QString stuffStatus) {
  this->stuffStatus = stuffStatus;
}

qlonglong Item::getSubStock() const {
  return subStock;
}
void Item::setSubStock (qlonglong subStock) {
  this->subStock = subStock;
}

QString Item::getTemplateId() const {
  return templateId;
}
void Item::setTemplateId (QString templateId) {
  this->templateId = templateId;
}

QString Item::getTitle() const {
  return title;
}
void Item::setTitle (QString title) {
  this->title = title;
}

QString Item::getType() const {
  return type;
}
void Item::setType (QString type) {
  this->type = type;
}

qlonglong Item::getValidThru() const {
  return validThru;
}
void Item::setValidThru (qlonglong validThru) {
  this->validThru = validThru;
}

QList<Video> Item::getVideos() const {
  return videos;
}
void Item::setVideos (QList<Video> videos) {
  this->videos = videos;
}

bool Item::getViolation() const {
  return violation;
}
void Item::setViolation (bool violation) {
  this->violation = violation;
}

qlonglong Item::getVolume() const {
  return volume;
}
void Item::setVolume (qlonglong volume) {
  this->volume = volume;
}

QString Item::getWapDesc() const {
  return wapDesc;
}
void Item::setWapDesc (QString wapDesc) {
  this->wapDesc = wapDesc;
}

QString Item::getWapDetailUrl() const {
  return wapDetailUrl;
}
void Item::setWapDetailUrl (QString wapDetailUrl) {
  this->wapDetailUrl = wapDetailUrl;
}

qlonglong Item::getWithHoldQuantity() const {
  return withHoldQuantity;
}
void Item::setWithHoldQuantity (qlonglong withHoldQuantity) {
  this->withHoldQuantity = withHoldQuantity;
}

bool Item::getWwStatus() const {
  return wwStatus;
}
void Item::setWwStatus (bool wwStatus) {
  this->wwStatus = wwStatus;
}


void Item::parseResponse() {
  if (responseParser->hasName("after_sale_id")) {
  afterSaleId = responseParser->getNumByName("after_sale_id");
  }
  if (responseParser->hasName("approve_status")) {
  approveStatus = responseParser->getStrByName("approve_status");
  }
  if (responseParser->hasName("auction_point")) {
  auctionPoint = responseParser->getNumByName("auction_point");
  }
  if (responseParser->hasName("auto_fill")) {
  autoFill = responseParser->getStrByName("auto_fill");
  }
  if (responseParser->hasName("change_prop")) {
  changeProp = responseParser->getStrByName("change_prop");
  }
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("cod_postage_id")) {
  codPostageId = responseParser->getNumByName("cod_postage_id");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("delist_time")) {
  delistTime = responseParser->getDateByName("delist_time");
  }
  if (responseParser->hasName("delivery_time")) {
  deliveryTime.setParser(responseParser->getObjectParser("delivery_time"));
  deliveryTime.parseResponse();
  }
  if (responseParser->hasName("desc")) {
  desc = responseParser->getStrByName("desc");
  }
  if (responseParser->hasName("desc_module_info")) {
  descModuleInfo.setParser(responseParser->getObjectParser("desc_module_info"));
  descModuleInfo.parseResponse();
  }
  if (responseParser->hasName("detail_url")) {
  detailUrl = responseParser->getStrByName("detail_url");
  }
  if (responseParser->hasName("ems_fee")) {
  emsFee = responseParser->getStrByName("ems_fee");
  }
  if (responseParser->hasName("express_fee")) {
  expressFee = responseParser->getStrByName("express_fee");
  }
  if (responseParser->hasName("features")) {
  features = responseParser->getStrByName("features");
  }
  if (responseParser->hasName("food_security")) {
  foodSecurity.setParser(responseParser->getObjectParser("food_security"));
  foodSecurity.parseResponse();
  }
  if (responseParser->hasName("freight_payer")) {
  freightPayer = responseParser->getStrByName("freight_payer");
  }
  if (responseParser->hasName("global_stock_type")) {
  globalStockType = responseParser->getStrByName("global_stock_type");
  }
  if (responseParser->hasName("has_discount")) {
  hasDiscount = responseParser->getBoolByName("has_discount");
  }
  if (responseParser->hasName("has_invoice")) {
  hasInvoice = responseParser->getBoolByName("has_invoice");
  }
  if (responseParser->hasName("has_showcase")) {
  hasShowcase = responseParser->getBoolByName("has_showcase");
  }
  if (responseParser->hasName("has_warranty")) {
  hasWarranty = responseParser->getBoolByName("has_warranty");
  }
  if (responseParser->hasName("increment")) {
  increment = responseParser->getStrByName("increment");
  }
  if (responseParser->hasName("inner_shop_auction_template_id")) {
  innerShopAuctionTemplateId = responseParser->getNumByName("inner_shop_auction_template_id");
  }
  if (responseParser->hasName("input_pids")) {
  inputPids = responseParser->getStrByName("input_pids");
  }
  if (responseParser->hasName("input_str")) {
  inputStr = responseParser->getStrByName("input_str");
  }
  if (responseParser->hasName("is_3D")) {
  is3D = responseParser->getBoolByName("is_3D");
  }
  if (responseParser->hasName("is_ex")) {
  isEx = responseParser->getBoolByName("is_ex");
  }
  if (responseParser->hasName("is_fenxiao")) {
  isFenxiao = responseParser->getNumByName("is_fenxiao");
  }
  if (responseParser->hasName("is_lightning_consignment")) {
  isLightningConsignment = responseParser->getBoolByName("is_lightning_consignment");
  }
  if (responseParser->hasName("is_prepay")) {
  isPrepay = responseParser->getBoolByName("is_prepay");
  }
  if (responseParser->hasName("is_taobao")) {
  isTaobao = responseParser->getBoolByName("is_taobao");
  }
  if (responseParser->hasName("is_timing")) {
  isTiming = responseParser->getBoolByName("is_timing");
  }
  if (responseParser->hasName("is_virtual")) {
  isVirtual = responseParser->getBoolByName("is_virtual");
  }
  if (responseParser->hasName("is_xinpin")) {
  isXinpin = responseParser->getBoolByName("is_xinpin");
  }
  if (responseParser->hasName("item_imgs")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_imgs");
  Parser *parser;
  foreach (parser, listParser) {
    ItemImg tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemImgs.append(tmp);
  }
  }
  if (responseParser->hasName("item_size")) {
  itemSize = responseParser->getStrByName("item_size");
  }
  if (responseParser->hasName("item_weight")) {
  itemWeight = responseParser->getStrByName("item_weight");
  }
  if (responseParser->hasName("list_time")) {
  listTime = responseParser->getDateByName("list_time");
  }
  if (responseParser->hasName("locality_life")) {
  localityLife.setParser(responseParser->getObjectParser("locality_life"));
  localityLife.parseResponse();
  }
  if (responseParser->hasName("location")) {
  location.setParser(responseParser->getObjectParser("location"));
  location.parseResponse();
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("num")) {
  num = responseParser->getNumByName("num");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("one_station")) {
  oneStation = responseParser->getBoolByName("one_station");
  }
  if (responseParser->hasName("outer_id")) {
  outerId = responseParser->getStrByName("outer_id");
  }
  if (responseParser->hasName("outer_shop_auction_template_id")) {
  outerShopAuctionTemplateId = responseParser->getNumByName("outer_shop_auction_template_id");
  }
  if (responseParser->hasName("paimai_info")) {
  paimaiInfo.setParser(responseParser->getObjectParser("paimai_info"));
  paimaiInfo.parseResponse();
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("post_fee")) {
  postFee = responseParser->getStrByName("post_fee");
  }
  if (responseParser->hasName("postage_id")) {
  postageId = responseParser->getNumByName("postage_id");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("product_id")) {
  productId = responseParser->getNumByName("product_id");
  }
  if (responseParser->hasName("promoted_service")) {
  promotedService = responseParser->getStrByName("promoted_service");
  }
  if (responseParser->hasName("prop_imgs")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("prop_imgs");
  Parser *parser;
  foreach (parser, listParser) {
    PropImg tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    propImgs.append(tmp);
  }
  }
  if (responseParser->hasName("property_alias")) {
  propertyAlias = responseParser->getStrByName("property_alias");
  }
  if (responseParser->hasName("props")) {
  props = responseParser->getStrByName("props");
  }
  if (responseParser->hasName("props_name")) {
  propsName = responseParser->getStrByName("props_name");
  }
  if (responseParser->hasName("score")) {
  score = responseParser->getNumByName("score");
  }
  if (responseParser->hasName("second_kill")) {
  secondKill = responseParser->getStrByName("second_kill");
  }
  if (responseParser->hasName("sell_promise")) {
  sellPromise = responseParser->getBoolByName("sell_promise");
  }
  if (responseParser->hasName("seller_cids")) {
  sellerCids = responseParser->getStrByName("seller_cids");
  }
  if (responseParser->hasName("skus")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("skus");
  Parser *parser;
  foreach (parser, listParser) {
    Sku tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    skus.append(tmp);
  }
  }
  if (responseParser->hasName("stuff_status")) {
  stuffStatus = responseParser->getStrByName("stuff_status");
  }
  if (responseParser->hasName("sub_stock")) {
  subStock = responseParser->getNumByName("sub_stock");
  }
  if (responseParser->hasName("template_id")) {
  templateId = responseParser->getStrByName("template_id");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }
  if (responseParser->hasName("valid_thru")) {
  validThru = responseParser->getNumByName("valid_thru");
  }
  if (responseParser->hasName("videos")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("videos");
  Parser *parser;
  foreach (parser, listParser) {
    Video tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    videos.append(tmp);
  }
  }
  if (responseParser->hasName("violation")) {
  violation = responseParser->getBoolByName("violation");
  }
  if (responseParser->hasName("volume")) {
  volume = responseParser->getNumByName("volume");
  }
  if (responseParser->hasName("wap_desc")) {
  wapDesc = responseParser->getStrByName("wap_desc");
  }
  if (responseParser->hasName("wap_detail_url")) {
  wapDetailUrl = responseParser->getStrByName("wap_detail_url");
  }
  if (responseParser->hasName("with_hold_quantity")) {
  withHoldQuantity = responseParser->getNumByName("with_hold_quantity");
  }
  if (responseParser->hasName("ww_status")) {
  wwStatus = responseParser->getBoolByName("ww_status");
  }

}

