#include <TaoApiCpp/domain/WidgetItem.h>
bool WidgetItem::getAddToCart() const {
  return addToCart;
}
void WidgetItem::setAddToCart (bool addToCart) {
  this->addToCart = addToCart;
}

QString WidgetItem::getApproveStatus() const {
  return approveStatus;
}
void WidgetItem::setApproveStatus (QString approveStatus) {
  this->approveStatus = approveStatus;
}

QString WidgetItem::getClickUrl() const {
  return clickUrl;
}
void WidgetItem::setClickUrl (QString clickUrl) {
  this->clickUrl = clickUrl;
}

bool WidgetItem::getIsMall() const {
  return isMall;
}
void WidgetItem::setIsMall (bool isMall) {
  this->isMall = isMall;
}

qlonglong WidgetItem::getItemId() const {
  return itemId;
}
void WidgetItem::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QList<QString> WidgetItem::getItemPics() const {
  return itemPics;
}
void WidgetItem::setItemPics (QList<QString> itemPics) {
  this->itemPics = itemPics;
}

QList<PromotionInItem> WidgetItem::getItemPromotionData() const {
  return itemPromotionData;
}
void WidgetItem::setItemPromotionData (QList<PromotionInItem> itemPromotionData) {
  this->itemPromotionData = itemPromotionData;
}

QString WidgetItem::getPicUrl() const {
  return picUrl;
}
void WidgetItem::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

QString WidgetItem::getPrice() const {
  return price;
}
void WidgetItem::setPrice (QString price) {
  this->price = price;
}

qlonglong WidgetItem::getQuantity() const {
  return quantity;
}
void WidgetItem::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

QString WidgetItem::getSellerNick() const {
  return sellerNick;
}
void WidgetItem::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

QList<PromotionInShop> WidgetItem::getShopPromotionData() const {
  return shopPromotionData;
}
void WidgetItem::setShopPromotionData (QList<PromotionInShop> shopPromotionData) {
  this->shopPromotionData = shopPromotionData;
}

QList<WidgetSkuProps> WidgetItem::getSkuProps() const {
  return skuProps;
}
void WidgetItem::setSkuProps (QList<WidgetSkuProps> skuProps) {
  this->skuProps = skuProps;
}

QList<WidgetSku> WidgetItem::getSkus() const {
  return skus;
}
void WidgetItem::setSkus (QList<WidgetSku> skus) {
  this->skus = skus;
}

QString WidgetItem::getTitle() const {
  return title;
}
void WidgetItem::setTitle (QString title) {
  this->title = title;
}


void WidgetItem::parseResponse() {
  if (responseParser->hasName("add_to_cart")) {
  addToCart = responseParser->getBoolByName("add_to_cart");
  }
  if (responseParser->hasName("approve_status")) {
  approveStatus = responseParser->getStrByName("approve_status");
  }
  if (responseParser->hasName("click_url")) {
  clickUrl = responseParser->getStrByName("click_url");
  }
  if (responseParser->hasName("is_mall")) {
  isMall = responseParser->getBoolByName("is_mall");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("item_pics")) {
  itemPics = responseParser->getListStrByName("item_pics");
  }
  if (responseParser->hasName("item_promotion_data")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_promotion_data");
  Parser *parser;
  foreach (parser, listParser) {
    PromotionInItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemPromotionData.append(tmp);
  }
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("shop_promotion_data")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("shop_promotion_data");
  Parser *parser;
  foreach (parser, listParser) {
    PromotionInShop tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    shopPromotionData.append(tmp);
  }
  }
  if (responseParser->hasName("sku_props")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("sku_props");
  Parser *parser;
  foreach (parser, listParser) {
    WidgetSkuProps tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    skuProps.append(tmp);
  }
  }
  if (responseParser->hasName("skus")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("skus");
  Parser *parser;
  foreach (parser, listParser) {
    WidgetSku tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    skus.append(tmp);
  }
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }

}

