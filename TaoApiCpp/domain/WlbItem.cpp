#include <TaoApiCpp/domain/WlbItem.h>
qlonglong WlbItem::getBrandId() const {
  return brandId;
}
void WlbItem::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
}

QString WlbItem::getColor() const {
  return color;
}
void WlbItem::setColor (QString color) {
  this->color = color;
}

QString WlbItem::getCreator() const {
  return creator;
}
void WlbItem::setCreator (QString creator) {
  this->creator = creator;
}

QString WlbItem::getFlag() const {
  return flag;
}
void WlbItem::setFlag (QString flag) {
  this->flag = flag;
}

QDateTime WlbItem::getGmtCreate() const {
  return gmtCreate;
}
void WlbItem::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

QDateTime WlbItem::getGmtModified() const {
  return gmtModified;
}
void WlbItem::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

QString WlbItem::getGoodsCat() const {
  return goodsCat;
}
void WlbItem::setGoodsCat (QString goodsCat) {
  this->goodsCat = goodsCat;
}

qlonglong WlbItem::getHeight() const {
  return height;
}
void WlbItem::setHeight (qlonglong height) {
  this->height = height;
}

qlonglong WlbItem::getId() const {
  return id;
}
void WlbItem::setId (qlonglong id) {
  this->id = id;
}

bool WlbItem::getIsDangerous() const {
  return isDangerous;
}
void WlbItem::setIsDangerous (bool isDangerous) {
  this->isDangerous = isDangerous;
}

bool WlbItem::getIsFriable() const {
  return isFriable;
}
void WlbItem::setIsFriable (bool isFriable) {
  this->isFriable = isFriable;
}

bool WlbItem::getIsSku() const {
  return isSku;
}
void WlbItem::setIsSku (bool isSku) {
  this->isSku = isSku;
}

QString WlbItem::getItemCode() const {
  return itemCode;
}
void WlbItem::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
}

QString WlbItem::getLastModifier() const {
  return lastModifier;
}
void WlbItem::setLastModifier (QString lastModifier) {
  this->lastModifier = lastModifier;
}

qlonglong WlbItem::getLength() const {
  return length;
}
void WlbItem::setLength (qlonglong length) {
  this->length = length;
}

QString WlbItem::getName() const {
  return name;
}
void WlbItem::setName (QString name) {
  this->name = name;
}

QString WlbItem::getPackageMaterial() const {
  return packageMaterial;
}
void WlbItem::setPackageMaterial (QString packageMaterial) {
  this->packageMaterial = packageMaterial;
}

qlonglong WlbItem::getParentId() const {
  return parentId;
}
void WlbItem::setParentId (qlonglong parentId) {
  this->parentId = parentId;
}

qlonglong WlbItem::getPrice() const {
  return price;
}
void WlbItem::setPrice (qlonglong price) {
  this->price = price;
}

QString WlbItem::getPricingCat() const {
  return pricingCat;
}
void WlbItem::setPricingCat (QString pricingCat) {
  this->pricingCat = pricingCat;
}

QString WlbItem::getProperties() const {
  return properties;
}
void WlbItem::setProperties (QString properties) {
  this->properties = properties;
}

qlonglong WlbItem::getPublishVersion() const {
  return publishVersion;
}
void WlbItem::setPublishVersion (qlonglong publishVersion) {
  this->publishVersion = publishVersion;
}

QString WlbItem::getRemark() const {
  return remark;
}
void WlbItem::setRemark (QString remark) {
  this->remark = remark;
}

QString WlbItem::getStatus() const {
  return status;
}
void WlbItem::setStatus (QString status) {
  this->status = status;
}

QString WlbItem::getTitle() const {
  return title;
}
void WlbItem::setTitle (QString title) {
  this->title = title;
}

QString WlbItem::getType() const {
  return type;
}
void WlbItem::setType (QString type) {
  this->type = type;
}

qlonglong WlbItem::getUserId() const {
  return userId;
}
void WlbItem::setUserId (qlonglong userId) {
  this->userId = userId;
}

QString WlbItem::getUserNick() const {
  return userNick;
}
void WlbItem::setUserNick (QString userNick) {
  this->userNick = userNick;
}

qlonglong WlbItem::getVolume() const {
  return volume;
}
void WlbItem::setVolume (qlonglong volume) {
  this->volume = volume;
}

qlonglong WlbItem::getWeight() const {
  return weight;
}
void WlbItem::setWeight (qlonglong weight) {
  this->weight = weight;
}

qlonglong WlbItem::getWidth() const {
  return width;
}
void WlbItem::setWidth (qlonglong width) {
  this->width = width;
}


void WlbItem::parseResponse() {
  if (responseParser->hasName("brand_id")) {
  brandId = responseParser->getNumByName("brand_id");
  }
  if (responseParser->hasName("color")) {
  color = responseParser->getStrByName("color");
  }
  if (responseParser->hasName("creator")) {
  creator = responseParser->getStrByName("creator");
  }
  if (responseParser->hasName("flag")) {
  flag = responseParser->getStrByName("flag");
  }
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }
  if (responseParser->hasName("goods_cat")) {
  goodsCat = responseParser->getStrByName("goods_cat");
  }
  if (responseParser->hasName("height")) {
  height = responseParser->getNumByName("height");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("is_dangerous")) {
  isDangerous = responseParser->getBoolByName("is_dangerous");
  }
  if (responseParser->hasName("is_friable")) {
  isFriable = responseParser->getBoolByName("is_friable");
  }
  if (responseParser->hasName("is_sku")) {
  isSku = responseParser->getBoolByName("is_sku");
  }
  if (responseParser->hasName("item_code")) {
  itemCode = responseParser->getStrByName("item_code");
  }
  if (responseParser->hasName("last_modifier")) {
  lastModifier = responseParser->getStrByName("last_modifier");
  }
  if (responseParser->hasName("length")) {
  length = responseParser->getNumByName("length");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("package_material")) {
  packageMaterial = responseParser->getStrByName("package_material");
  }
  if (responseParser->hasName("parent_id")) {
  parentId = responseParser->getNumByName("parent_id");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getNumByName("price");
  }
  if (responseParser->hasName("pricing_cat")) {
  pricingCat = responseParser->getStrByName("pricing_cat");
  }
  if (responseParser->hasName("properties")) {
  properties = responseParser->getStrByName("properties");
  }
  if (responseParser->hasName("publish_version")) {
  publishVersion = responseParser->getNumByName("publish_version");
  }
  if (responseParser->hasName("remark")) {
  remark = responseParser->getStrByName("remark");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("user_nick")) {
  userNick = responseParser->getStrByName("user_nick");
  }
  if (responseParser->hasName("volume")) {
  volume = responseParser->getNumByName("volume");
  }
  if (responseParser->hasName("weight")) {
  weight = responseParser->getNumByName("weight");
  }
  if (responseParser->hasName("width")) {
  width = responseParser->getNumByName("width");
  }

}

