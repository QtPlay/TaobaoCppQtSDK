#ifndef RDSDBCREATEREQUEST_H
#define RDSDBCREATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RdsDbCreateResponse.h>

/**
 * TOP API: 在rds实例里创建数据库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RdsDbCreateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDbName() const
;  void setDbName (QString dbName);

 QString getInstanceName() const
;  void setInstanceName (QString instanceName);


  virtual RdsDbCreateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 数据库名
 **/
  QString dbName;

/**
 * @brief rds的实例名
 **/
  QString instanceName;

};

#endif  /* RDSDBCREATEREQUEST_H */
