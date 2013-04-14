#ifndef SIMBACAMPAIGNBUDGETGETRESPONSE_H
#define SIMBACAMPAIGNBUDGETGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CampaignBudget.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广计划的日限额
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignBudgetGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignBudgetGetResponse() { }

  CampaignBudget getCampaignBudget() const;
  void setCampaignBudget (CampaignBudget campaignBudget);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广计划日限额
 **/
  CampaignBudget campaignBudget;

};

#endif
