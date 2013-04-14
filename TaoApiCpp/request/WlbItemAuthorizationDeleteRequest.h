#ifndef WLBITEMAUTHORIZATIONDELETEREQUEST_H
#define WLBITEMAUTHORIZATIONDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemAuthorizationDeleteResponse.h>

/**
 * TOP API: 删除授权关系.若有建立代销关系，会将其代销关系冻结即将状态置为失效(代销关系)。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemAuthorizationDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAuthorizeId() const
;  void setAuthorizeId (qlonglong authorizeId);


  virtual WlbItemAuthorizationDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 授权关系ID
 **/
  qlonglong authorizeId;

};

#endif  /* WLBITEMAUTHORIZATIONDELETEREQUEST_H */
