#ifndef LOGISTICSDUMMYSENDRESPONSE_H
#define LOGISTICSDUMMYSENDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Shipping.h>


/**
 * @brief TOP RESPONSE API: 用户调用该接口可实现无需物流（虚拟）发货,使用该接口发货，交易订单状态会直接变成卖家已发货
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsDummySendResponse : public TaoResponse
{
public:
 virtual ~LogisticsDummySendResponse() { }

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
