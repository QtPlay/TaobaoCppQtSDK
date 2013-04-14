#ifndef PROMOTIONACTIVITYCANCELREQUEST_H
#define PROMOTIONACTIVITYCANCELREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionActivityCancelResponse.h>

/**
 * TOP API: 取消正在开始的店铺优惠券活动
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionActivityCancelRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActivityId() const
;  void setActivityId (qlonglong activityId);


  virtual PromotionActivityCancelResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动id
 **/
  qlonglong activityId;

};

#endif  /* PROMOTIONACTIVITYCANCELREQUEST_H */
