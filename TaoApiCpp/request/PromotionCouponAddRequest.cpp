#include <TaoApiCpp/request/PromotionCouponAddRequest.h>

QString PromotionCouponAddRequest::getApiMethodName() const {
  return "taobao.promotion.coupon.add";
}

qlonglong PromotionCouponAddRequest::getCondition() const {
  return condition;
}
void PromotionCouponAddRequest::setCondition (qlonglong condition) {
  this->condition = condition;
  appParams.insert("condition", QString::number(condition));
}

qlonglong PromotionCouponAddRequest::getDenominations() const {
  return denominations;
}
void PromotionCouponAddRequest::setDenominations (qlonglong denominations) {
  this->denominations = denominations;
  appParams.insert("denominations", QString::number(denominations));
}

QDateTime PromotionCouponAddRequest::getEndTime() const {
  return endTime;
}
void PromotionCouponAddRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime PromotionCouponAddRequest::getStartTime() const {
  return startTime;
}
void PromotionCouponAddRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



PromotionCouponAddResponse *PromotionCouponAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionCouponAddResponse *tmpResponse = new PromotionCouponAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
