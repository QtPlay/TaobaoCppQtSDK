#include <TaoApiCpp/request/ItemsOnsaleGetRequest.h>

QString ItemsOnsaleGetRequest::getApiMethodName() const {
  return "taobao.items.onsale.get";
}

qlonglong ItemsOnsaleGetRequest::getCid() const {
  return cid;
}
void ItemsOnsaleGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QDateTime ItemsOnsaleGetRequest::getEndModified() const {
  return endModified;
}
void ItemsOnsaleGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString ItemsOnsaleGetRequest::getFields() const {
  return fields;
}
void ItemsOnsaleGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool ItemsOnsaleGetRequest::getHasDiscount() const {
  return hasDiscount;
}
void ItemsOnsaleGetRequest::setHasDiscount (bool hasDiscount) {
  this->hasDiscount = hasDiscount;
  appParams.insert("has_discount", hasDiscount? "true": "false");
}

bool ItemsOnsaleGetRequest::getHasShowcase() const {
  return hasShowcase;
}
void ItemsOnsaleGetRequest::setHasShowcase (bool hasShowcase) {
  this->hasShowcase = hasShowcase;
  appParams.insert("has_showcase", hasShowcase? "true": "false");
}

bool ItemsOnsaleGetRequest::getIsEx() const {
  return isEx;
}
void ItemsOnsaleGetRequest::setIsEx (bool isEx) {
  this->isEx = isEx;
  appParams.insert("is_ex", isEx? "true": "false");
}

bool ItemsOnsaleGetRequest::getIsTaobao() const {
  return isTaobao;
}
void ItemsOnsaleGetRequest::setIsTaobao (bool isTaobao) {
  this->isTaobao = isTaobao;
  appParams.insert("is_taobao", isTaobao? "true": "false");
}

QString ItemsOnsaleGetRequest::getOrderBy() const {
  return orderBy;
}
void ItemsOnsaleGetRequest::setOrderBy (QString orderBy) {
  this->orderBy = orderBy;
  appParams.insert("order_by", orderBy);
}

qlonglong ItemsOnsaleGetRequest::getPageNo() const {
  return pageNo;
}
void ItemsOnsaleGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong ItemsOnsaleGetRequest::getPageSize() const {
  return pageSize;
}
void ItemsOnsaleGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString ItemsOnsaleGetRequest::getQ() const {
  return q;
}
void ItemsOnsaleGetRequest::setQ (QString q) {
  this->q = q;
  appParams.insert("q", q);
}

QString ItemsOnsaleGetRequest::getSellerCids() const {
  return sellerCids;
}
void ItemsOnsaleGetRequest::setSellerCids (QString sellerCids) {
  this->sellerCids = sellerCids;
  appParams.insert("seller_cids", sellerCids);
}

QDateTime ItemsOnsaleGetRequest::getStartModified() const {
  return startModified;
}
void ItemsOnsaleGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}



ItemsOnsaleGetResponse *ItemsOnsaleGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemsOnsaleGetResponse *tmpResponse = new ItemsOnsaleGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
