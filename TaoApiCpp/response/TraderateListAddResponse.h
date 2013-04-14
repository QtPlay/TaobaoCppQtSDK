#ifndef TRADERATELISTADDRESPONSE_H
#define TRADERATELISTADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TradeRate.h>


/**
 * @brief TOP RESPONSE API: 针对父子订单新增批量评价(<font color="red">注：在评价之前需要对订单成功的时间进行判定（end_time）,如果超过15天，不用再通过该接口进行评价</font>)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TraderateListAddResponse : public TaoResponse
{
public:
 virtual ~TraderateListAddResponse() { }

  TradeRate getTradeRate() const;
  void setTradeRate (TradeRate tradeRate);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回的评论的信息，仅返回tid和created字段
 **/
  TradeRate tradeRate;

};

#endif
