#include <TaoApiCpp/request/ItemsInventoryGetRequest.h>

QString ItemsInventoryGetRequest::getApiMethodName() const {
  return "taobao.items.inventory.get";
}

QString ItemsInventoryGetRequest::getBanner() const {
  return banner;
}
void ItemsInventoryGetRequest::setBanner (QString banner) {
  this->banner = banner;
  appParams.insert("banner", banner);
}

qlonglong ItemsInventoryGetRequest::getCid() const {
  return cid;
}
void ItemsInventoryGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QDateTime ItemsInventoryGetRequest::getEndModified() const {
  return endModified;
}
void ItemsInventoryGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString ItemsInventoryGetRequest::getFields() const {
  return fields;
}
void ItemsInventoryGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool ItemsInventoryGetRequest::getHasDiscount() const {
  return hasDiscount;
}
void ItemsInventoryGetRequest::setHasDiscount (bool hasDiscount) {
  this->hasDiscount = hasDiscount;
  appParams.insert("has_discount", hasDiscount? "true": "false");
}

bool ItemsInventoryGetRequest::getIsEx() const {
  return isEx;
}
void ItemsInventoryGetRequest::setIsEx (bool isEx) {
  this->isEx = isEx;
  appParams.insert("is_ex", isEx? "true": "false");
}

bool ItemsInventoryGetRequest::getIsTaobao() const {
  return isTaobao;
}
void ItemsInventoryGetRequest::setIsTaobao (bool isTaobao) {
  this->isTaobao = isTaobao;
  appParams.insert("is_taobao", isTaobao? "true": "false");
}

QString ItemsInventoryGetRequest::getOrderBy() const {
  return orderBy;
}
void ItemsInventoryGetRequest::setOrderBy (QString orderBy) {
  this->orderBy = orderBy;
  appParams.insert("order_by", orderBy);
}

qlonglong ItemsInventoryGetRequest::getPageNo() const {
  return pageNo;
}
void ItemsInventoryGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong ItemsInventoryGetRequest::getPageSize() const {
  return pageSize;
}
void ItemsInventoryGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString ItemsInventoryGetRequest::getQ() const {
  return q;
}
void ItemsInventoryGetRequest::setQ (QString q) {
  this->q = q;
  appParams.insert("q", q);
}

QString ItemsInventoryGetRequest::getSellerCids() const {
  return sellerCids;
}
void ItemsInventoryGetRequest::setSellerCids (QString sellerCids) {
  this->sellerCids = sellerCids;
  appParams.insert("seller_cids", sellerCids);
}

QDateTime ItemsInventoryGetRequest::getStartModified() const {
  return startModified;
}
void ItemsInventoryGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}



ItemsInventoryGetResponse *ItemsInventoryGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemsInventoryGetResponse *tmpResponse = new ItemsInventoryGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
