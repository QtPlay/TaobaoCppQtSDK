#ifndef SIMBACAMPAIGNPLATFORMUPDATEREQUEST_H
#define SIMBACAMPAIGNPLATFORMUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignPlatformUpdateResponse.h>

/**
 * TOP API: 更新一个推广计划的平台设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignPlatformUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getNonsearchChannels() const
;  void setNonsearchChannels (qlonglong nonsearchChannels);

 qlonglong getOutsideDiscount() const
;  void setOutsideDiscount (qlonglong outsideDiscount);

 qlonglong getSearchChannels() const
;  void setSearchChannels (qlonglong searchChannels);


  virtual SimbaCampaignPlatformUpdateResponse *getResponseClass(const QString &session = "",
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

/**
 * @brief 非搜索投放频道代码数组，频道代码必须是直通车非搜索类频道列表中的值。
 **/
  qlonglong nonsearchChannels;

/**
 * @brief 溢价的百分比，必须是大于等于 1小于等于200的整数
 **/
  qlonglong outsideDiscount;

/**
 * @brief 搜索投放频道代码数组，频道代码必须是直通车搜索类频道列表中的值，必须包含淘宝内网。
 **/
  qlonglong searchChannels;

};

#endif  /* SIMBACAMPAIGNPLATFORMUPDATEREQUEST_H */
