#include <TaoApiCpp/request/TaobaokeShopsRelateGetRequest.h>

QString TaobaokeShopsRelateGetRequest::getApiMethodName() const {
  return "taobao.taobaoke.shops.relate.get";
}

QString TaobaokeShopsRelateGetRequest::getFields() const {
  return fields;
}
void TaobaokeShopsRelateGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TaobaokeShopsRelateGetRequest::getIsMobile() const {
  return isMobile;
}
void TaobaokeShopsRelateGetRequest::setIsMobile (bool isMobile) {
  this->isMobile = isMobile;
  appParams.insert("is_mobile", isMobile? "true": "false");
}

qlonglong TaobaokeShopsRelateGetRequest::getMaxCount() const {
  return maxCount;
}
void TaobaokeShopsRelateGetRequest::setMaxCount (qlonglong maxCount) {
  this->maxCount = maxCount;
  appParams.insert("max_count", QString::number(maxCount));
}

QString TaobaokeShopsRelateGetRequest::getNick() const {
  return nick;
}
void TaobaokeShopsRelateGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString TaobaokeShopsRelateGetRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeShopsRelateGetRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong TaobaokeShopsRelateGetRequest::getPid() const {
  return pid;
}
void TaobaokeShopsRelateGetRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

qlonglong TaobaokeShopsRelateGetRequest::getSellerId() const {
  return sellerId;
}
void TaobaokeShopsRelateGetRequest::setSellerId (qlonglong sellerId) {
  this->sellerId = sellerId;
  appParams.insert("seller_id", QString::number(sellerId));
}

QString TaobaokeShopsRelateGetRequest::getSellerNick() const {
  return sellerNick;
}
void TaobaokeShopsRelateGetRequest::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
  appParams.insert("seller_nick", sellerNick);
}

QString TaobaokeShopsRelateGetRequest::getShopType() const {
  return shopType;
}
void TaobaokeShopsRelateGetRequest::setShopType (QString shopType) {
  this->shopType = shopType;
  appParams.insert("shop_type", shopType);
}

QString TaobaokeShopsRelateGetRequest::getSort() const {
  return sort;
}
void TaobaokeShopsRelateGetRequest::setSort (QString sort) {
  this->sort = sort;
  appParams.insert("sort", sort);
}



TaobaokeShopsRelateGetResponse *TaobaokeShopsRelateGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeShopsRelateGetResponse *tmpResponse = new TaobaokeShopsRelateGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
