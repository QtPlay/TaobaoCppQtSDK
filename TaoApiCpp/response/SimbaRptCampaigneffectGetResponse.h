#ifndef SIMBARPTCAMPAIGNEFFECTGETRESPONSE_H
#define SIMBARPTCAMPAIGNEFFECTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广计划效果报表数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptCampaigneffectGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptCampaigneffectGetResponse() { }

  QString getRptCampaignEffectList() const;
  void setRptCampaignEffectList (QString rptCampaignEffectList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广计划效果报表数据对象
 **/
  QString rptCampaignEffectList;

};

#endif
