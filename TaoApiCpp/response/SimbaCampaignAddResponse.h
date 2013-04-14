#ifndef SIMBACAMPAIGNADDRESPONSE_H
#define SIMBACAMPAIGNADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Campaign.h>


/**
 * @brief TOP RESPONSE API: 创建一个推广计划
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignAddResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignAddResponse() { }

  Campaign getCampaign() const;
  void setCampaign (Campaign campaign);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 创建的推广计划
 **/
  Campaign campaign;

};

#endif
