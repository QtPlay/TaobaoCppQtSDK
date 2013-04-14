#include <TaoApiCpp/request/ScitemAddRequest.h>

QString ScitemAddRequest::getApiMethodName() const {
  return "taobao.scitem.add";
}

QString ScitemAddRequest::getBarCode() const {
  return barCode;
}
void ScitemAddRequest::setBarCode (QString barCode) {
  this->barCode = barCode;
  appParams.insert("bar_code", barCode);
}

qlonglong ScitemAddRequest::getBrandId() const {
  return brandId;
}
void ScitemAddRequest::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
  appParams.insert("brand_id", QString::number(brandId));
}

QString ScitemAddRequest::getBrandName() const {
  return brandName;
}
void ScitemAddRequest::setBrandName (QString brandName) {
  this->brandName = brandName;
  appParams.insert("brand_name", brandName);
}

qlonglong ScitemAddRequest::getHeight() const {
  return height;
}
void ScitemAddRequest::setHeight (qlonglong height) {
  this->height = height;
  appParams.insert("height", QString::number(height));
}

qlonglong ScitemAddRequest::getIsAreaSale() const {
  return isAreaSale;
}
void ScitemAddRequest::setIsAreaSale (qlonglong isAreaSale) {
  this->isAreaSale = isAreaSale;
  appParams.insert("is_area_sale", QString::number(isAreaSale));
}

qlonglong ScitemAddRequest::getIsCostly() const {
  return isCostly;
}
void ScitemAddRequest::setIsCostly (qlonglong isCostly) {
  this->isCostly = isCostly;
  appParams.insert("is_costly", QString::number(isCostly));
}

qlonglong ScitemAddRequest::getIsDangerous() const {
  return isDangerous;
}
void ScitemAddRequest::setIsDangerous (qlonglong isDangerous) {
  this->isDangerous = isDangerous;
  appParams.insert("is_dangerous", QString::number(isDangerous));
}

qlonglong ScitemAddRequest::getIsFriable() const {
  return isFriable;
}
void ScitemAddRequest::setIsFriable (qlonglong isFriable) {
  this->isFriable = isFriable;
  appParams.insert("is_friable", QString::number(isFriable));
}

qlonglong ScitemAddRequest::getIsWarranty() const {
  return isWarranty;
}
void ScitemAddRequest::setIsWarranty (qlonglong isWarranty) {
  this->isWarranty = isWarranty;
  appParams.insert("is_warranty", QString::number(isWarranty));
}

QString ScitemAddRequest::getItemName() const {
  return itemName;
}
void ScitemAddRequest::setItemName (QString itemName) {
  this->itemName = itemName;
  appParams.insert("item_name", itemName);
}

qlonglong ScitemAddRequest::getItemType() const {
  return itemType;
}
void ScitemAddRequest::setItemType (qlonglong itemType) {
  this->itemType = itemType;
  appParams.insert("item_type", QString::number(itemType));
}

qlonglong ScitemAddRequest::getLength() const {
  return length;
}
void ScitemAddRequest::setLength (qlonglong length) {
  this->length = length;
  appParams.insert("length", QString::number(length));
}

qlonglong ScitemAddRequest::getMatterStatus() const {
  return matterStatus;
}
void ScitemAddRequest::setMatterStatus (qlonglong matterStatus) {
  this->matterStatus = matterStatus;
  appParams.insert("matter_status", QString::number(matterStatus));
}

QString ScitemAddRequest::getOuterCode() const {
  return outerCode;
}
void ScitemAddRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong ScitemAddRequest::getPrice() const {
  return price;
}
void ScitemAddRequest::setPrice (qlonglong price) {
  this->price = price;
  appParams.insert("price", QString::number(price));
}

QString ScitemAddRequest::getProperties() const {
  return properties;
}
void ScitemAddRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}

QString ScitemAddRequest::getRemark() const {
  return remark;
}
void ScitemAddRequest::setRemark (QString remark) {
  this->remark = remark;
  appParams.insert("remark", remark);
}

qlonglong ScitemAddRequest::getSpuId() const {
  return spuId;
}
void ScitemAddRequest::setSpuId (qlonglong spuId) {
  this->spuId = spuId;
  appParams.insert("spu_id", QString::number(spuId));
}

qlonglong ScitemAddRequest::getVolume() const {
  return volume;
}
void ScitemAddRequest::setVolume (qlonglong volume) {
  this->volume = volume;
  appParams.insert("volume", QString::number(volume));
}

qlonglong ScitemAddRequest::getWeight() const {
  return weight;
}
void ScitemAddRequest::setWeight (qlonglong weight) {
  this->weight = weight;
  appParams.insert("weight", QString::number(weight));
}

qlonglong ScitemAddRequest::getWidth() const {
  return width;
}
void ScitemAddRequest::setWidth (qlonglong width) {
  this->width = width;
  appParams.insert("width", QString::number(width));
}

QString ScitemAddRequest::getWmsCode() const {
  return wmsCode;
}
void ScitemAddRequest::setWmsCode (QString wmsCode) {
  this->wmsCode = wmsCode;
  appParams.insert("wms_code", wmsCode);
}



ScitemAddResponse *ScitemAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ScitemAddResponse *tmpResponse = new ScitemAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
