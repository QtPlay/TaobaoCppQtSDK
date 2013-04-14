#ifndef SIMBACAMPAIGNSCHEDULEUPDATEREQUEST_H
#define SIMBACAMPAIGNSCHEDULEUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCampaignScheduleUpdateResponse.h>

/**
 * TOP API: 更新一个推广计划的分时折扣设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignScheduleUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);

 QString getSchedule() const
;  void setSchedule (QString schedule);


  virtual SimbaCampaignScheduleUpdateResponse *getResponseClass(const QString &session = "",
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
 * @brief 值为：“all”；或者用“;”分割的每天的设置字符串，该字符串为用“,”分割的时段折扣字符串，格式为：起始时间-结束时间:折扣，其中时间是24小时格式记录，折扣是1-150整数，表示折扣百分比；
 **/
  QString schedule;

};

#endif  /* SIMBACAMPAIGNSCHEDULEUPDATEREQUEST_H */
