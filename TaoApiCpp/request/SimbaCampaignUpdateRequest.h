#ifndef SIMBACAMPAIGNUPDATEREQUEST_H
#define SIMBACAMPAIGNUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignUpdateResponse.h>

/**
 * TOP API: 更新一个推广计划，可以设置推广计划名字，修改推广计划上下线状态。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);

 QString getOnlineStatus() const
;  void setOnlineStatus (QString onlineStatus);

 QString getTitle() const
;  void setTitle (QString title);


  virtual SimbaCampaignUpdateResponse *getResponseClass(const QString &session = "",
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
 * @brief 用户设置的上下限状态；offline-下线；online-上线；
 **/
  QString onlineStatus;

/**
 * @brief 推广计划名称，不能多余20个字符，不能和客户其他推广计划同名。
 **/
  QString title;

};

#endif  /* SIMBACAMPAIGNUPDATEREQUEST_H */
