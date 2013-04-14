#ifndef PROMOTIONCOUPONADDRESPONSE_H
#define PROMOTIONCOUPONADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 创建店铺优惠券。有效期内的店铺优惠券总数量不超过200张
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCouponAddResponse : public TaoResponse
{
public:
 virtual ~PromotionCouponAddResponse() { }

  qlonglong getCouponId() const;
  void setCouponId (qlonglong couponId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 优惠券的id
 **/
  qlonglong couponId;

};

#endif
