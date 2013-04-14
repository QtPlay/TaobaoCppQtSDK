#ifndef SIMBACAMPAIGNAREAUPDATERESPONSE_H
#define SIMBACAMPAIGNAREAUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CampaignArea.h>


/**
 * @brief TOP RESPONSE API: 更新一个推广计划的投放地域
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignAreaUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignAreaUpdateResponse() { }

  CampaignArea getCampaignArea() const;
  void setCampaignArea (CampaignArea campaignArea);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 修改后的推广计划投放地域
 **/
  CampaignArea campaignArea;

};

#endif
