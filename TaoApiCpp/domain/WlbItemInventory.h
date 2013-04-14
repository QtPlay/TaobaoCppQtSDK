#ifndef WLBITEMINVENTORY_H
#define WLBITEMINVENTORY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流宝商品库存
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemInventory : public TaoDomain
{

public:
 virtual ~WlbItemInventory() { }

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
  
  virtual void parseResponse();

private:
/**
 * @brief 商品id
 **/
  qlonglong itemId;

/**
 * @brief 锁定库存数量
 **/
  qlonglong lockQuantity;

/**
 * @brief 库存数量
 **/
  qlonglong quantity;

/**
 * @brief 仓库编码
 **/
  QString storeCode;

/**
 * @brief SELLALBE 可销售库存 
DEFECTIVE 残次 
JISHUN 机损 
XIANGSHUN 箱损 
FREEZE 冻结库存 
ONROAD 在途库存
 **/
  QString type;

};

#endif  /* WLBITEMINVENTORY_H */
