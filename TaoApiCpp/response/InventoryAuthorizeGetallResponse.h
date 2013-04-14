#ifndef INVENTORYAUTHORIZEGETALLRESPONSE_H
#define INVENTORYAUTHORIZEGETALLRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/InventoryAuthorizeInfo.h>


/**
 * @brief TOP RESPONSE API: 货主根据多个商品列表获取每个商品的授权明细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeGetallResponse : public TaoResponse
{
public:
 virtual ~InventoryAuthorizeGetallResponse() { }

  QList<InventoryAuthorizeInfo> getAuthorizeList() const;
  void setAuthorizeList (QList<InventoryAuthorizeInfo> authorizeList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回的是该商品的授权明细，明细参考 
InventoryAuthorizeInfo结构
 **/
  QList<InventoryAuthorizeInfo> authorizeList;

};

#endif
