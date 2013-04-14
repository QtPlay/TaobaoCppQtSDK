#include <TaoApiCpp/request/ItemSkuDeleteRequest.h>

QString ItemSkuDeleteRequest::getApiMethodName() const {
  return "taobao.item.sku.delete";
}

qlonglong ItemSkuDeleteRequest::getItemNum() const {
  return itemNum;
}
void ItemSkuDeleteRequest::setItemNum (qlonglong itemNum) {
  this->itemNum = itemNum;
  appParams.insert("item_num", QString::number(itemNum));
}

QString ItemSkuDeleteRequest::getItemPrice() const {
  return itemPrice;
}
void ItemSkuDeleteRequest::setItemPrice (QString itemPrice) {
  this->itemPrice = itemPrice;
  appParams.insert("item_price", itemPrice);
}

QString ItemSkuDeleteRequest::getLang() const {
  return lang;
}
void ItemSkuDeleteRequest::setLang (QString lang) {
  this->lang = lang;
  appParams.insert("lang", lang);
}

qlonglong ItemSkuDeleteRequest::getNumIid() const {
  return numIid;
}
void ItemSkuDeleteRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemSkuDeleteRequest::getProperties() const {
  return properties;
}
void ItemSkuDeleteRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}



ItemSkuDeleteResponse *ItemSkuDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemSkuDeleteResponse *tmpResponse = new ItemSkuDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
