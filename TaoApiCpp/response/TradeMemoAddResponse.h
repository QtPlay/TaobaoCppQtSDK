#ifndef TRADEMEMOADDRESPONSE_H
#define TRADEMEMOADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 根据登录用户的身份（买家或卖家），自动添加相应的交易备注,不能重复调用些接口添加备注，需要更新备注请用taobao.trade.memo.update
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeMemoAddResponse : public TaoResponse
{
public:
 virtual ~TradeMemoAddResponse() { }

  Trade getTrade() const;
  void setTrade (Trade trade);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 对一笔交易添加备注后返回其对应的Trade，Trade中可用的返回字段有tid和created
 **/
  Trade trade;

};

#endif
