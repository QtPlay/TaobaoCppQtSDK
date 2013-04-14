#ifndef RDSDBINFO_H
#define RDSDBINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief rds创建、查询、删除返回结果数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RdsDbInfo : public TaoDomain
{

public:
 virtual ~RdsDbInfo() { }

  QString getCharset() const;
  void setCharset (QString charset);
  QString getComment() const;
  void setComment (QString comment);
  QString getDbId() const;
  void setDbId (QString dbId);
  QString getDbName() const;
  void setDbName (QString dbName);
  QString getDbStatus() const;
  void setDbStatus (QString dbStatus);
  QString getDbType() const;
  void setDbType (QString dbType);
  QString getInstanceId() const;
  void setInstanceId (QString instanceId);
  QString getInstanceName() const;
  void setInstanceName (QString instanceName);
  QString getInstanceType() const;
  void setInstanceType (QString instanceType);
  QString getMaxAccount() const;
  void setMaxAccount (QString maxAccount);
  QString getPassword() const;
  void setPassword (QString password);
  QString getUid() const;
  void setUid (QString uid);
  QString getUserName() const;
  void setUserName (QString userName);
  
  virtual void parseResponse();

private:
/**
 * @brief 数据库编码
 **/
  QString charset;

/**
 * @brief 备注
 **/
  QString comment;

/**
 * @brief 数据库id
 **/
  QString dbId;

/**
 * @brief 数据库名称
 **/
  QString dbName;

/**
 * @brief 数据库状态 0：创建中 ；1：激活；3：正在删除
 **/
  QString dbStatus;

/**
 * @brief 数据库类型，mysql或者mssql
 **/
  QString dbType;

/**
 * @brief rds实例id
 **/
  QString instanceId;

/**
 * @brief rds实例名
 **/
  QString instanceName;

/**
 * @brief rds实例类型,s:共享型，x:专享型
 **/
  QString instanceType;

/**
 * @brief 最大帐号数，1个数据库最多可以创建的账户数目
 **/
  QString maxAccount;

/**
 * @brief 数据库登录密码
 **/
  QString password;

/**
 * @brief 用户id
 **/
  QString uid;

/**
 * @brief 登录数据库的帐号
 **/
  QString userName;

};

#endif  /* RDSDBINFO_H */
