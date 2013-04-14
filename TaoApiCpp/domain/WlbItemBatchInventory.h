#ifndef WLBITEMBATCHINVENTORY_H
#define WLBITEMBATCHINVENTORY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/WlbItemBatch.h>
#include <TaoApiCpp/domain/WlbItemInventory.h>


/**
 * @brief 商品的库存信息和批次信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemBatchInventory : public TaoDomain
{

public:
 virtual ~WlbItemBatchInventory() { }

  QList<WlbItemBatch> getItemBatch() const;
  void setItemBatch (QList<WlbItemBatch> itemBatch);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QList<WlbItemInventory> getItemInventorys() const;
  void setItemInventorys (QList<WlbItemInventory> itemInventorys);
  qlonglong getTotalQuantity() const;
  void setTotalQuantity (qlonglong totalQuantity);
  
  virtual void parseResponse();

private:
/**
 * @brief 批次库存查询结果
 **/
  QList<WlbItemBatch> itemBatch;

/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 商品库存查询结果
 **/
  QList<WlbItemInventory> itemInventorys;

/**
 * @brief 商品在所有仓库的可销库存总数
 **/
  qlonglong totalQuantity;

};

#endif  /* WLBITEMBATCHINVENTORY_H */
