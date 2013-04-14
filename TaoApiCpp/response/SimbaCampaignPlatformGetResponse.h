#ifndef SIMBACAMPAIGNPLATFORMGETRESPONSE_H
#define SIMBACAMPAIGNPLATFORMGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CampaignPlatform.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广计划的投放平台设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignPlatformGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignPlatformGetResponse() { }

  CampaignPlatform getCampaignPlatform() const;
  void setCampaignPlatform (CampaignPlatform campaignPlatform);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 取得的推广计划的投放平台设置
 **/
  CampaignPlatform campaignPlatform;

};

#endif
