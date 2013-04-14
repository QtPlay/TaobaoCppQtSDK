#ifndef SIMBARPTCAMPADGROUPBASEGETRESPONSE_H
#define SIMBARPTCAMPADGROUPBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广计划下的推广组报表基础数据查询(只有汇总数据，无分类类型)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptCampadgroupbaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptCampadgroupbaseGetResponse() { }

  QString getRptCampadgroupBaseList() const;
  void setRptCampadgroupBaseList (QString rptCampadgroupBaseList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广计划下推广组的基础数据列表
 **/
  QString rptCampadgroupBaseList;

};

#endif
