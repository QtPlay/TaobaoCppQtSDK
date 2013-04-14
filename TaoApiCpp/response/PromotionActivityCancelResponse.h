#ifndef PROMOTIONACTIVITYCANCELRESPONSE_H
#define PROMOTIONACTIVITYCANCELRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 取消正在开始的店铺优惠券活动
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionActivityCancelResponse : public TaoResponse
{
public:
 virtual ~PromotionActivityCancelResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief true成功，false 失败
 **/
  bool isSuccess;

};

#endif
