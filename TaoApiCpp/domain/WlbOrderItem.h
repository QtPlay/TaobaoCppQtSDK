#ifndef WLBORDERITEM_H
#define WLBORDERITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流宝订单商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderItem : public TaoDomain
{

public:
 virtual ~WlbOrderItem() { }

  QString getBatchRemark() const;
  void setBatchRemark (QString batchRemark);
  QString getConfirmStatus() const;
  void setConfirmStatus (QString confirmStatus);
  QString getExtEntityId() const;
  void setExtEntityId (QString extEntityId);
  QString getExtEntityType() const;
  void setExtEntityType (QString extEntityType);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getInventoryType() const;
  void setInventoryType (QString inventoryType);
  QString getItemCode() const;
  void setItemCode (QString itemCode);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QString getItemName() const;
  void setItemName (QString itemName);
  qlonglong getItemPrice() const;
  void setItemPrice (qlonglong itemPrice);
  QString getOrderCode() const;
  void setOrderCode (QString orderCode);
  qlonglong getOrderId() const;
  void setOrderId (qlonglong orderId);
  QString getOrderSub2code() const;
  void setOrderSub2code (QString orderSub2code);
  QString getOrderSubCode() const;
  void setOrderSubCode (QString orderSubCode);
  QString getOrderSubType() const;
  void setOrderSubType (QString orderSubType);
  QString getPictureUrl() const;
  void setPictureUrl (QString pictureUrl);
  qlonglong getPlanQuantity() const;
  void setPlanQuantity (qlonglong planQuantity);
  qlonglong getProviderTpId() const;
  void setProviderTpId (qlonglong providerTpId);
  QString getProviderTpNick() const;
  void setProviderTpNick (QString providerTpNick);
  qlonglong getPublishVersion() const;
  void setPublishVersion (qlonglong publishVersion);
  qlonglong getRealQuantity() const;
  void setRealQuantity (qlonglong realQuantity);
  QString getRemark() const;
  void setRemark (QString remark);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  QString getUserNick() const;
  void setUserNick (QString userNick);
  
  virtual void parseResponse();

private:
/**
 * @brief 批次号备注
 **/
  QString batchRemark;

/**
 * @brief 物流宝订单确认状态： 
NO_NEED_CONFIRM--不需要确认 
WAIT_CONFIRM--待确认 
CONFIRMED--已确认
 **/
  QString confirmStatus;

/**
 * @brief 外部实体id
 **/
  QString extEntityId;

/**
 * @brief 外部实体类型
 **/
  QString extEntityType;

/**
 * @brief 订单商品id
 **/
  qlonglong id;

/**
 * @brief INVENTORY_TYPE_SELL 可销库存 
INVENTORY_TYPE_IMPERFECTIONS 残次库存 
INVENTORY_TYPE_FREEZE 冻结库存 
INVENTORY_TYPE_ON_PASSAGE 在途库存
 **/
  QString inventoryType;

/**
 * @brief 订单商品编码
 **/
  QString itemCode;

/**
 * @brief 物流宝订单商品的物流宝商品id
 **/
  qlonglong itemId;

/**
 * @brief 订单商品名称
 **/
  QString itemName;

/**
 * @brief 商品价格
 **/
  qlonglong itemPrice;

/**
 * @brief 物流宝订单编码
 **/
  QString orderCode;

/**
 * @brief 物流宝订单id
 **/
  qlonglong orderId;

/**
 * @brief 子交易号
 **/
  QString orderSub2code;

/**
 * @brief 订单号
 **/
  QString orderSubCode;

/**
 * @brief (1)其它: OTHER (2)淘宝交易: TAOBAO (3)调拨: ALLOCATION (4)盘点:CHECK (5)销售采购:PRUCHASE(6)其它交易：OTHER_TRADE
 **/
  QString orderSubType;

/**
 * @brief 订单商品图片url
 **/
  QString pictureUrl;

/**
 * @brief 计划数量
 **/
  qlonglong planQuantity;

/**
 * @brief 货主id
 **/
  qlonglong providerTpId;

/**
 * @brief 货主nick
 **/
  QString providerTpNick;

/**
 * @brief 商品发布版本号
 **/
  qlonglong publishVersion;

/**
 * @brief 实际数量
 **/
  qlonglong realQuantity;

/**
 * @brief 订单商品备注
 **/
  QString remark;

/**
 * @brief 订单商品用户id
 **/
  qlonglong userId;

/**
 * @brief 订单商品用户昵称
 **/
  QString userNick;

};

#endif  /* WLBORDERITEM_H */
