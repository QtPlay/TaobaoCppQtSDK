#ifndef TRADEORDERSKUUPDATEREQUEST_H
#define TRADEORDERSKUUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeOrderskuUpdateResponse.h>

/**
 * TOP API: 只能更新发货前子订单的销售属性  
只能更新价格相同的销售属性。对于拍下减库存的交易会同步更新销售属性的库存量。对于旺店的交易，要使用商品扩展信息中的SKU价格来比较。  
必须使用sku_id或sku_props中的一个参数来更新，如果两个都传的话，sku_id优先
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeOrderskuUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getOid() const
;  void setOid (qlonglong oid);

 qlonglong getSkuId() const
;  void setSkuId (qlonglong skuId);

 QString getSkuProps() const
;  void setSkuProps (QString skuProps);


  virtual TradeOrderskuUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 子订单编号（对于单笔订单的交易可以传交易编号）。
 **/
  qlonglong oid;

/**
 * @brief 销售属性编号，可以通过taobao.item.skus.get获取订单对应的商品的所有销售属性。
 **/
  qlonglong skuId;

/**
 * @brief 销售属性组合串，格式：p1:v1;p2:v2，如：1627207:28329;20509:28314。可以通过taobao.item.skus.get获取订单对应的商品的所有销售属性。
 **/
  QString skuProps;

};

#endif  /* TRADEORDERSKUUPDATEREQUEST_H */
