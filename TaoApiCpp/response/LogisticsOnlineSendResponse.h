#ifndef LOGISTICSONLINESENDRESPONSE_H
#define LOGISTICSONLINESENDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Shipping.h>


/**
 * @brief TOP RESPONSE API: 用户调用该接口可实现在线订单发货（支持货到付款） 
调用该接口实现在线下单发货，有两种情况：<br> 
<font color='red'>如果不输入运单号的情况：交易状态不会改变，需要调用taobao.logistics.online.confirm确认发货后交易状态才会变成卖家已发货。<br> 
如果输入运单号的情况发货：交易订单状态会直接变成卖家已发货 。</font>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOnlineSendResponse : public TaoResponse
{
public:
 virtual ~LogisticsOnlineSendResponse() { }

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
