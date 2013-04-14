#ifndef SIMBACAMPAIGNAREAGETRESPONSE_H
#define SIMBACAMPAIGNAREAGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CampaignArea.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广计划的投放地域设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignAreaGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignAreaGetResponse() { }

  CampaignArea getCampaignArea() const;
  void setCampaignArea (CampaignArea campaignArea);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广计划的投放地域配置
 **/
  CampaignArea campaignArea;

};

#endif
