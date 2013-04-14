#ifndef LOGISTICSCONSIGNRESENDRESPONSE_H
#define LOGISTICSCONSIGNRESENDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Shipping.h>


/**
 * @brief TOP RESPONSE API: 支持卖家发货后修改物流公司和运单号。支持订单类型支持在线下单和自己联系。 
自己联系只能切换为自己联系的公司，在线下单也只能切换为在线下单的物流公司。 
 
调用时订单状态是卖家已发货，自己联系在发货后24小时内在线下单未揽收成功才可使用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsConsignResendResponse : public TaoResponse
{
public:
 virtual ~LogisticsConsignResendResponse() { }

  Shipping getShipping() const;
  void setShipping (Shipping shipping);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回发货是否成功is_success
 **/
  Shipping shipping;

};

#endif
