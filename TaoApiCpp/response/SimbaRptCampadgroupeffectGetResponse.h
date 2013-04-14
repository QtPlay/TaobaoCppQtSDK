#ifndef SIMBARPTCAMPADGROUPEFFECTGETRESPONSE_H
#define SIMBARPTCAMPADGROUPEFFECTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广计划下的推广组报表效果数据查询(只有汇总数据，无分类类型)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptCampadgroupeffectGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptCampadgroupeffectGetResponse() { }

  QString getRptCampadgroupEffectList() const;
  void setRptCampadgroupEffectList (QString rptCampadgroupEffectList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广计划下推广组的效果数据列表
 **/
  QString rptCampadgroupEffectList;

};

#endif
