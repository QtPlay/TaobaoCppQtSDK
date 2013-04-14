#include <TaoApiCpp/domain/Product.h>
QString Product::getBinds() const {
  return binds;
}
void Product::setBinds (QString binds) {
  this->binds = binds;
}

QString Product::getBindsStr() const {
  return bindsStr;
}
void Product::setBindsStr (QString bindsStr) {
  this->bindsStr = bindsStr;
}

QString Product::getCatName() const {
  return catName;
}
void Product::setCatName (QString catName) {
  this->catName = catName;
}

qlonglong Product::getCid() const {
  return cid;
}
void Product::setCid (qlonglong cid) {
  this->cid = cid;
}

qlonglong Product::getCollectNum() const {
  return collectNum;
}
void Product::setCollectNum (qlonglong collectNum) {
  this->collectNum = collectNum;
}

QDateTime Product::getCreated() const {
  return created;
}
void Product::setCreated (QDateTime created) {
  this->created = created;
}

QString Product::getCustomerProps() const {
  return customerProps;
}
void Product::setCustomerProps (QString customerProps) {
  this->customerProps = customerProps;
}

QString Product::getDesc() const {
  return desc;
}
void Product::setDesc (QString desc) {
  this->desc = desc;
}

qlonglong Product::getLevel() const {
  return level;
}
void Product::setLevel (qlonglong level) {
  this->level = level;
}

QDateTime Product::getModified() const {
  return modified;
}
void Product::setModified (QDateTime modified) {
  this->modified = modified;
}

QString Product::getName() const {
  return name;
}
void Product::setName (QString name) {
  this->name = name;
}

QString Product::getOuterId() const {
  return outerId;
}
void Product::setOuterId (QString outerId) {
  this->outerId = outerId;
}

QString Product::getPicPath() const {
  return picPath;
}
void Product::setPicPath (QString picPath) {
  this->picPath = picPath;
}

QString Product::getPicUrl() const {
  return picUrl;
}
void Product::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

QString Product::getPrice() const {
  return price;
}
void Product::setPrice (QString price) {
  this->price = price;
}

qlonglong Product::getProductId() const {
  return productId;
}
void Product::setProductId (qlonglong productId) {
  this->productId = productId;
}

QList<ProductImg> Product::getProductImgs() const {
  return productImgs;
}
void Product::setProductImgs (QList<ProductImg> productImgs) {
  this->productImgs = productImgs;
}

QList<ProductPropImg> Product::getProductPropImgs() const {
  return productPropImgs;
}
void Product::setProductPropImgs (QList<ProductPropImg> productPropImgs) {
  this->productPropImgs = productPropImgs;
}

QString Product::getPropertyAlias() const {
  return propertyAlias;
}
void Product::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
}

QString Product::getProps() const {
  return props;
}
void Product::setProps (QString props) {
  this->props = props;
}

QString Product::getPropsStr() const {
  return propsStr;
}
void Product::setPropsStr (QString propsStr) {
  this->propsStr = propsStr;
}

QString Product::getSaleProps() const {
  return saleProps;
}
void Product::setSaleProps (QString saleProps) {
  this->saleProps = saleProps;
}

QString Product::getSalePropsStr() const {
  return salePropsStr;
}
void Product::setSalePropsStr (QString salePropsStr) {
  this->salePropsStr = salePropsStr;
}

qlonglong Product::getStatus() const {
  return status;
}
void Product::setStatus (qlonglong status) {
  this->status = status;
}

QString Product::getTsc() const {
  return tsc;
}
void Product::setTsc (QString tsc) {
  this->tsc = tsc;
}

qlonglong Product::getVerticalMarket() const {
  return verticalMarket;
}
void Product::setVerticalMarket (qlonglong verticalMarket) {
  this->verticalMarket = verticalMarket;
}


void Product::parseResponse() {
  if (responseParser->hasName("binds")) {
  binds = responseParser->getStrByName("binds");
  }
  if (responseParser->hasName("binds_str")) {
  bindsStr = responseParser->getStrByName("binds_str");
  }
  if (responseParser->hasName("cat_name")) {
  catName = responseParser->getStrByName("cat_name");
  }
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("collect_num")) {
  collectNum = responseParser->getNumByName("collect_num");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("customer_props")) {
  customerProps = responseParser->getStrByName("customer_props");
  }
  if (responseParser->hasName("desc")) {
  desc = responseParser->getStrByName("desc");
  }
  if (responseParser->hasName("level")) {
  level = responseParser->getNumByName("level");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("outer_id")) {
  outerId = responseParser->getStrByName("outer_id");
  }
  if (responseParser->hasName("pic_path")) {
  picPath = responseParser->getStrByName("pic_path");
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("product_id")) {
  productId = responseParser->getNumByName("product_id");
  }
  if (responseParser->hasName("product_imgs")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("product_imgs");
  Parser *parser;
  foreach (parser, listParser) {
    ProductImg tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    productImgs.append(tmp);
  }
  }
  if (responseParser->hasName("product_prop_imgs")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("product_prop_imgs");
  Parser *parser;
  foreach (parser, listParser) {
    ProductPropImg tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    productPropImgs.append(tmp);
  }
  }
  if (responseParser->hasName("property_alias")) {
  propertyAlias = responseParser->getStrByName("property_alias");
  }
  if (responseParser->hasName("props")) {
  props = responseParser->getStrByName("props");
  }
  if (responseParser->hasName("props_str")) {
  propsStr = responseParser->getStrByName("props_str");
  }
  if (responseParser->hasName("sale_props")) {
  saleProps = responseParser->getStrByName("sale_props");
  }
  if (responseParser->hasName("sale_props_str")) {
  salePropsStr = responseParser->getStrByName("sale_props_str");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }
  if (responseParser->hasName("tsc")) {
  tsc = responseParser->getStrByName("tsc");
  }
  if (responseParser->hasName("vertical_market")) {
  verticalMarket = responseParser->getNumByName("vertical_market");
  }

}

