#include <TaoApiCpp/request/PromotionActivityAddRequest.h>

QString PromotionActivityAddRequest::getApiMethodName() const {
  return "taobao.promotion.activity.add";
}

qlonglong PromotionActivityAddRequest::getCouponCount() const {
  return couponCount;
}
void PromotionActivityAddRequest::setCouponCount (qlonglong couponCount) {
  this->couponCount = couponCount;
  appParams.insert("coupon_count", QString::number(couponCount));
}

qlonglong PromotionActivityAddRequest::getCouponId() const {
  return couponId;
}
void PromotionActivityAddRequest::setCouponId (qlonglong couponId) {
  this->couponId = couponId;
  appParams.insert("coupon_id", QString::number(couponId));
}

qlonglong PromotionActivityAddRequest::getPersonLimitCount() const {
  return personLimitCount;
}
void PromotionActivityAddRequest::setPersonLimitCount (qlonglong personLimitCount) {
  this->personLimitCount = personLimitCount;
  appParams.insert("person_limit_count", QString::number(personLimitCount));
}

qlonglong PromotionActivityAddRequest::getUploadToTaoquan() const {
  return uploadToTaoquan;
}
void PromotionActivityAddRequest::setUploadToTaoquan (qlonglong uploadToTaoquan) {
  this->uploadToTaoquan = uploadToTaoquan;
  appParams.insert("upload_to_taoquan", QString::number(uploadToTaoquan));
}



PromotionActivityAddResponse *PromotionActivityAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionActivityAddResponse *tmpResponse = new PromotionActivityAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
