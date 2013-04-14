#ifndef WLBINVENTORYDETAILGETRESPONSE_H
#define WLBINVENTORYDETAILGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbInventory.h>


/**
 * @brief TOP RESPONSE API: 查询库存详情，通过商品ID获取发送请求的卖家的库存详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbInventoryDetailGetResponse : public TaoResponse
{
public:
 virtual ~WlbInventoryDetailGetResponse() { }

  QList<WlbInventory> getInventoryList() const;
  void setInventoryList (QList<WlbInventory> inventoryList);  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 库存详情列表
 **/
  QList<WlbInventory> inventoryList;

/**
 * @brief 商品ID
 **/
  qlonglong itemId;

};

#endif
