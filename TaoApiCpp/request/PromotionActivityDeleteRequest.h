#ifndef PROMOTIONACTIVITYDELETEREQUEST_H
#define PROMOTIONACTIVITYDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionActivityDeleteResponse.h>

/**
 * TOP API: 删除卖家创建的店铺优惠券活动
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionActivityDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActivityId() const
;  void setActivityId (qlonglong activityId);


  virtual PromotionActivityDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 优惠券的id
 **/
  qlonglong activityId;

};

#endif  /* PROMOTIONACTIVITYDELETEREQUEST_H */
