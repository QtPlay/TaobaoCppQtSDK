#ifndef SIMBACAMPAIGNBUDGETGETREQUEST_H
#define SIMBACAMPAIGNBUDGETGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignBudgetGetResponse.h>

/**
 * TOP API: 取得一个推广计划的日限额
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignBudgetGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaCampaignBudgetGetResponse *getResponseClass(const QString &session = "",
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

#endif  /* SIMBACAMPAIGNBUDGETGETREQUEST_H */
