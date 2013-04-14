#include <TaoApiCpp/request/TaobaokeItemsRelateGetRequest.h>

QString TaobaokeItemsRelateGetRequest::getApiMethodName() const {
  return "taobao.taobaoke.items.relate.get";
}

qlonglong TaobaokeItemsRelateGetRequest::getCid() const {
  return cid;
}
void TaobaokeItemsRelateGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString TaobaokeItemsRelateGetRequest::getFields() const {
  return fields;
}
void TaobaokeItemsRelateGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TaobaokeItemsRelateGetRequest::getIsMobile() const {
  return isMobile;
}
void TaobaokeItemsRelateGetRequest::setIsMobile (bool isMobile) {
  this->isMobile = isMobile;
  appParams.insert("is_mobile", isMobile? "true": "false");
}

qlonglong TaobaokeItemsRelateGetRequest::getMaxCount() const {
  return maxCount;
}
void TaobaokeItemsRelateGetRequest::setMaxCount (qlonglong maxCount) {
  this->maxCount = maxCount;
  appParams.insert("max_count", QString::number(maxCount));
}

QString TaobaokeItemsRelateGetRequest::getNick() const {
  return nick;
}
void TaobaokeItemsRelateGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong TaobaokeItemsRelateGetRequest::getNumIid() const {
  return numIid;
}
void TaobaokeItemsRelateGetRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString TaobaokeItemsRelateGetRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeItemsRelateGetRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong TaobaokeItemsRelateGetRequest::getPid() const {
  return pid;
}
void TaobaokeItemsRelateGetRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

qlonglong TaobaokeItemsRelateGetRequest::getReferType() const {
  return referType;
}
void TaobaokeItemsRelateGetRequest::setReferType (qlonglong referType) {
  this->referType = referType;
  appParams.insert("refer_type", QString::number(referType));
}

qlonglong TaobaokeItemsRelateGetRequest::getRelateType() const {
  return relateType;
}
void TaobaokeItemsRelateGetRequest::setRelateType (qlonglong relateType) {
  this->relateType = relateType;
  appParams.insert("relate_type", QString::number(relateType));
}

qlonglong TaobaokeItemsRelateGetRequest::getSellerId() const {
  return sellerId;
}
void TaobaokeItemsRelateGetRequest::setSellerId (qlonglong sellerId) {
  this->sellerId = sellerId;
  appParams.insert("seller_id", QString::number(sellerId));
}

QString TaobaokeItemsRelateGetRequest::getShopType() const {
  return shopType;
}
void TaobaokeItemsRelateGetRequest::setShopType (QString shopType) {
  this->shopType = shopType;
  appParams.insert("shop_type", shopType);
}

QString TaobaokeItemsRelateGetRequest::getSort() const {
  return sort;
}
void TaobaokeItemsRelateGetRequest::setSort (QString sort) {
  this->sort = sort;
  appParams.insert("sort", sort);
}

QString TaobaokeItemsRelateGetRequest::getTrackIid() const {
  return trackIid;
}
void TaobaokeItemsRelateGetRequest::setTrackIid (QString trackIid) {
  this->trackIid = trackIid;
  appParams.insert("track_iid", trackIid);
}



TaobaokeItemsRelateGetResponse *TaobaokeItemsRelateGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeItemsRelateGetResponse *tmpResponse = new TaobaokeItemsRelateGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
