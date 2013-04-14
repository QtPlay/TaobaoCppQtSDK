#ifndef TRADEPOSTAGEUPDATERESPONSE_H
#define TRADEPOSTAGEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 修改订单邮费接口，通过传入订单编号和邮费价格，修改订单的邮费，返回修改时间modified,邮费post_fee,总费用total_fee。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradePostageUpdateResponse : public TaoResponse
{
public:
 virtual ~TradePostageUpdateResponse() { }

  Trade getTrade() const;
  void setTrade (Trade trade);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回trade类型，其中包含修改时间modified，修改邮费post_fee，修改后的总费用total_fee和买家实付款payment
 **/
  Trade trade;

};

#endif
