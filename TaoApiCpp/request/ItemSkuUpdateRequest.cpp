#include <TaoApiCpp/request/ItemSkuUpdateRequest.h>

QString ItemSkuUpdateRequest::getApiMethodName() const {
  return "taobao.item.sku.update";
}

QString ItemSkuUpdateRequest::getItemPrice() const {
  return itemPrice;
}
void ItemSkuUpdateRequest::setItemPrice (QString itemPrice) {
  this->itemPrice = itemPrice;
  appParams.insert("item_price", itemPrice);
}

QString ItemSkuUpdateRequest::getLang() const {
  return lang;
}
void ItemSkuUpdateRequest::setLang (QString lang) {
  this->lang = lang;
  appParams.insert("lang", lang);
}

qlonglong ItemSkuUpdateRequest::getNumIid() const {
  return numIid;
}
void ItemSkuUpdateRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemSkuUpdateRequest::getOuterId() const {
  return outerId;
}
void ItemSkuUpdateRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

QString ItemSkuUpdateRequest::getPrice() const {
  return price;
}
void ItemSkuUpdateRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

QString ItemSkuUpdateRequest::getProperties() const {
  return properties;
}
void ItemSkuUpdateRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}

qlonglong ItemSkuUpdateRequest::getQuantity() const {
  return quantity;
}
void ItemSkuUpdateRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}

QString ItemSkuUpdateRequest::getSpecId() const {
  return specId;
}
void ItemSkuUpdateRequest::setSpecId (QString specId) {
  this->specId = specId;
  appParams.insert("spec_id", specId);
}



ItemSkuUpdateResponse *ItemSkuUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemSkuUpdateResponse *tmpResponse = new ItemSkuUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
