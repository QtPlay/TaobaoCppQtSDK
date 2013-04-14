#ifndef PROMOTIONCOUPONDETAILGETRESPONSE_H
#define PROMOTIONCOUPONDETAILGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/CouponDetail.h>


/**
 * @brief TOP RESPONSE API: 通过接口可以查询某个店铺优惠券的买家详细信息返回的信息，买家昵称， 使用渠道，使用状态，总数量
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCoupondetailGetResponse : public TaoResponse
{
public:
 virtual ~PromotionCoupondetailGetResponse() { }

  QList<CouponDetail> getCouponDetails() const;
  void setCouponDetails (QList<CouponDetail> couponDetails);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 优惠券详细信息
 **/
  QList<CouponDetail> couponDetails;

/**
 * @brief 查询数量总数
 **/
  qlonglong totalResults;

};

#endif
