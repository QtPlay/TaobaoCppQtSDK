#include <TaoApiCpp/request/PromotionCoupondetailGetRequest.h>

QString PromotionCoupondetailGetRequest::getApiMethodName() const {
  return "taobao.promotion.coupondetail.get";
}

QString PromotionCoupondetailGetRequest::getBuyerNick() const {
  return buyerNick;
}
void PromotionCoupondetailGetRequest::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
  appParams.insert("buyer_nick", buyerNick);
}

qlonglong PromotionCoupondetailGetRequest::getCouponId() const {
  return couponId;
}
void PromotionCoupondetailGetRequest::setCouponId (qlonglong couponId) {
  this->couponId = couponId;
  appParams.insert("coupon_id", QString::number(couponId));
}

QDateTime PromotionCoupondetailGetRequest::getEndTime() const {
  return endTime;
}
void PromotionCoupondetailGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong PromotionCoupondetailGetRequest::getPageNo() const {
  return pageNo;
}
void PromotionCoupondetailGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong PromotionCoupondetailGetRequest::getPageSize() const {
  return pageSize;
}
void PromotionCoupondetailGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString PromotionCoupondetailGetRequest::getState() const {
  return state;
}
void PromotionCoupondetailGetRequest::setState (QString state) {
  this->state = state;
  appParams.insert("state", state);
}



PromotionCoupondetailGetResponse *PromotionCoupondetailGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionCoupondetailGetResponse *tmpResponse = new PromotionCoupondetailGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
