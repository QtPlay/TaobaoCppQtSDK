#ifndef INVENTORYAUTHORIZEREMOVEALLREQUEST_H
#define INVENTORYAUTHORIZEREMOVEALLREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryAuthorizeRemoveallResponse.h>

/**
 * TOP API: 移除该授权下的用户库存授权
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeRemoveallRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getScItemIdList() const
;  void setScItemIdList (QString scItemIdList);

 QString getUserNickList() const
;  void setUserNickList (QString userNickList);


  virtual InventoryAuthorizeRemoveallResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品编码列表，用”,”隔开.每次请求的商品列表不超过50个
 **/
  QString scItemIdList;

/**
 * @brief 移除授权的目标用户昵称列表，用”,”隔开
 **/
  QString userNickList;

};

#endif  /* INVENTORYAUTHORIZEREMOVEALLREQUEST_H */
