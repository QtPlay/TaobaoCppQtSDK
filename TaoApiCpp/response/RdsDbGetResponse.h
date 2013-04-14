#ifndef RDSDBGETRESPONSE_H
#define RDSDBGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/RdsDbInfo.h>


/**
 * @brief TOP RESPONSE API: 查询rds实例下的数据库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RdsDbGetResponse : public TaoResponse
{
public:
 virtual ~RdsDbGetResponse() { }

  QList<RdsDbInfo> getRdsDbInfos() const;
  void setRdsDbInfos (QList<RdsDbInfo> rdsDbInfos);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 数据库查询返回数据结构
 **/
  QList<RdsDbInfo> rdsDbInfos;

};

#endif
