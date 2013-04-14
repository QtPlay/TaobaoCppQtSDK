#include <TaoApiCpp/request/ItemSkuPriceUpdateRequest.h>

QString ItemSkuPriceUpdateRequest::getApiMethodName() const {
  return "taobao.item.sku.price.update";
}

QString ItemSkuPriceUpdateRequest::getItemPrice() const {
  return itemPrice;
}
void ItemSkuPriceUpdateRequest::setItemPrice (QString itemPrice) {
  this->itemPrice = itemPrice;
  appParams.insert("item_price", itemPrice);
}

QString ItemSkuPriceUpdateRequest::getLang() const {
  return lang;
}
void ItemSkuPriceUpdateRequest::setLang (QString lang) {
  this->lang = lang;
  appParams.insert("lang", lang);
}

qlonglong ItemSkuPriceUpdateRequest::getNumIid() const {
  return numIid;
}
void ItemSkuPriceUpdateRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemSkuPriceUpdateRequest::getOuterId() const {
  return outerId;
}
void ItemSkuPriceUpdateRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

QString ItemSkuPriceUpdateRequest::getPrice() const {
  return price;
}
void ItemSkuPriceUpdateRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

QString ItemSkuPriceUpdateRequest::getProperties() const {
  return properties;
}
void ItemSkuPriceUpdateRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}

qlonglong ItemSkuPriceUpdateRequest::getQuantity() const {
  return quantity;
}
void ItemSkuPriceUpdateRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}



ItemSkuPriceUpdateResponse *ItemSkuPriceUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemSkuPriceUpdateResponse *tmpResponse = new ItemSkuPriceUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
