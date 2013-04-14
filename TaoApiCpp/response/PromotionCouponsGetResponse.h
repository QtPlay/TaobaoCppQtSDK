#ifndef PROMOTIONCOUPONSGETRESPONSE_H
#define PROMOTIONCOUPONSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Coupon.h>


/**
 * @brief TOP RESPONSE API: 查询卖家已经创建的优惠券，接口返回信息：优惠券ID，面值，创建时间，有效期，使用条件，使用渠道，创建渠道，优惠券总数量
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCouponsGetResponse : public TaoResponse
{
public:
 virtual ~PromotionCouponsGetResponse() { }

  QList<Coupon> getCoupons() const;
  void setCoupons (QList<Coupon> coupons);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 优惠券列表
 **/
  QList<Coupon> coupons;

/**
 * @brief 查询的总数量
 **/
  qlonglong totalResults;

};

#endif
