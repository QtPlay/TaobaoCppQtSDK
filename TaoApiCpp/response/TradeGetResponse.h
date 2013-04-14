#ifndef TRADEGETRESPONSE_H
#define TRADEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 获取单笔交易的部分信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeGetResponse : public TaoResponse
{
public:
 virtual ~TradeGetResponse() { }

  Trade getTrade() const;
  void setTrade (Trade trade);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 搜索到的交易信息列表，返回的Trade和Order中包含的具体信息为入参fields请求的字段信息
 **/
  Trade trade;

};

#endif
