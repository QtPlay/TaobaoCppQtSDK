#ifndef SIMBACAMPAIGNBUDGETUPDATEREQUEST_H
#define SIMBACAMPAIGNBUDGETUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignBudgetUpdateResponse.h>

/**
 * TOP API: 更新一个推广计划的日限额
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignBudgetUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getBudget() const
;  void setBudget (qlonglong budget);

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);

 bool getUseSmooth() const
;  void setUseSmooth (bool useSmooth);


  virtual SimbaCampaignBudgetUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 如果为空则取消限额；否则必须为整数，单位是元，不得小于30；
 **/
  qlonglong budget;

/**
 * @brief 推广计划Id
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 是否平滑消耗：false-否，true-是
 **/
  bool useSmooth;

};

#endif  /* SIMBACAMPAIGNBUDGETUPDATEREQUEST_H */
