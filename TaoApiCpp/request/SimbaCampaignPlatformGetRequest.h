#ifndef SIMBACAMPAIGNPLATFORMGETREQUEST_H
#define SIMBACAMPAIGNPLATFORMGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignPlatformGetResponse.h>

/**
 * TOP API: 取得一个推广计划的投放平台设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignPlatformGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaCampaignPlatformGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广计划Id
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBACAMPAIGNPLATFORMGETREQUEST_H */
