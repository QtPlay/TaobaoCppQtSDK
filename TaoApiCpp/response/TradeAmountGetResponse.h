#ifndef TRADEAMOUNTGETRESPONSE_H
#define TRADEAMOUNTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TradeAmount.h>


/**
 * @brief TOP RESPONSE API: 卖家查询该笔交易订单的资金帐务相关的数据； 
1. 只供卖家使用，买家不可使用 
2. 可查询所有的状态的订单，但不同状态时订单的相关数据可能会有不同
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeAmountGetResponse : public TaoResponse
{
public:
 virtual ~TradeAmountGetResponse() { }

  TradeAmount getTradeAmount() const;
  void setTradeAmount (TradeAmount tradeAmount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 主订单的财务信息详情
 **/
  TradeAmount tradeAmount;

};

#endif
