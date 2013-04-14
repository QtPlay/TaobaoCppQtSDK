#ifndef TRADECLOSERESPONSE_H
#define TRADECLOSERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 关闭一笔订单，可以是主订单或子订单。当订单从创建到关闭时间小于10s的时候，会报“CLOSE_TRADE_TOO_FAST”错误。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeCloseResponse : public TaoResponse
{
public:
 virtual ~TradeCloseResponse() { }

  Trade getTrade() const;
  void setTrade (Trade trade);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 关闭交易时返回的Trade信息，可用字段有tid和modified
 **/
  Trade trade;

};

#endif
