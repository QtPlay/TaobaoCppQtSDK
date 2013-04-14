#ifndef SIMBACAMPAIGNSCHEDULEGETRESPONSE_H
#define SIMBACAMPAIGNSCHEDULEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CampaignSchedule.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广计划的分时折扣设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignScheduleGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignScheduleGetResponse() { }

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
