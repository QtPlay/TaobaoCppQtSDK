#ifndef PROMOTIONACTIVITYGETREQUEST_H
#define PROMOTIONACTIVITYGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionActivityGetResponse.h>

/**
 * TOP API: 查询某个卖家的店铺优惠券领取活动 
返回，优惠券领取活动ID，优惠券ID，总领用量，每人限领量，已领取数量 
领取活动状态，优惠券领取链接 
最多50个优惠券
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionActivityGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActivityId() const
;  void setActivityId (qlonglong activityId);


  virtual PromotionActivityGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动的id
 **/
  qlonglong activityId;

};

#endif  /* PROMOTIONACTIVITYGETREQUEST_H */
