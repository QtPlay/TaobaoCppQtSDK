#ifndef FENXIAODISTRIBUTORSGETRESPONSE_H
#define FENXIAODISTRIBUTORSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Distributor.h>


/**
 * @brief TOP RESPONSE API: 查询和当前登录供应商有合作关系的分销商的信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDistributorsGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoDistributorsGetResponse() { }

  QList<Distributor> getDistributors() const;
  void setDistributors (QList<Distributor> distributors);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 分销商详细信息
 **/
  QList<Distributor> distributors;

};

#endif
