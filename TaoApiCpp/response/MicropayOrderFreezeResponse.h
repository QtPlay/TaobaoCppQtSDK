#ifndef MICROPAYORDERFREEZERESPONSE_H
#define MICROPAYORDERFREEZERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/MicroPayOrderDetail.h>


/**
 * @brief TOP RESPONSE API: 该接口是支付宝提成冻结支付宝资金的操作
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderFreezeResponse : public TaoResponse
{
public:
 virtual ~MicropayOrderFreezeResponse() { }

  MicroPayOrderDetail getMicroPayOrderDetail() const;
  void setMicroPayOrderDetail (MicroPayOrderDetail microPayOrderDetail);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 冻结订单详情
 **/
  MicroPayOrderDetail microPayOrderDetail;

};

#endif
