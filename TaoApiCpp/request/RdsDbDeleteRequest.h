#ifndef RDSDBDELETEREQUEST_H
#define RDSDBDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RdsDbDeleteResponse.h>

/**
 * TOP API: 通过api删除用户RDS的数据库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RdsDbDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDbId() const
;  void setDbId (qlonglong dbId);

 QString getInstanceName() const
;  void setInstanceName (QString instanceName);


  virtual RdsDbDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 数据库的ID，可以通过 taobao.rds.db.get 获取
 **/
  qlonglong dbId;

/**
 * @brief rds的实例名
 **/
  QString instanceName;

};

#endif  /* RDSDBDELETEREQUEST_H */
