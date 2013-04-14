#ifndef PROMOTIONCOUPONSGETREQUEST_H
#define PROMOTIONCOUPONSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionCouponsGetResponse.h>

/**
 * TOP API: 查询卖家已经创建的优惠券，接口返回信息：优惠券ID，面值，创建时间，有效期，使用条件，使用渠道，创建渠道，优惠券总数量
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCouponsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCouponId() const
;  void setCouponId (qlonglong couponId);

 qlonglong getDenominations() const
;  void setDenominations (qlonglong denominations);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);


  virtual PromotionCouponsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 优惠券的id，唯一标识这个优惠券
 **/
  qlonglong couponId;

/**
 * @brief 优惠券的面额，必须是3，5，10，20，50,100
 **/
  qlonglong denominations;

/**
 * @brief 优惠券的截止日期
 **/
  QDateTime endTime;

/**
 * @brief 查询的页号，结果集是分页返回的，每页20条
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数
 **/
  qlonglong pageSize;

};

#endif  /* PROMOTIONCOUPONSGETREQUEST_H */
