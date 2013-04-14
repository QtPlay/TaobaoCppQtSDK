#ifndef SIMBACAMPAIGNAREAGETREQUEST_H
#define SIMBACAMPAIGNAREAGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignAreaGetResponse.h>

/**
 * TOP API: 取得一个推广计划的投放地域设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignAreaGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaCampaignAreaGetResponse *getResponseClass(const QString &session = "",
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

#endif  /* SIMBACAMPAIGNAREAGETREQUEST_H */
