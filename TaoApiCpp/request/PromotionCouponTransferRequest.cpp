#include <TaoApiCpp/request/PromotionCouponTransferRequest.h>

QString PromotionCouponTransferRequest::getApiMethodName() const {
  return "taobao.promotion.coupon.transfer";
}

qlonglong PromotionCouponTransferRequest::getCouponNumber() const {
  return couponNumber;
}
void PromotionCouponTransferRequest::setCouponNumber (qlonglong couponNumber) {
  this->couponNumber = couponNumber;
  appParams.insert("coupon_number", QString::number(couponNumber));
}

QString PromotionCouponTransferRequest::getReceiveingBuyerName() const {
  return receiveingBuyerName;
}
void PromotionCouponTransferRequest::setReceiveingBuyerName (QString receiveingBuyerName) {
  this->receiveingBuyerName = receiveingBuyerName;
  appParams.insert("receiveing_buyer_name", receiveingBuyerName);
}



PromotionCouponTransferResponse *PromotionCouponTransferRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionCouponTransferResponse *tmpResponse = new PromotionCouponTransferResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
