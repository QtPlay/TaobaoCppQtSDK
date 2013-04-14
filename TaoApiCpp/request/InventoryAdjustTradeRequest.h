#ifndef INVENTORYADJUSTTRADEREQUEST_H
#define INVENTORYADJUSTTRADEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryAdjustTradeResponse.h>

/**
 * TOP API: 商家交易调整库存，淘宝交易、B2B经销等
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAdjustTradeRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBizUniqueCode() const
;  void setBizUniqueCode (QString bizUniqueCode);

 QString getItems() const
;  void setItems (QString items);

 QDateTime getOperateTime() const
;  void setOperateTime (QDateTime operateTime);

 QString getTbOrderType() const
;  void setTbOrderType (QString tbOrderType);


  virtual InventoryAdjustTradeResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商家外部定单号
 **/
  QString bizUniqueCode;

/**
 * @brief 商品初始库存信息： [{ "TBOrderCode”:”淘宝交易号”,"TBSubOrderCode ":"淘宝子交易单号,赠品可以不填","”isGift”:”TRUE或者FALSE,是否赠品”,storeCode":"商家仓库编码"," scItemId ":"商品后端ID","scItemCode":"商品商家编码"," originScItemId ":"原商品ID","inventoryType":"","quantity":"111","isComplete":"TRUE或者FALSE，是否全部确认出库"}]
 **/
  QString items;

/**
 * @brief 业务操作时间
 **/
  QDateTime operateTime;

/**
 * @brief 订单类型：B2C、B2B
 **/
  QString tbOrderType;

};

#endif  /* INVENTORYADJUSTTRADEREQUEST_H */
