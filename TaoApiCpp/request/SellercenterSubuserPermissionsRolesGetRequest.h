#ifndef SELLERCENTERSUBUSERPERMISSIONSROLESGETREQUEST_H
#define SELLERCENTERSUBUSERPERMISSIONSROLESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercenterSubuserPermissionsRolesGetResponse.h>

/**
 * TOP API: 查询指定的子账号的被直接赋予的权限信息和角色信息。<br/>返回对象中包括直接赋予子账号的权限点信息、被赋予的角色以及角色的对应权限点信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterSubuserPermissionsRolesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual SellercenterSubuserPermissionsRolesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 子账号昵称(子账号标识)
 **/
  QString nick;

};

#endif  /* SELLERCENTERSUBUSERPERMISSIONSROLESGETREQUEST_H */
