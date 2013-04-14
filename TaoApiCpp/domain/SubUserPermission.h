#ifndef SUBUSERPERMISSION_H
#define SUBUSERPERMISSION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Permission.h>
#include <TaoApiCpp/domain/Role.h>


/**
 * @brief 子账号所拥有的权限对象(直接赋予的权限和通过角色赋予的权限的总和对象)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubUserPermission : public TaoDomain
{

public:
 virtual ~SubUserPermission() { }

  QList<Permission> getPermissions() const;
  void setPermissions (QList<Permission> permissions);
  QList<Role> getRoles() const;
  void setRoles (QList<Role> roles);
  
  virtual void parseResponse();

private:
/**
 * @brief 子账号被直接赋予的权限点列表
 **/
  QList<Permission> permissions;

/**
 * @brief 子账号被赋予的角色信息(Role)列表。列表中的角色对象只有role_id，role_name，permissions信息
 **/
  QList<Role> roles;

};

#endif  /* SUBUSERPERMISSION_H */
