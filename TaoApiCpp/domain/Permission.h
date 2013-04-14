#ifndef PERMISSION_H
#define PERMISSION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 权限信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Permission : public TaoDomain
{

public:
 virtual ~Permission() { }

  qlonglong getIsAuthorize() const;
  void setIsAuthorize (qlonglong isAuthorize);
  QString getParentCode() const;
  void setParentCode (QString parentCode);
  QString getPermissionCode() const;
  void setPermissionCode (QString permissionCode);
  QString getPermissionName() const;
  void setPermissionName (QString permissionName);
  
  virtual void parseResponse();

private:
/**
 * @brief 1 :允许授权  2：不允许授权 6：不允许授权但默认已有权限
 **/
  qlonglong isAuthorize;

/**
 * @brief 父权限code
 **/
  QString parentCode;

/**
 * @brief 注册到权限中心的code值
 **/
  QString permissionCode;

/**
 * @brief 权限名称
 **/
  QString permissionName;

};

#endif  /* PERMISSION_H */
