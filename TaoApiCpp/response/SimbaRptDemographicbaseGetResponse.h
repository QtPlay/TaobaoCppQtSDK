#ifndef SIMBARPTDEMOGRAPHICBASEGETRESPONSE_H
#define SIMBARPTDEMOGRAPHICBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广计划下的人群基础数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptDemographicbaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptDemographicbaseGetResponse() { }

  QString getRptDemographicBase() const;
  void setRptDemographicBase (QString rptDemographicBase);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 非搜索推广计划基础数据对象
 **/
  QString rptDemographicBase;

};

#endif
