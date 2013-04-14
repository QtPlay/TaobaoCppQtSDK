#ifndef LOGISTICSCOMPANIESGETRESPONSE_H
#define LOGISTICSCOMPANIESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LogisticsCompany.h>


/**
 * @brief TOP RESPONSE API: 查询淘宝网合作的物流公司信息，用于发货接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsCompaniesGetResponse : public TaoResponse
{
public:
 virtual ~LogisticsCompaniesGetResponse() { }

  QList<LogisticsCompany> getLogisticsCompanies() const;
  void setLogisticsCompanies (QList<LogisticsCompany> logisticsCompanies);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 物流公司信息。返回的LogisticCompany包含的具体信息为入参fields请求的字段信息。
 **/
  QList<LogisticsCompany> logisticsCompanies;

};

#endif
