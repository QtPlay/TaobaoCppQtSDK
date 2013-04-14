#ifndef PROMOTIONACTIVITYADDRESPONSE_H
#define PROMOTIONACTIVITYADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Activity.h>


/**
 * @brief TOP RESPONSE API: 创建某个卖家的店铺优惠券领取活动。返回，优惠券领取活动ID，优惠券领取链接。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionActivityAddResponse : public TaoResponse
{
public:
 virtual ~PromotionActivityAddResponse() { }

  Activity getActivity() const;
  void setActivity (Activity activity);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 活动信息，包括活动id和链接,目前只返回activity_id,activity_url
 **/
  Activity activity;

};

#endif
