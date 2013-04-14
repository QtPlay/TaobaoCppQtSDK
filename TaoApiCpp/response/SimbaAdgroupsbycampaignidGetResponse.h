#ifndef SIMBAADGROUPSBYCAMPAIGNIDGETRESPONSE_H
#define SIMBAADGROUPSBYCAMPAIGNIDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroupPage.h>


/**
 * @brief TOP RESPONSE API: 批量得到推广计划下的推广组
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupsbycampaignidGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupsbycampaignidGetResponse() { }

  ADGroupPage getAdgroups() const;
  void setAdgroups (ADGroupPage adgroups);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回的推广组分页对象
 **/
  ADGroupPage adgroups;

};

#endif
