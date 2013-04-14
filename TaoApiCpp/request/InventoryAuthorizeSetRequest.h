#ifndef INVENTORYAUTHORIZESETREQUEST_H
#define INVENTORYAUTHORIZESETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryAuthorizeSetResponse.h>

/**
 * TOP API: 商家向其他用户设置配额库存的共享或者独享，支持到渠道，商家自定义库存类别
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeSetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAuthorizeType() const
;  void setAuthorizeType (QString authorizeType);

 QString getItems() const
;  void setItems (QString items);


  virtual InventoryAuthorizeSetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 配额授权方式  
PUBLIC: 全共享 
PRIVATE:独享
 **/
  QString authorizeType;

/**
 * @brief 授权明细 
[{“index”:0,“scItemId”:232323,”scItemCode”:”A232”,”storeCode”:”Kj11”,”inventoryType”:1,”channelFlag”:0,”quotaQuantity”:1000,”nickNameList”:”s108,TY000”，“nickName":"ca11"}] 
每次请求的列表数据量不超过50条，如果authorize_type是PUBLIC,使用nickNameList，否则请用nickName
 **/
  QString items;

};

#endif  /* INVENTORYAUTHORIZESETREQUEST_H */
