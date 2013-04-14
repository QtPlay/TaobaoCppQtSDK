#ifndef SIMBARPTDEMOGRAPHICEFFECTGETRESPONSE_H
#define SIMBARPTDEMOGRAPHICEFFECTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广计划下的人群维度效果数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptDemographiceffectGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptDemographiceffectGetResponse() { }

  QString getRptDemographicEffect() const;
  void setRptDemographicEffect (QString rptDemographicEffect);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广计划下的人群维度效果数据查询
 **/
  QString rptDemographicEffect;

};

#endif
