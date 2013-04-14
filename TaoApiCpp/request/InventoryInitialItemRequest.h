#ifndef INVENTORYINITIALITEMREQUEST_H
#define INVENTORYINITIALITEMREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryInitialItemResponse.h>

/**
 * TOP API: 商家仓商品初始化在各个仓中库存
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryInitialItemRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getScItemId() const
;  void setScItemId (qlonglong scItemId);

 QString getStoreInventorys() const
;  void setStoreInventorys (QString storeInventorys);


  virtual InventoryInitialItemResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 后端商品id
 **/
  qlonglong scItemId;

/**
 * @brief 商品初始库存信息： [{"storeCode":"必选,商家仓库编号","inventoryType":"可选，库存类型 1：正常,2：损坏,3：冻结,10：质押,11-20:用户自定义,默认为1","quantity":"必选,数量"}]
 **/
  QString storeInventorys;

};

#endif  /* INVENTORYINITIALITEMREQUEST_H */
