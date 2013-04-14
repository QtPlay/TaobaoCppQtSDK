#ifndef SIMBARPTCAMPAIGNBASEGETRESPONSE_H
#define SIMBARPTCAMPAIGNBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广计划报表基础数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptCampaignbaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptCampaignbaseGetResponse() { }

  QString getRptCampaignBaseList() const;
  void setRptCampaignBaseList (QString rptCampaignBaseList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广计划查询结果
 **/
  QString rptCampaignBaseList;

};

#endif
