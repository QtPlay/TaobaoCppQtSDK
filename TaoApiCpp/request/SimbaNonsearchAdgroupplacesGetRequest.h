#ifndef SIMBANONSEARCHADGROUPPLACESGETREQUEST_H
#define SIMBANONSEARCHADGROUPPLACESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaNonsearchAdgroupplacesGetResponse.h>

/**
 * TOP API: 根据指定推广计划下推广组列表获取相应推广组投放位置包括通投位置和单独出价位置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAdgroupplacesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupIds() const
;  void setAdgroupIds (qlonglong adgroupIds);

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaNonsearchAdgroupplacesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组ID数组
 **/
  qlonglong adgroupIds;

/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBANONSEARCHADGROUPPLACESGETREQUEST_H */
