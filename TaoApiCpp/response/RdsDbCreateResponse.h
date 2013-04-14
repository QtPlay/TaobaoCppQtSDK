#ifndef RDSDBCREATERESPONSE_H
#define RDSDBCREATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/RdsDbInfo.h>


/**
 * @brief TOP RESPONSE API: 在rds实例里创建数据库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RdsDbCreateResponse : public TaoResponse
{
public:
 virtual ~RdsDbCreateResponse() { }

  RdsDbInfo getRdsDbInfo() const;
  void setRdsDbInfo (RdsDbInfo rdsDbInfo);
  virtual void parseNormalResponse();

 private:
/**
 * @brief rds创建、查询、删除db返回结果的数据结构
 **/
  RdsDbInfo rdsDbInfo;

};

#endif
