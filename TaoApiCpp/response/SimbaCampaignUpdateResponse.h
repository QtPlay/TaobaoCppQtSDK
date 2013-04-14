#ifndef SIMBACAMPAIGNUPDATERESPONSE_H
#define SIMBACAMPAIGNUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Campaign.h>


/**
 * @brief TOP RESPONSE API: 更新一个推广计划，可以设置推广计划名字，修改推广计划上下线状态。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignUpdateResponse() { }

  Campaign getCampaign() const;
  void setCampaign (Campaign campaign);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 修改后的推广计划
 **/
  Campaign campaign;

};

#endif
