#ifndef INVENTORYINITIALREQUEST_H
#define INVENTORYINITIALREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryInitialResponse.h>

/**
 * TOP API: 商家仓库存初始化接口，直接按照商家指定的商品库存数进行填充，没有单据核对，不参与库存对账
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryInitialRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getItems() const
;  void setItems (QString items);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);


  virtual InventoryInitialResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品初始库存信息： [{"scItemId":"商品后端ID，如果有传scItemCode,参数可以为0","scItemCode":"商品商家编码","inventoryType":"库存类型  1：正常,2：损坏,3：冻结,10：质押,11-20:用户自定义","quantity":"数量"}]
 **/
  QString items;

/**
 * @brief 商家仓库编码
 **/
  QString storeCode;

};

#endif  /* INVENTORYINITIALREQUEST_H */
