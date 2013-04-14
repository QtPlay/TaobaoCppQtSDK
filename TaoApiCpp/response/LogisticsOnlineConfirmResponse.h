#ifndef LOGISTICSONLINECONFIRMRESPONSE_H
#define LOGISTICSONLINECONFIRMRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Shipping.h>


/**
 * @brief TOP RESPONSE API: 确认发货的目的是让交易流程继承走下去，确认发货后交易状态会由【买家已付款】变为【卖家已发货】，然后买家才可以确认收货，货款打入卖家账号。货到付款的订单除外
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOnlineConfirmResponse : public TaoResponse
{
public:
 virtual ~LogisticsOnlineConfirmResponse() { }

  Shipping getShipping() const;
  void setShipping (Shipping shipping);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 只返回is_success：是否成功。
 **/
  Shipping shipping;

};

#endif
