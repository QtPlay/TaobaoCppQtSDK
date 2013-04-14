#ifndef SELLERCENTERROLESGETRESPONSE_H
#define SELLERCENTERROLESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Role.h>


/**
 * @brief TOP RESPONSE API: 获取指定卖家的角色列表，只能获取属于登陆者自己的信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterRolesGetResponse : public TaoResponse
{
public:
 virtual ~SellercenterRolesGetResponse() { }

  QList<Role> getRoles() const;
  void setRoles (QList<Role> roles);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 卖家子账号角色列表。<br/>返回对象为 role数据对象中的role_id，role_name，description，seller_id，create_time，modified_time。不包含permissions(权限点)
 **/
  QList<Role> roles;

};

#endif
