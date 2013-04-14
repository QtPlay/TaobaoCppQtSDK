#ifndef TRADECONFIRMFEEGETRESPONSE_H
#define TRADECONFIRMFEEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TradeConfirmFee.h>


/**
 * @brief TOP RESPONSE API: 获取交易确认收货费用 
可以获取主订单或子订单的确认收货费用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeConfirmfeeGetResponse : public TaoResponse
{
public:
 virtual ~TradeConfirmfeeGetResponse() { }

  TradeConfirmFee getTradeConfirmFee() const;
  void setTradeConfirmFee (TradeConfirmFee tradeConfirmFee);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 获取到的交易确认收货费用
 **/
  TradeConfirmFee tradeConfirmFee;

};

#endif
