#ifndef LOGISTICSORDERCHARGERESPONSE_H
#define LOGISTICSORDERCHARGERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/OrderCharge.h>


/**
 * @brief TOP RESPONSE API: 订单价格计算
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrderChargeResponse : public TaoResponse
{
public:
 virtual ~LogisticsOrderChargeResponse() { }

  OrderCharge getOrderCharge() const;
  void setOrderCharge (OrderCharge orderCharge);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 订单费用
 **/
  OrderCharge orderCharge;

};

#endif
