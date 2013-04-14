#ifndef INVENTORYAUTHORIZEREMOVEREQUEST_H
#define INVENTORYAUTHORIZEREMOVEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryAuthorizeRemoveResponse.h>

/**
 * TOP API: 根据库存授权结果码移除该授权下的用户库存授权
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeRemoveRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAuthorizeCode() const
;  void setAuthorizeCode (QString authorizeCode);

 QString getUserNickList() const
;  void setUserNickList (QString userNickList);


  virtual InventoryAuthorizeRemoveResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 库存授权结果码
 **/
  QString authorizeCode;

/**
 * @brief 移除授权的目标用户昵称列表，用”,”隔开
 **/
  QString userNickList;

};

#endif  /* INVENTORYAUTHORIZEREMOVEREQUEST_H */
