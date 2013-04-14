#ifndef SELLERCENTERROLEADDREQUEST_H
#define SELLERCENTERROLEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercenterRoleAddResponse.h>

/**
 * TOP API: 给指定的卖家创建新的子账号角色<br/> 
如果需要授权的权限点有下级权限点或上级权限点，把该权限点的父权限点和该权限点的所有子权限都一并做赋权操作，并递归处理<br/>例如：权限点列表如下<br/> 
code=sell 宝贝管理<br/> 
---------|code=sm 店铺管理<br/> 
---------|---------|code=sm-design 如店铺装修<br/> 
---------|---------|---------|code=sm-tbd-visit内店装修入口<br/> 
---------|---------|---------|code=sm-tbd-publish内店装修发布<br/> 
---------|---------|code=phone 手机淘宝店铺<br/> 
调用改接口给code=sm-design店铺装修赋权时，同时会将下列权限点都赋予默认角色<br/> 
code=sell 宝贝管理<br/> 
---------|code=sm 店铺管理<br/> 
---------|---------|code=sm-design 如店铺装修<br/> 
---------|---------|---------|code=sm-tbd-visit内店装修入口<br/> 
---------|---------|---------|code=sm-tbd-publish内店装修发布<br/>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterRoleAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDescription() const
;  void setDescription (QString description);

 QString getName() const
;  void setName (QString name);

 QString getNick() const
;  void setNick (QString nick);

 QString getPermissionCodes() const
;  void setPermissionCodes (QString permissionCodes);


  virtual SellercenterRoleAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 角色描述
 **/
  QString description;

/**
 * @brief 角色名
 **/
  QString name;

/**
 * @brief 表示卖家昵称
 **/
  QString nick;

/**
 * @brief 需要授权的权限点permission_code列表,以","分割.其code值可以通过调用taobao.sellercenter.user.permissions.get返回，其中permission.is_authorize=1的权限点可以通过本接口授权给对应角色。
 **/
  QString permissionCodes;

};

#endif  /* SELLERCENTERROLEADDREQUEST_H */
