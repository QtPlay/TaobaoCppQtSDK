#ifndef TRADEFULLINFOGETRESPONSE_H
#define TRADEFULLINFOGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 获取单笔交易的详细信息 
<br/>1. 只有在交易成功的状态下才能取到交易佣金，其它状态下取到的都是零或空值  
<br/>2. 只有单笔订单的情况下Trade数据结构中才包含商品相关的信息  
<br/>3. 获取到的Order中的payment字段在单笔子订单时包含物流费用，多笔子订单时不包含物流费用 
<br/>4. 请按需获取字段，减少TOP系统的压力 
<br/>5. <span style="color:red">通过异步接口<a href="http://api.taobao.com/apidoc/api.htm?path=cid:5-apiId:10417">taobao.topats.trades.fullinfo.get</a>可以一次性获取多达100笔订单详情</span>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeFullinfoGetResponse : public TaoResponse
{
public:
 virtual ~TradeFullinfoGetResponse() { }

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
