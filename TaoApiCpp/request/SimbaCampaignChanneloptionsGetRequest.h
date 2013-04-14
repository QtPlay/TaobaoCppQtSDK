#ifndef SIMBACAMPAIGNCHANNELOPTIONSGETREQUEST_H
#define SIMBACAMPAIGNCHANNELOPTIONSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignChanneloptionsGetResponse.h>

/**
 * TOP API: 取得推广计划的可设置投放频道列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignChanneloptionsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual SimbaCampaignChanneloptionsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* SIMBACAMPAIGNCHANNELOPTIONSGETREQUEST_H */
