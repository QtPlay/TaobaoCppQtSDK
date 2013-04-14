#ifndef LOGISTICSPARTNERSGETRESPONSE_H
#define LOGISTICSPARTNERSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LogisticsPartner.h>


/**
 * @brief TOP RESPONSE API: 查询物流公司信息（可以查询目的地可不可达情况）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsPartnersGetResponse : public TaoResponse
{
public:
 virtual ~LogisticsPartnersGetResponse() { }

  QList<LogisticsPartner> getLogisticsPartners() const;
  void setLogisticsPartners (QList<LogisticsPartner> logisticsPartners);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 物流公司信息。
 **/
  QList<LogisticsPartner> logisticsPartners;

};

#endif
