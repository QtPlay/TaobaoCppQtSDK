#include <TaoApiCpp/request/PromotionCouponsGetRequest.h>

QString PromotionCouponsGetRequest::getApiMethodName() const {
  return "taobao.promotion.coupons.get";
}

qlonglong PromotionCouponsGetRequest::getCouponId() const {
  return couponId;
}
void PromotionCouponsGetRequest::setCouponId (qlonglong couponId) {
  this->couponId = couponId;
  appParams.insert("coupon_id", QString::number(couponId));
}

qlonglong PromotionCouponsGetRequest::getDenominations() const {
  return denominations;
}
void PromotionCouponsGetRequest::setDenominations (qlonglong denominations) {
  this->denominations = denominations;
  appParams.insert("denominations", QString::number(denominations));
}

QDateTime PromotionCouponsGetRequest::getEndTime() const {
  return endTime;
}
void PromotionCouponsGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong PromotionCouponsGetRequest::getPageNo() const {
  return pageNo;
}
void PromotionCouponsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong PromotionCouponsGetRequest::getPageSize() const {
  return pageSize;
}
void PromotionCouponsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



PromotionCouponsGetResponse *PromotionCouponsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionCouponsGetResponse *tmpResponse = new PromotionCouponsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
