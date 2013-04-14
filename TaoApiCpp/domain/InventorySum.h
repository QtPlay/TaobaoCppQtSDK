#ifndef INVENTORYSUM_H
#define INVENTORYSUM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 商品库存对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventorySum : public TaoDomain
{

public:
 virtual ~InventorySum() { }

  qlonglong getInventoryType() const;
  void setInventoryType (qlonglong inventoryType);
  QString getInventoryTypeName() const;
  void setInventoryTypeName (QString inventoryTypeName);
  qlonglong getOccupyQuantity() const;
  void setOccupyQuantity (qlonglong occupyQuantity);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  qlonglong getReserveQuantity() const;
  void setReserveQuantity (qlonglong reserveQuantity);
  QString getScItemCode() const;
  void setScItemCode (QString scItemCode);
  qlonglong getScItemId() const;
  void setScItemId (qlonglong scItemId);
  QString getStoreCode() const;
  void setStoreCode (QString storeCode);
  
  virtual void parseResponse();

private:
/**
 * @brief 库存类型： 
1：正常  
2：损坏  
3：冻结  
10：质押  
11-20:商家自定义
 **/
  qlonglong inventoryType;

/**
 * @brief 库存类型名称
 **/
  QString inventoryTypeName;

/**
 * @brief 总占用数量
 **/
  qlonglong occupyQuantity;

/**
 * @brief 总物理库存数量
 **/
  qlonglong quantity;

/**
 * @brief 总预扣数量
 **/
  qlonglong reserveQuantity;

/**
 * @brief 商品商家编码
 **/
  QString scItemCode;

/**
 * @brief 商品后端ID，如果有传sc_item_code,参数可以为0
 **/
  qlonglong scItemId;

/**
 * @brief 商家仓库编码
 **/
  QString storeCode;

};

#endif  /* INVENTORYSUM_H */
