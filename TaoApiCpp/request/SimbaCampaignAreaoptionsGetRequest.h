#ifndef SIMBACAMPAIGNAREAOPTIONSGETREQUEST_H
#define SIMBACAMPAIGNAREAOPTIONSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignAreaoptionsGetResponse.h>

/**
 * TOP API: 取得推广计划的可设置投放地域列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignAreaoptionsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual SimbaCampaignAreaoptionsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* SIMBACAMPAIGNAREAOPTIONSGETREQUEST_H */
