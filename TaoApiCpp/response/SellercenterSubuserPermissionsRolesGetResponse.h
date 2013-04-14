#ifndef SELLERCENTERSUBUSERPERMISSIONSROLESGETRESPONSE_H
#define SELLERCENTERSUBUSERPERMISSIONSROLESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SubUserPermission.h>


/**
 * @brief TOP RESPONSE API: 查询指定的子账号的被直接赋予的权限信息和角色信息。<br/>返回对象中包括直接赋予子账号的权限点信息、被赋予的角色以及角色的对应权限点信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterSubuserPermissionsRolesGetResponse : public TaoResponse
{
public:
 virtual ~SellercenterSubuserPermissionsRolesGetResponse() { }

  SubUserPermission getSubuserPermission() const;
  void setSubuserPermission (SubUserPermission subuserPermission);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 子账号被所拥有的权限
 **/
  SubUserPermission subuserPermission;

};

#endif
