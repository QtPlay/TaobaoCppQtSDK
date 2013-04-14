#ifndef WLBOUTINVENTORYCHANGENOTIFYREQUEST_H
#define WLBOUTINVENTORYCHANGENOTIFYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOutInventoryChangeNotifyResponse.h>

/**
 * TOP API: 拥有自有仓的企业物流用户通过该接口把自有仓的库存通知到物流宝，由物流宝维护该库存，控制前台显示库存的准确性。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOutInventoryChangeNotifyRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getChangeCount() const
;  void setChangeCount (qlonglong changeCount);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getOpType() const
;  void setOpType (QString opType);

 QString getOrderSourceCode() const
;  void setOrderSourceCode (QString orderSourceCode);

 QString getOutBizCode() const
;  void setOutBizCode (QString outBizCode);

 qlonglong getResultCount() const
;  void setResultCount (qlonglong resultCount);

 QString getSource() const
;  void setSource (QString source);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);

 QString getType() const
;  void setType (QString type);


  virtual WlbOutInventoryChangeNotifyResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 库存变化数量
 **/
  qlonglong changeCount;

/**
 * @brief 物流宝商品id或前台宝贝id（由type类型决定）
 **/
  qlonglong itemId;

/**
 * @brief OUT--出库 
IN--入库
 **/
  QString opType;

/**
 * @brief 订单号，如果source为TAOBAO_TRADE,order_source_code必须为淘宝交易号
 **/
  QString orderSourceCode;

/**
 * @brief 库存变化唯一标识，用于去重，一个外部唯一编码唯一标识一次库存变化。
 **/
  QString outBizCode;

/**
 * @brief 本次库存变化后库存余额
 **/
  qlonglong resultCount;

/**
 * @brief （1）OTHER： 其他  
（2）TAOBAO_TRADE： 淘宝交易  
（3）OTHER_TRADE：其他交易  
（4）ALLCOATE： 调拨  
（5）CHECK:盘点 
（6）PURCHASE:采购
 **/
  QString source;

/**
 * @brief 目前非必须，系统会选择默认值
 **/
  QString storeCode;

/**
 * @brief WLB_ITEM--物流宝商品 
IC_ITEM--淘宝商品 
IC_SKU--淘宝sku
 **/
  QString type;

};

#endif  /* WLBOUTINVENTORYCHANGENOTIFYREQUEST_H */
