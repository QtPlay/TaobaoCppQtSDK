#ifndef INVENTORYQUERYRESPONSE_H
#define INVENTORYQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/InventorySum.h>
#include <TaoApiCpp/domain/TipInfo.h>


/**
 * @brief TOP RESPONSE API: 商家查询商品总体库存信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryQueryResponse : public TaoResponse
{
public:
 virtual ~InventoryQueryResponse() { }

  QList<InventorySum> getItemInventorys() const;
  void setItemInventorys (QList<InventorySum> itemInventorys);  QList<TipInfo> getTipInfos() const;
  void setTipInfos (QList<TipInfo> tipInfos);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品总体库存信息
 **/
  QList<InventorySum> itemInventorys;

/**
 * @brief 提示信息，提示不存在的后端商品
 **/
  QList<TipInfo> tipInfos;

};

#endif
