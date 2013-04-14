#ifndef INVENTORYAUTHORIZEGETREQUEST_H
#define INVENTORYAUTHORIZEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryAuthorizeGetResponse.h>

/**
 * TOP API: 根据授权结果码获取授权状况
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAuthorizeCode() const
;  void setAuthorizeCode (QString authorizeCode);

 QString getUserNickList() const
;  void setUserNickList (QString userNickList);


  virtual InventoryAuthorizeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 库存分配授权结果码
 **/
  QString authorizeCode;

/**
 * @brief 分配用户列表，多个用户使用“,“分割开
 **/
  QString userNickList;

};

#endif  /* INVENTORYAUTHORIZEGETREQUEST_H */
