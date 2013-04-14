#include <TaoApiCpp/request/WlbItemUpdateRequest.h>

QString WlbItemUpdateRequest::getApiMethodName() const {
  return "taobao.wlb.item.update";
}

QString WlbItemUpdateRequest::getColor() const {
  return color;
}
void WlbItemUpdateRequest::setColor (QString color) {
  this->color = color;
  appParams.insert("color", color);
}

QString WlbItemUpdateRequest::getDeletePropertyKeyList() const {
  return deletePropertyKeyList;
}
void WlbItemUpdateRequest::setDeletePropertyKeyList (QString deletePropertyKeyList) {
  this->deletePropertyKeyList = deletePropertyKeyList;
  appParams.insert("delete_property_key_list", deletePropertyKeyList);
}

QString WlbItemUpdateRequest::getGoodsCat() const {
  return goodsCat;
}
void WlbItemUpdateRequest::setGoodsCat (QString goodsCat) {
  this->goodsCat = goodsCat;
  appParams.insert("goods_cat", goodsCat);
}

qlonglong WlbItemUpdateRequest::getHeight() const {
  return height;
}
void WlbItemUpdateRequest::setHeight (qlonglong height) {
  this->height = height;
  appParams.insert("height", QString::number(height));
}

qlonglong WlbItemUpdateRequest::getId() const {
  return id;
}
void WlbItemUpdateRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

bool WlbItemUpdateRequest::getIsDangerous() const {
  return isDangerous;
}
void WlbItemUpdateRequest::setIsDangerous (bool isDangerous) {
  this->isDangerous = isDangerous;
  appParams.insert("is_dangerous", isDangerous? "true": "false");
}

bool WlbItemUpdateRequest::getIsFriable() const {
  return isFriable;
}
void WlbItemUpdateRequest::setIsFriable (bool isFriable) {
  this->isFriable = isFriable;
  appParams.insert("is_friable", isFriable? "true": "false");
}

qlonglong WlbItemUpdateRequest::getLength() const {
  return length;
}
void WlbItemUpdateRequest::setLength (qlonglong length) {
  this->length = length;
  appParams.insert("length", QString::number(length));
}

QString WlbItemUpdateRequest::getName() const {
  return name;
}
void WlbItemUpdateRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString WlbItemUpdateRequest::getPackageMaterial() const {
  return packageMaterial;
}
void WlbItemUpdateRequest::setPackageMaterial (QString packageMaterial) {
  this->packageMaterial = packageMaterial;
  appParams.insert("package_material", packageMaterial);
}

QString WlbItemUpdateRequest::getPricingCat() const {
  return pricingCat;
}
void WlbItemUpdateRequest::setPricingCat (QString pricingCat) {
  this->pricingCat = pricingCat;
  appParams.insert("pricing_cat", pricingCat);
}

QString WlbItemUpdateRequest::getRemark() const {
  return remark;
}
void WlbItemUpdateRequest::setRemark (QString remark) {
  this->remark = remark;
  appParams.insert("remark", remark);
}

QString WlbItemUpdateRequest::getTitle() const {
  return title;
}
void WlbItemUpdateRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}

QString WlbItemUpdateRequest::getUpdatePropertyKeyList() const {
  return updatePropertyKeyList;
}
void WlbItemUpdateRequest::setUpdatePropertyKeyList (QString updatePropertyKeyList) {
  this->updatePropertyKeyList = updatePropertyKeyList;
  appParams.insert("update_property_key_list", updatePropertyKeyList);
}

QString WlbItemUpdateRequest::getUpdatePropertyValueList() const {
  return updatePropertyValueList;
}
void WlbItemUpdateRequest::setUpdatePropertyValueList (QString updatePropertyValueList) {
  this->updatePropertyValueList = updatePropertyValueList;
  appParams.insert("update_property_value_list", updatePropertyValueList);
}

qlonglong WlbItemUpdateRequest::getVolume() const {
  return volume;
}
void WlbItemUpdateRequest::setVolume (qlonglong volume) {
  this->volume = volume;
  appParams.insert("volume", QString::number(volume));
}

qlonglong WlbItemUpdateRequest::getWeight() const {
  return weight;
}
void WlbItemUpdateRequest::setWeight (qlonglong weight) {
  this->weight = weight;
  appParams.insert("weight", QString::number(weight));
}

qlonglong WlbItemUpdateRequest::getWidth() const {
  return width;
}
void WlbItemUpdateRequest::setWidth (qlonglong width) {
  this->width = width;
  appParams.insert("width", QString::number(width));
}



WlbItemUpdateResponse *WlbItemUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemUpdateResponse *tmpResponse = new WlbItemUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
