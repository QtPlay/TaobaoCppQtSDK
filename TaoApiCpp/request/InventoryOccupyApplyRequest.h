#ifndef INVENTORYOCCUPYAPPLYREQUEST_H
#define INVENTORYOCCUPYAPPLYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryOccupyApplyResponse.h>

/**
 * TOP API: 商家申请预留库存
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryOccupyApplyRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBizType() const
;  void setBizType (QString bizType);

 QString getBizUniqueCode() const
;  void setBizUniqueCode (QString bizUniqueCode);

 QString getChannelFlags() const
;  void setChannelFlags (QString channelFlags);

 QString getItems() const
;  void setItems (QString items);

 qlonglong getOccupyTime() const
;  void setOccupyTime (qlonglong occupyTime);

 QString getOccupyType() const
;  void setOccupyType (QString occupyType);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);


  virtual InventoryOccupyApplyResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 外部订单类型, BALANCE:盘点、NON_TAOBAO_TRADE:非淘宝交易、ALLOCATE:调拨、OTHERS:其他
 **/
  QString bizType;

/**
 * @brief 商家外部定单号
 **/
  QString bizUniqueCode;

/**
 * @brief 渠道编号
 **/
  QString channelFlags;

/**
 * @brief 商品库存预留信息： [{"scItemId":"商品后端ID，如果有传scItemCode,参数可以为0","scItemCode":"商品商家编码","inventoryType":"库存类型  1：正常,2：损坏,3：冻结,10：质押",11-20:商家自定义,”inventoryTypeName”:”库存类型名称,可选”,"occupyQuantity":"数量"}]
 **/
  QString items;

/**
 * @brief 天数，默认5天，最大15天
 **/
  qlonglong occupyTime;

/**
 * @brief 占用类型 
参数定义 
AUTO_CALCULATE:自动计算可供占用，如果库存不够返回失败 ClIENT_FORCE：强制要求最大化占用，有多少占用多少
 **/
  QString occupyType;

/**
 * @brief 商家仓库编码
 **/
  QString storeCode;

};

#endif  /* INVENTORYOCCUPYAPPLYREQUEST_H */
