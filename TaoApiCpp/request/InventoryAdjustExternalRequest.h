#ifndef INVENTORYADJUSTEXTERNALREQUEST_H
#define INVENTORYADJUSTEXTERNALREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryAdjustExternalResponse.h>

/**
 * TOP API: 商家非交易调整库存，调拨出库、盘点等时调用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAdjustExternalRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBizType() const
;  void setBizType (QString bizType);

 QString getBizUniqueCode() const
;  void setBizUniqueCode (QString bizUniqueCode);

 QString getItems() const
;  void setItems (QString items);

 QString getOccupyOperateCode() const
;  void setOccupyOperateCode (QString occupyOperateCode);

 QDateTime getOperateTime() const
;  void setOperateTime (QDateTime operateTime);

 QString getOperateType() const
;  void setOperateType (QString operateType);

 QString getReduceType() const
;  void setReduceType (QString reduceType);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);


  virtual InventoryAdjustExternalResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 外部订单类型：ALLOCATE:调拨、 RETURN:退货、PURCHACE：采购、BALANCE:盘点、NON_TAOBAO_TRADE：非淘宝交易、OTHERS：其他
 **/
  QString bizType;

/**
 * @brief 商家外部定单号
 **/
  QString bizUniqueCode;

/**
 * @brief 商品初始库存信息： [{"scItemId":"商品后端ID，如果有传scItemCode,参数可以为0","scItemCode":"商品商家编码","inventoryType":"库存类型  1：正常,”direction”: 1: 盘盈 -1: 盘亏,参数可选,"quantity":"数量"}]
 **/
  QString items;

/**
 * @brief 库存占用返回的操作码.operate_type 为OUTBOUND时，如果是确认事先进行过的库存占用，需要传入当时返回的操作码，并且明细必须与申请时保持一致
 **/
  QString occupyOperateCode;

/**
 * @brief 业务操作时间
 **/
  QDateTime operateTime;

/**
 * @brief 库存操作类别：INBOUND：入库 OUTBOUND: 出库BALANCE: 盘点
 **/
  QString operateType;

/**
 * @brief 出库时库存扣减类型，operate_type为OUTBOUND时有效。  
AUTO_CALCULATE:自动计算可供扣减，如果库存不够返回失败 ClIENT_FORCE：强制要求最大化扣减，有多少扣多少
 **/
  QString reduceType;

/**
 * @brief 商家仓库编码
 **/
  QString storeCode;

};

#endif  /* INVENTORYADJUSTEXTERNALREQUEST_H */
