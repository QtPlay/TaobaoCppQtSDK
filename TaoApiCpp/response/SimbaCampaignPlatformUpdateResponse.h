#ifndef SIMBACAMPAIGNPLATFORMUPDATERESPONSE_H
#define SIMBACAMPAIGNPLATFORMUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CampaignPlatform.h>


/**
 * @brief TOP RESPONSE API: 更新一个推广计划的平台设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignPlatformUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignPlatformUpdateResponse() { }

  CampaignPlatform getCampaignPlatform() const;
  void setCampaignPlatform (CampaignPlatform campaignPlatform);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 修改后的推广计划投放平台设置
 **/
  CampaignPlatform campaignPlatform;

};

#endif
