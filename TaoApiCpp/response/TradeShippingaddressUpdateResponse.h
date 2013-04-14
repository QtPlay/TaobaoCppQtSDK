#ifndef TRADESHIPPINGADDRESSUPDATERESPONSE_H
#define TRADESHIPPINGADDRESSUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 只能更新一笔交易里面的买家收货地址  
只能更新发货前（即买家已付款，等待卖家发货状态）的交易的买家收货地址  
更新后的发货地址可以通过taobao.trade.fullinfo.get查到  
参数中所说的字节为GBK编码的（英文和数字占1字节，中文占2字节）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeShippingaddressUpdateResponse : public TaoResponse
{
public:
 virtual ~TradeShippingaddressUpdateResponse() { }

  Trade getTrade() const;
  void setTrade (Trade trade);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 交易结构
 **/
  Trade trade;

};

#endif
