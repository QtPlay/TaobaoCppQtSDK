#ifndef TRADERATEADDRESPONSE_H
#define TRADERATEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TradeRate.h>


/**
 * @brief TOP RESPONSE API: 新增单个评价(<font color="red">注：在评价之前需要对订单成功的时间进行判定（end_time）,如果超过15天，不能再通过该接口进行评价</font>)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TraderateAddResponse : public TaoResponse
{
public:
 virtual ~TraderateAddResponse() { }

  TradeRate getTradeRate() const;
  void setTradeRate (TradeRate tradeRate);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回tid、oid、create
 **/
  TradeRate tradeRate;

};

#endif
