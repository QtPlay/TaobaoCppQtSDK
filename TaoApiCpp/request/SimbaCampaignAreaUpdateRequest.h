#ifndef SIMBACAMPAIGNAREAUPDATEREQUEST_H
#define SIMBACAMPAIGNAREAUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignAreaUpdateResponse.h>

/**
 * TOP API: 更新一个推广计划的投放地域
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignAreaUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getArea() const
;  void setArea (QString area);

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaCampaignAreaUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 值为：“all”；或者用“,”分割的数字，数字必须是直通车全国省市列表的AreaID；
 **/
  QString area;

/**
 * @brief 推广计划Id
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBACAMPAIGNAREAUPDATEREQUEST_H */
