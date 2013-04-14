#ifndef TRADEORDERSKUUPDATERESPONSE_H
#define TRADEORDERSKUUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Order.h>


/**
 * @brief TOP RESPONSE API: 只能更新发货前子订单的销售属性  
只能更新价格相同的销售属性。对于拍下减库存的交易会同步更新销售属性的库存量。对于旺店的交易，要使用商品扩展信息中的SKU价格来比较。  
必须使用sku_id或sku_props中的一个参数来更新，如果两个都传的话，sku_id优先
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeOrderskuUpdateResponse : public TaoResponse
{
public:
 virtual ~TradeOrderskuUpdateResponse() { }

  Order getOrder() const;
  void setOrder (Order order);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 只返回oid和modified
 **/
  Order order;

};

#endif
