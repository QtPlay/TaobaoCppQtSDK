#ifndef RDSDBDELETERESPONSE_H
#define RDSDBDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/RdsDbInfo.h>


/**
 * @brief TOP RESPONSE API: 通过api删除用户RDS的数据库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RdsDbDeleteResponse : public TaoResponse
{
public:
 virtual ~RdsDbDeleteResponse() { }

  RdsDbInfo getRdsDbInfo() const;
  void setRdsDbInfo (RdsDbInfo rdsDbInfo);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 删除数据库，返回结果对象
 **/
  RdsDbInfo rdsDbInfo;

};

#endif
