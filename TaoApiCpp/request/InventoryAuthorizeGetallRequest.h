#ifndef INVENTORYAUTHORIZEGETALLREQUEST_H
#define INVENTORYAUTHORIZEGETALLREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryAuthorizeGetallResponse.h>

/**
 * TOP API: 货主根据多个商品列表获取每个商品的授权明细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeGetallRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getScItemIdList() const
;  void setScItemIdList (QString scItemIdList);

 QString getStoreCodeList() const
;  void setStoreCodeList (QString storeCodeList);


  virtual InventoryAuthorizeGetallResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品编码列表，使用”,”分割多个号码，最大50个
 **/
  QString scItemIdList;

/**
 * @brief 指定的商家仓库编码，使用”,”分割多个仓库
 **/
  QString storeCodeList;

};

#endif  /* INVENTORYAUTHORIZEGETALLREQUEST_H */
