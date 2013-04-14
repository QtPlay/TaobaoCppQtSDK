#include <TaoApiCpp/request/PromotionCouponSendRequest.h>

QString PromotionCouponSendRequest::getApiMethodName() const {
  return "taobao.promotion.coupon.send";
}

QString PromotionCouponSendRequest::getBuyerNick() const {
  return buyerNick;
}
void PromotionCouponSendRequest::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
  appParams.insert("buyer_nick", buyerNick);
}

qlonglong PromotionCouponSendRequest::getCouponId() const {
  return couponId;
}
void PromotionCouponSendRequest::setCouponId (qlonglong couponId) {
  this->couponId = couponId;
  appParams.insert("coupon_id", QString::number(couponId));
}



PromotionCouponSendResponse *PromotionCouponSendRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionCouponSendResponse *tmpResponse = new PromotionCouponSendResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
