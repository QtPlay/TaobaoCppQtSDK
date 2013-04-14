#ifndef PROMOTIONACTIVITYGETRESPONSE_H
#define PROMOTIONACTIVITYGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Activity.h>


/**
 * @brief TOP RESPONSE API: 查询某个卖家的店铺优惠券领取活动 
返回，优惠券领取活动ID，优惠券ID，总领用量，每人限领量，已领取数量 
领取活动状态，优惠券领取链接 
最多50个优惠券
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionActivityGetResponse : public TaoResponse
{
public:
 virtual ~PromotionActivityGetResponse() { }

  QList<Activity> getActivitys() const;
  void setActivitys (QList<Activity> activitys);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 活动列表
 **/
  QList<Activity> activitys;

};

#endif
