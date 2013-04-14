#ifndef SIMBACAMPAIGNBUDGETUPDATERESPONSE_H
#define SIMBACAMPAIGNBUDGETUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CampaignBudget.h>


/**
 * @brief TOP RESPONSE API: 更新一个推广计划的日限额
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignBudgetUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignBudgetUpdateResponse() { }

  CampaignBudget getCampaignBudget() const;
  void setCampaignBudget (CampaignBudget campaignBudget);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 修改后的推广计划日限额
 **/
  CampaignBudget campaignBudget;

};

#endif
