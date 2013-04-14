#ifndef RDSDBGETREQUEST_H
#define RDSDBGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RdsDbGetResponse.h>

/**
 * TOP API: 查询rds实例下的数据库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RdsDbGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDbStatus() const
;  void setDbStatus (qlonglong dbStatus);

 QString getInstanceName() const
;  void setInstanceName (QString instanceName);


  virtual RdsDbGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 数据库状态，默认值1
 **/
  qlonglong dbStatus;

/**
 * @brief rds的实例名
 **/
  QString instanceName;

};

#endif  /* RDSDBGETREQUEST_H */
