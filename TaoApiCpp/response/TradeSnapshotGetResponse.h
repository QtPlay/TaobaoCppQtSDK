#ifndef TRADESNAPSHOTGETRESPONSE_H
#define TRADESNAPSHOTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 交易快照查询 
目前只支持类型为“旺店标准版(600)”或“旺店入门版(610)”的交易  
对于“旺店标准版”类型的交易，返回的snapshot字段为交易快照编号  
对于“旺店入门版”类型的交易，返回的snapshot字段为JSON结构的数据(其中的shopPromotion包含了优惠，积分等信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeSnapshotGetResponse : public TaoResponse
{
public:
 virtual ~TradeSnapshotGetResponse() { }

  Trade getTrade() const;
  void setTrade (Trade trade);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 只包含Trade中的tid和snapshot、子订单Order中的oid和snapshot
 **/
  Trade trade;

};

#endif
