#ifndef PROMOTIONCOUPONADDREQUEST_H
#define PROMOTIONCOUPONADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionCouponAddResponse.h>

/**
 * TOP API: 创建店铺优惠券。有效期内的店铺优惠券总数量不超过200张
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCouponAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCondition() const
;  void setCondition (qlonglong condition);

 qlonglong getDenominations() const
;  void setDenominations (qlonglong denominations);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 QDateTime getStartTime() const
;  void setStartTime (QDateTime startTime);


  virtual PromotionCouponAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 订单满多少元才能用这个优惠券，500就是满500元才能使用
 **/
  qlonglong condition;

/**
 * @brief 优惠券的面额，必须是3，5，10，20，50，100
 **/
  qlonglong denominations;

/**
 * @brief 优惠券的截止日期
 **/
  QDateTime endTime;

/**
 * @brief 优惠券的生效时间
 **/
  QDateTime startTime;

};

#endif  /* PROMOTIONCOUPONADDREQUEST_H */
