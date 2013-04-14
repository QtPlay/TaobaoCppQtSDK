#ifndef LOGISTICSOFFLINESENDRESPONSE_H
#define LOGISTICSOFFLINESENDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Shipping.h>


/**
 * @brief TOP RESPONSE API: 用户调用该接口可实现自己联系发货（线下物流），使用该接口发货，交易订单状态会直接变成卖家已发货。不支持货到付款、在线下单类型的订单。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOfflineSendResponse : public TaoResponse
{
public:
 virtual ~LogisticsOfflineSendResponse() { }

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
