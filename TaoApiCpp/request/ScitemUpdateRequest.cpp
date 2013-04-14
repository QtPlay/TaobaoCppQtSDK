#include <TaoApiCpp/request/ScitemUpdateRequest.h>

QString ScitemUpdateRequest::getApiMethodName() const {
  return "taobao.scitem.update";
}

QString ScitemUpdateRequest::getBarCode() const {
  return barCode;
}
void ScitemUpdateRequest::setBarCode (QString barCode) {
  this->barCode = barCode;
  appParams.insert("bar_code", barCode);
}

qlonglong ScitemUpdateRequest::getBrandId() const {
  return brandId;
}
void ScitemUpdateRequest::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
  appParams.insert("brand_id", QString::number(brandId));
}

QString ScitemUpdateRequest::getBrandName() const {
  return brandName;
}
void ScitemUpdateRequest::setBrandName (QString brandName) {
  this->brandName = brandName;
  appParams.insert("brand_name", brandName);
}

qlonglong ScitemUpdateRequest::getHeight() const {
  return height;
}
void ScitemUpdateRequest::setHeight (qlonglong height) {
  this->height = height;
  appParams.insert("height", QString::number(height));
}

qlonglong ScitemUpdateRequest::getIsAreaSale() const {
  return isAreaSale;
}
void ScitemUpdateRequest::setIsAreaSale (qlonglong isAreaSale) {
  this->isAreaSale = isAreaSale;
  appParams.insert("is_area_sale", QString::number(isAreaSale));
}

qlonglong ScitemUpdateRequest::getIsCostly() const {
  return isCostly;
}
void ScitemUpdateRequest::setIsCostly (qlonglong isCostly) {
  this->isCostly = isCostly;
  appParams.insert("is_costly", QString::number(isCostly));
}

qlonglong ScitemUpdateRequest::getIsDangerous() const {
  return isDangerous;
}
void ScitemUpdateRequest::setIsDangerous (qlonglong isDangerous) {
  this->isDangerous = isDangerous;
  appParams.insert("is_dangerous", QString::number(isDangerous));
}

qlonglong ScitemUpdateRequest::getIsFriable() const {
  return isFriable;
}
void ScitemUpdateRequest::setIsFriable (qlonglong isFriable) {
  this->isFriable = isFriable;
  appParams.insert("is_friable", QString::number(isFriable));
}

qlonglong ScitemUpdateRequest::getIsWarranty() const {
  return isWarranty;
}
void ScitemUpdateRequest::setIsWarranty (qlonglong isWarranty) {
  this->isWarranty = isWarranty;
  appParams.insert("is_warranty", QString::number(isWarranty));
}

qlonglong ScitemUpdateRequest::getItemId() const {
  return itemId;
}
void ScitemUpdateRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString ScitemUpdateRequest::getItemName() const {
  return itemName;
}
void ScitemUpdateRequest::setItemName (QString itemName) {
  this->itemName = itemName;
  appParams.insert("item_name", itemName);
}

qlonglong ScitemUpdateRequest::getItemType() const {
  return itemType;
}
void ScitemUpdateRequest::setItemType (qlonglong itemType) {
  this->itemType = itemType;
  appParams.insert("item_type", QString::number(itemType));
}

qlonglong ScitemUpdateRequest::getLength() const {
  return length;
}
void ScitemUpdateRequest::setLength (qlonglong length) {
  this->length = length;
  appParams.insert("length", QString::number(length));
}

qlonglong ScitemUpdateRequest::getMatterStatus() const {
  return matterStatus;
}
void ScitemUpdateRequest::setMatterStatus (qlonglong matterStatus) {
  this->matterStatus = matterStatus;
  appParams.insert("matter_status", QString::number(matterStatus));
}

QString ScitemUpdateRequest::getOuterCode() const {
  return outerCode;
}
void ScitemUpdateRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong ScitemUpdateRequest::getPrice() const {
  return price;
}
void ScitemUpdateRequest::setPrice (qlonglong price) {
  this->price = price;
  appParams.insert("price", QString::number(price));
}

QString ScitemUpdateRequest::getRemark() const {
  return remark;
}
void ScitemUpdateRequest::setRemark (QString remark) {
  this->remark = remark;
  appParams.insert("remark", remark);
}

QString ScitemUpdateRequest::getRemoveProperties() const {
  return removeProperties;
}
void ScitemUpdateRequest::setRemoveProperties (QString removeProperties) {
  this->removeProperties = removeProperties;
  appParams.insert("remove_properties", removeProperties);
}

qlonglong ScitemUpdateRequest::getSpuId() const {
  return spuId;
}
void ScitemUpdateRequest::setSpuId (qlonglong spuId) {
  this->spuId = spuId;
  appParams.insert("spu_id", QString::number(spuId));
}

QString ScitemUpdateRequest::getUpdateProperties() const {
  return updateProperties;
}
void ScitemUpdateRequest::setUpdateProperties (QString updateProperties) {
  this->updateProperties = updateProperties;
  appParams.insert("update_properties", updateProperties);
}

qlonglong ScitemUpdateRequest::getVolume() const {
  return volume;
}
void ScitemUpdateRequest::setVolume (qlonglong volume) {
  this->volume = volume;
  appParams.insert("volume", QString::number(volume));
}

qlonglong ScitemUpdateRequest::getWeight() const {
  return weight;
}
void ScitemUpdateRequest::setWeight (qlonglong weight) {
  this->weight = weight;
  appParams.insert("weight", QString::number(weight));
}

qlonglong ScitemUpdateRequest::getWidth() const {
  return width;
}
void ScitemUpdateRequest::setWidth (qlonglong width) {
  this->width = width;
  appParams.insert("width", QString::number(width));
}

QString ScitemUpdateRequest::getWmsCode() const {
  return wmsCode;
}
void ScitemUpdateRequest::setWmsCode (QString wmsCode) {
  this->wmsCode = wmsCode;
  appParams.insert("wms_code", wmsCode);
}



ScitemUpdateResponse *ScitemUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ScitemUpdateResponse *tmpResponse = new ScitemUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
