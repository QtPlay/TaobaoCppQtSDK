#ifndef PROMOTIONCOUPONTRANSFERRESPONSE_H
#define PROMOTIONCOUPONTRANSFERRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 买家可以将自己“未使用”状态下的优惠券转发给任意淘宝用户。 
只能转发“未使用”状态下的优惠券
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCouponTransferResponse : public TaoResponse
{
public:
 virtual ~PromotionCouponTransferResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief false代表失败，true代表成功
 **/
  bool isSuccess;

};

#endif
