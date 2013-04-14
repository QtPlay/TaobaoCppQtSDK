#ifndef SIMBANONSEARCHDEMOGRAPHICSGETREQUEST_H
#define SIMBANONSEARCHDEMOGRAPHICSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaNonsearchDemographicsGetResponse.h>

/**
 * TOP API: 获取给定campaign设置的投放人群维度列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchDemographicsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaNonsearchDemographicsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBANONSEARCHDEMOGRAPHICSGETREQUEST_H */
