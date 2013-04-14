#include <TaoApiCpp/request/TaobaokeItemsCouponGetRequest.h>

QString TaobaokeItemsCouponGetRequest::getApiMethodName() const {
  return "taobao.taobaoke.items.coupon.get";
}

QString TaobaokeItemsCouponGetRequest::getArea() const {
  return area;
}
void TaobaokeItemsCouponGetRequest::setArea (QString area) {
  this->area = area;
  appParams.insert("area", area);
}

qlonglong TaobaokeItemsCouponGetRequest::getCid() const {
  return cid;
}
void TaobaokeItemsCouponGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

qlonglong TaobaokeItemsCouponGetRequest::getCouponType() const {
  return couponType;
}
void TaobaokeItemsCouponGetRequest::setCouponType (qlonglong couponType) {
  this->couponType = couponType;
  appParams.insert("coupon_type", QString::number(couponType));
}

qlonglong TaobaokeItemsCouponGetRequest::getEndCommissionNum() const {
  return endCommissionNum;
}
void TaobaokeItemsCouponGetRequest::setEndCommissionNum (qlonglong endCommissionNum) {
  this->endCommissionNum = endCommissionNum;
  appParams.insert("end_commission_num", QString::number(endCommissionNum));
}

qlonglong TaobaokeItemsCouponGetRequest::getEndCommissionRate() const {
  return endCommissionRate;
}
void TaobaokeItemsCouponGetRequest::setEndCommissionRate (qlonglong endCommissionRate) {
  this->endCommissionRate = endCommissionRate;
  appParams.insert("end_commission_rate", QString::number(endCommissionRate));
}

qlonglong TaobaokeItemsCouponGetRequest::getEndCommissionVolume() const {
  return endCommissionVolume;
}
void TaobaokeItemsCouponGetRequest::setEndCommissionVolume (qlonglong endCommissionVolume) {
  this->endCommissionVolume = endCommissionVolume;
  appParams.insert("end_commission_volume", QString::number(endCommissionVolume));
}

qlonglong TaobaokeItemsCouponGetRequest::getEndCouponRate() const {
  return endCouponRate;
}
void TaobaokeItemsCouponGetRequest::setEndCouponRate (qlonglong endCouponRate) {
  this->endCouponRate = endCouponRate;
  appParams.insert("end_coupon_rate", QString::number(endCouponRate));
}

QString TaobaokeItemsCouponGetRequest::getEndCredit() const {
  return endCredit;
}
void TaobaokeItemsCouponGetRequest::setEndCredit (QString endCredit) {
  this->endCredit = endCredit;
  appParams.insert("end_credit", endCredit);
}

qlonglong TaobaokeItemsCouponGetRequest::getEndVolume() const {
  return endVolume;
}
void TaobaokeItemsCouponGetRequest::setEndVolume (qlonglong endVolume) {
  this->endVolume = endVolume;
  appParams.insert("end_volume", QString::number(endVolume));
}

QString TaobaokeItemsCouponGetRequest::getFields() const {
  return fields;
}
void TaobaokeItemsCouponGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TaobaokeItemsCouponGetRequest::getIsMobile() const {
  return isMobile;
}
void TaobaokeItemsCouponGetRequest::setIsMobile (bool isMobile) {
  this->isMobile = isMobile;
  appParams.insert("is_mobile", isMobile? "true": "false");
}

QString TaobaokeItemsCouponGetRequest::getKeyword() const {
  return keyword;
}
void TaobaokeItemsCouponGetRequest::setKeyword (QString keyword) {
  this->keyword = keyword;
  appParams.insert("keyword", keyword);
}

QString TaobaokeItemsCouponGetRequest::getNick() const {
  return nick;
}
void TaobaokeItemsCouponGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString TaobaokeItemsCouponGetRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeItemsCouponGetRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong TaobaokeItemsCouponGetRequest::getPageNo() const {
  return pageNo;
}
void TaobaokeItemsCouponGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong TaobaokeItemsCouponGetRequest::getPageSize() const {
  return pageSize;
}
void TaobaokeItemsCouponGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong TaobaokeItemsCouponGetRequest::getPid() const {
  return pid;
}
void TaobaokeItemsCouponGetRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

qlonglong TaobaokeItemsCouponGetRequest::getReferType() const {
  return referType;
}
void TaobaokeItemsCouponGetRequest::setReferType (qlonglong referType) {
  this->referType = referType;
  appParams.insert("refer_type", QString::number(referType));
}

QString TaobaokeItemsCouponGetRequest::getShopType() const {
  return shopType;
}
void TaobaokeItemsCouponGetRequest::setShopType (QString shopType) {
  this->shopType = shopType;
  appParams.insert("shop_type", shopType);
}

QString TaobaokeItemsCouponGetRequest::getSort() const {
  return sort;
}
void TaobaokeItemsCouponGetRequest::setSort (QString sort) {
  this->sort = sort;
  appParams.insert("sort", sort);
}

qlonglong TaobaokeItemsCouponGetRequest::getStartCommissionNum() const {
  return startCommissionNum;
}
void TaobaokeItemsCouponGetRequest::setStartCommissionNum (qlonglong startCommissionNum) {
  this->startCommissionNum = startCommissionNum;
  appParams.insert("start_commission_num", QString::number(startCommissionNum));
}

qlonglong TaobaokeItemsCouponGetRequest::getStartCommissionRate() const {
  return startCommissionRate;
}
void TaobaokeItemsCouponGetRequest::setStartCommissionRate (qlonglong startCommissionRate) {
  this->startCommissionRate = startCommissionRate;
  appParams.insert("start_commission_rate", QString::number(startCommissionRate));
}

qlonglong TaobaokeItemsCouponGetRequest::getStartCommissionVolume() const {
  return startCommissionVolume;
}
void TaobaokeItemsCouponGetRequest::setStartCommissionVolume (qlonglong startCommissionVolume) {
  this->startCommissionVolume = startCommissionVolume;
  appParams.insert("start_commission_volume", QString::number(startCommissionVolume));
}

qlonglong TaobaokeItemsCouponGetRequest::getStartCouponRate() const {
  return startCouponRate;
}
void TaobaokeItemsCouponGetRequest::setStartCouponRate (qlonglong startCouponRate) {
  this->startCouponRate = startCouponRate;
  appParams.insert("start_coupon_rate", QString::number(startCouponRate));
}

QString TaobaokeItemsCouponGetRequest::getStartCredit() const {
  return startCredit;
}
void TaobaokeItemsCouponGetRequest::setStartCredit (QString startCredit) {
  this->startCredit = startCredit;
  appParams.insert("start_credit", startCredit);
}

qlonglong TaobaokeItemsCouponGetRequest::getStartVolume() const {
  return startVolume;
}
void TaobaokeItemsCouponGetRequest::setStartVolume (qlonglong startVolume) {
  this->startVolume = startVolume;
  appParams.insert("start_volume", QString::number(startVolume));
}



TaobaokeItemsCouponGetResponse *TaobaokeItemsCouponGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeItemsCouponGetResponse *tmpResponse = new TaobaokeItemsCouponGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
