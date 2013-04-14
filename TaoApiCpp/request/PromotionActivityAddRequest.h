#ifndef PROMOTIONACTIVITYADDREQUEST_H
#define PROMOTIONACTIVITYADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionActivityAddResponse.h>

/**
 * TOP API: 创建某个卖家的店铺优惠券领取活动。返回，优惠券领取活动ID，优惠券领取链接。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionActivityAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCouponCount() const
;  void setCouponCount (qlonglong couponCount);

 qlonglong getCouponId() const
;  void setCouponId (qlonglong couponId);

 qlonglong getPersonLimitCount() const
;  void setPersonLimitCount (qlonglong personLimitCount);

 qlonglong getUploadToTaoquan() const
;  void setUploadToTaoquan (qlonglong uploadToTaoquan);


  virtual PromotionActivityAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 优惠券总领用数量
 **/
  qlonglong couponCount;

/**
 * @brief 优惠券的id，唯一标识这个优惠券
 **/
  qlonglong couponId;

/**
 * @brief 每个人最多领用数量，0代表不限
 **/
  qlonglong personLimitCount;

/**
 * @brief 是否将该活动优惠券同步到淘券市场 
1（不同步） 
2（同步）
 **/
  qlonglong uploadToTaoquan;

};

#endif  /* PROMOTIONACTIVITYADDREQUEST_H */
