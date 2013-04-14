#include <TaoApiCpp/request/ItemSkuAddRequest.h>

QString ItemSkuAddRequest::getApiMethodName() const {
  return "taobao.item.sku.add";
}

QString ItemSkuAddRequest::getItemPrice() const {
  return itemPrice;
}
void ItemSkuAddRequest::setItemPrice (QString itemPrice) {
  this->itemPrice = itemPrice;
  appParams.insert("item_price", itemPrice);
}

QString ItemSkuAddRequest::getLang() const {
  return lang;
}
void ItemSkuAddRequest::setLang (QString lang) {
  this->lang = lang;
  appParams.insert("lang", lang);
}

qlonglong ItemSkuAddRequest::getNumIid() const {
  return numIid;
}
void ItemSkuAddRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemSkuAddRequest::getOuterId() const {
  return outerId;
}
void ItemSkuAddRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

QString ItemSkuAddRequest::getPrice() const {
  return price;
}
void ItemSkuAddRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

QString ItemSkuAddRequest::getProperties() const {
  return properties;
}
void ItemSkuAddRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}

qlonglong ItemSkuAddRequest::getQuantity() const {
  return quantity;
}
void ItemSkuAddRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}

QString ItemSkuAddRequest::getSpecId() const {
  return specId;
}
void ItemSkuAddRequest::setSpecId (QString specId) {
  this->specId = specId;
  appParams.insert("spec_id", specId);
}



ItemSkuAddResponse *ItemSkuAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemSkuAddResponse *tmpResponse = new ItemSkuAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
