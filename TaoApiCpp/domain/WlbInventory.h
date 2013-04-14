#ifndef WLBINVENTORY_H
#define WLBINVENTORY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 库存详情对象。其中包括货主ID，仓库编码，库存，库存类型等属性
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbInventory : public TaoDomain
{

public:
 virtual ~WlbInventory() { }

  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  qlonglong getLockQuantity() const;
  void setLockQuantity (qlonglong lockQuantity);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  QString getStoreCode() const;
  void setStoreCode (QString storeCode);
  QString getType() const;
  void setType (QString type);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 冻结(锁定)数量，用来跟踪库存的中间状态，比如前台销售了1件商品，这时lock加1，当商品出库的时候lock再减回去
 **/
  qlonglong lockQuantity;

/**
 * @brief 库存数量(有效数量)
 **/
  qlonglong quantity;

/**
 * @brief 仓库编码，关联到仓库类型服务的编码非托管库存(卖家自己管理的库存，物流宝不可见又称自有库存)的所在仓库编码: STORE_SYS_PRIVATE
 **/
  QString storeCode;

/**
 * @brief VENDIBLE--可销售库存 
FREEZE--冻结库存 
ONWAY--在途库存 
DEFECT--残次品库存
 **/
  QString type;

/**
 * @brief 货主ID
 **/
  qlonglong userId;

};

#endif  /* WLBINVENTORY_H */
