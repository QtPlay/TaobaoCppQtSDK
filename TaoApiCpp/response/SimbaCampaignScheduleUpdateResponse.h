#ifndef SIMBACAMPAIGNSCHEDULEUPDATERESPONSE_H
#define SIMBACAMPAIGNSCHEDULEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CampaignSchedule.h>


/**
 * @brief TOP RESPONSE API: 更新一个推广计划的分时折扣设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignScheduleUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignScheduleUpdateResponse() { }

  CampaignSchedule getCampaignSchedule() const;
  void setCampaignSchedule (CampaignSchedule campaignSchedule);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 修改后的推广计划分时折扣
 **/
  CampaignSchedule campaignSchedule;

};

#endif
