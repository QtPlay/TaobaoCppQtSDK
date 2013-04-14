#ifndef PROMOTIONACTIVITYDELETERESPONSE_H
#define PROMOTIONACTIVITYDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 删除卖家创建的店铺优惠券活动
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionActivityDeleteResponse : public TaoResponse
{
public:
 virtual ~PromotionActivityDeleteResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief true成功，false失败
 **/
  bool isSuccess;

};

#endif
