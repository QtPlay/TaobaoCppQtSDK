#ifndef CAMPAIGNSCHEDULE_H
#define CAMPAIGNSCHEDULE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 推广计划的分时折扣设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CampaignSchedule : public TaoDomain
{

public:
 virtual ~CampaignSchedule() { }

  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  QString getSchedule() const;
  void setSchedule (QString schedule);
  
  virtual void parseResponse();

private:
/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 最后修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 值为：“all”；或者用“;”分割的每天的设置字符串，该字符串为用“,”分割的时段折扣字符串，格式为：起始时间-结束时间:折扣，其中时间是24小时格式记录18:30，，折扣是1-150整数，表示折扣百分比；
 **/
  QString schedule;

};

#endif  /* CAMPAIGNSCHEDULE_H */
