#ifndef ROLE_H
#define ROLE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Permission.h>


/**
 * @brief 子账号角色
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Role : public TaoDomain
{

public:
 virtual ~Role() { }

  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QString getDescription() const;
  void setDescription (QString description);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QList<Permission> getPermissions() const;
  void setPermissions (QList<Permission> permissions);
  qlonglong getRoleId() const;
  void setRoleId (qlonglong roleId);
  QString getRoleName() const;
  void setRoleName (QString roleName);
  qlonglong getSellerId() const;
  void setSellerId (qlonglong sellerId);
  
  virtual void parseResponse();

private:
/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 角色描述
 **/
  QString description;

/**
 * @brief 修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 所拥有权限
 **/
  QList<Permission> permissions;

/**
 * @brief 角色id
 **/
  qlonglong roleId;

/**
 * @brief 角色名
 **/
  QString roleName;

/**
 * @brief 卖家Id
 **/
  qlonglong sellerId;

};

#endif  /* ROLE_H */
