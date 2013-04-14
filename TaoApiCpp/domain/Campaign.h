#ifndef CAMPAIGN_H
#define CAMPAIGN_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 推广计划
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Campaign : public TaoDomain
{

public:
 virtual ~Campaign() { }

  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  QString getOnlineStatus() const;
  void setOnlineStatus (QString onlineStatus);
  QString getSettleReason() const;
  void setSettleReason (QString settleReason);
  QString getSettleStatus() const;
  void setSettleStatus (QString settleStatus);
  QString getTitle() const;
  void setTitle (QString title);
  
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
 * @brief 用户设置的上下限状态；offline-下线；online-上线；
 **/
  QString onlineStatus;

/**
 * @brief 推广计划结算下线原因，1-余额不足；2-超过日限额，以分号分隔多个下线原因
 **/
  QString settleReason;

/**
 * @brief 推广计划结算状态，offline-下线；online-上线，
 **/
  QString settleStatus;

/**
 * @brief 推广计划名称，不能多余20个汉字
 **/
  QString title;

};

#endif  /* CAMPAIGN_H */
