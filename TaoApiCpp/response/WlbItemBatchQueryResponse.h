#ifndef WLBITEMBATCHQUERYRESPONSE_H
#define WLBITEMBATCHQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbItemBatchInventory.h>


/**
 * @brief TOP RESPONSE API: 根据用户id，item id list和store code来查询商品库存信息和批次信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemBatchQueryResponse : public TaoResponse
{
public:
 virtual ~WlbItemBatchQueryResponse() { }

  QList<WlbItemBatchInventory> getItemInventoryBatchList() const;
  void setItemInventoryBatchList (QList<WlbItemBatchInventory> itemInventoryBatchList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品库存及批次信息查询结果
 **/
  QList<WlbItemBatchInventory> itemInventoryBatchList;

/**
 * @brief 返回结果记录的数量
 **/
  qlonglong totalCount;

};

#endif
