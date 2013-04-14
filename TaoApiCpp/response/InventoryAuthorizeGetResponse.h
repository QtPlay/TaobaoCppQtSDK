#ifndef INVENTORYAUTHORIZEGETRESPONSE_H
#define INVENTORYAUTHORIZEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/InventoryAuthorizeInfo.h>


/**
 * @brief TOP RESPONSE API: 根据授权结果码获取授权状况
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeGetResponse : public TaoResponse
{
public:
 virtual ~InventoryAuthorizeGetResponse() { }

  QList<InventoryAuthorizeInfo> getAuthorizeList() const;
  void setAuthorizeList (QList<InventoryAuthorizeInfo> authorizeList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回的是该商品的授权明细，参考 
InventoryAuthorizeInfo结构
 **/
  QList<InventoryAuthorizeInfo> authorizeList;

};

#endif
