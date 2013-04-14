#ifndef TRADERECEIVETIMEDELAYRESPONSE_H
#define TRADERECEIVETIMEDELAYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 延长交易收货时间
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeReceivetimeDelayResponse : public TaoResponse
{
public:
 virtual ~TradeReceivetimeDelayResponse() { }

  Trade getTrade() const;
  void setTrade (Trade trade);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 更新后的交易数据，只包括tid和modified两个字段。
 **/
  Trade trade;

};

#endif
