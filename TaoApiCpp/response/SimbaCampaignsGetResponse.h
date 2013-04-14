#ifndef SIMBACAMPAIGNSGETRESPONSE_H
#define SIMBACAMPAIGNSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Campaign.h>


/**
 * @brief TOP RESPONSE API: 取得一个客户的推广计划；
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignsGetResponse() { }

  QList<Campaign> getCampaigns() const;
  void setCampaigns (QList<Campaign> campaigns);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广计划列表
 **/
  QList<Campaign> campaigns;

};

#endif
