#include <TaoApiCpp/request/WlbItemAddRequest.h>

QString WlbItemAddRequest::getApiMethodName() const {
  return "taobao.wlb.item.add";
}

QString WlbItemAddRequest::getColor() const {
  return color;
}
void WlbItemAddRequest::setColor (QString color) {
  this->color = color;
  appParams.insert("color", color);
}

QString WlbItemAddRequest::getGoodsCat() const {
  return goodsCat;
}
void WlbItemAddRequest::setGoodsCat (QString goodsCat) {
  this->goodsCat = goodsCat;
  appParams.insert("goods_cat", goodsCat);
}

qlonglong WlbItemAddRequest::getHeight() const {
  return height;
}
void WlbItemAddRequest::setHeight (qlonglong height) {
  this->height = height;
  appParams.insert("height", QString::number(height));
}

bool WlbItemAddRequest::getIsDangerous() const {
  return isDangerous;
}
void WlbItemAddRequest::setIsDangerous (bool isDangerous) {
  this->isDangerous = isDangerous;
  appParams.insert("is_dangerous", isDangerous? "true": "false");
}

bool WlbItemAddRequest::getIsFriable() const {
  return isFriable;
}
void WlbItemAddRequest::setIsFriable (bool isFriable) {
  this->isFriable = isFriable;
  appParams.insert("is_friable", isFriable? "true": "false");
}

QString WlbItemAddRequest::getIsSku() const {
  return isSku;
}
void WlbItemAddRequest::setIsSku (QString isSku) {
  this->isSku = isSku;
  appParams.insert("is_sku", isSku);
}

QString WlbItemAddRequest::getItemCode() const {
  return itemCode;
}
void WlbItemAddRequest::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
  appParams.insert("item_code", itemCode);
}

qlonglong WlbItemAddRequest::getLength() const {
  return length;
}
void WlbItemAddRequest::setLength (qlonglong length) {
  this->length = length;
  appParams.insert("length", QString::number(length));
}

QString WlbItemAddRequest::getName() const {
  return name;
}
void WlbItemAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString WlbItemAddRequest::getPackageMaterial() const {
  return packageMaterial;
}
void WlbItemAddRequest::setPackageMaterial (QString packageMaterial) {
  this->packageMaterial = packageMaterial;
  appParams.insert("package_material", packageMaterial);
}

qlonglong WlbItemAddRequest::getPrice() const {
  return price;
}
void WlbItemAddRequest::setPrice (qlonglong price) {
  this->price = price;
  appParams.insert("price", QString::number(price));
}

QString WlbItemAddRequest::getPricingCat() const {
  return pricingCat;
}
void WlbItemAddRequest::setPricingCat (QString pricingCat) {
  this->pricingCat = pricingCat;
  appParams.insert("pricing_cat", pricingCat);
}

QString WlbItemAddRequest::getProNameList() const {
  return proNameList;
}
void WlbItemAddRequest::setProNameList (QString proNameList) {
  this->proNameList = proNameList;
  appParams.insert("pro_name_list", proNameList);
}

QString WlbItemAddRequest::getProValueList() const {
  return proValueList;
}
void WlbItemAddRequest::setProValueList (QString proValueList) {
  this->proValueList = proValueList;
  appParams.insert("pro_value_list", proValueList);
}

QString WlbItemAddRequest::getRemark() const {
  return remark;
}
void WlbItemAddRequest::setRemark (QString remark) {
  this->remark = remark;
  appParams.insert("remark", remark);
}

bool WlbItemAddRequest::getSupportBatch() const {
  return supportBatch;
}
void WlbItemAddRequest::setSupportBatch (bool supportBatch) {
  this->supportBatch = supportBatch;
  appParams.insert("support_batch", supportBatch? "true": "false");
}

QString WlbItemAddRequest::getTitle() const {
  return title;
}
void WlbItemAddRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}

QString WlbItemAddRequest::getType() const {
  return type;
}
void WlbItemAddRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}

qlonglong WlbItemAddRequest::getVolume() const {
  return volume;
}
void WlbItemAddRequest::setVolume (qlonglong volume) {
  this->volume = volume;
  appParams.insert("volume", QString::number(volume));
}

qlonglong WlbItemAddRequest::getWeight() const {
  return weight;
}
void WlbItemAddRequest::setWeight (qlonglong weight) {
  this->weight = weight;
  appParams.insert("weight", QString::number(weight));
}

qlonglong WlbItemAddRequest::getWidth() const {
  return width;
}
void WlbItemAddRequest::setWidth (qlonglong width) {
  this->width = width;
  appParams.insert("width", QString::number(width));
}



WlbItemAddResponse *WlbItemAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemAddResponse *tmpResponse = new WlbItemAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
