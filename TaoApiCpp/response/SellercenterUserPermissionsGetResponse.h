#ifndef SELLERCENTERUSERPERMISSIONSGETRESPONSE_H
#define SELLERCENTERUSERPERMISSIONSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Permission.h>


/**
 * @brief TOP RESPONSE API: 获取指定用户的权限集合，并不组装成树。如果是主账号，返回所有的权限列表；如果是子账号，返回所有已授权的权限。只能查询属于自己的账号信息 (如果是主账号，则是主账号以及所属子账号，如果是子账号则是对应主账号以及所属子账号)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterUserPermissionsGetResponse : public TaoResponse
{
public:
 virtual ~SellercenterUserPermissionsGetResponse() { }

  QList<Permission> getPermissions() const;
  void setPermissions (QList<Permission> permissions);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 权限列表
 **/
  QList<Permission> permissions;

};

#endif
