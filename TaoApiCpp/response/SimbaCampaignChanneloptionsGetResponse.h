#ifndef SIMBACAMPAIGNCHANNELOPTIONSGETRESPONSE_H
#define SIMBACAMPAIGNCHANNELOPTIONSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ChannelOption.h>


/**
 * @brief TOP RESPONSE API: 取得推广计划的可设置投放频道列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignChanneloptionsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignChanneloptionsGetResponse() { }

  QList<ChannelOption> getChannelOptions() const;
  void setChannelOptions (QList<ChannelOption> channelOptions);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 所有推广计划可投放的频道
 **/
  QList<ChannelOption> channelOptions;

};

#endif
