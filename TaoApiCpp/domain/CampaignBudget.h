#ifndef CAMPAIGNBUDGET_H
#define CAMPAIGNBUDGET_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 推广计划的日限额
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CampaignBudget : public TaoDomain
{

public:
 virtual ~CampaignBudget() { }

  qlonglong getBudget() const;
  void setBudget (qlonglong budget);
  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  bool getIsSmooth() const;
  void setIsSmooth (bool isSmooth);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  
  virtual void parseResponse();

private:
/**
 * @brief 日限额，单位是元，不得小于30
 **/
  qlonglong budget;

/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 是否平滑消耗，true-是；false-否；在设置了推广计划日限额后，此属性才生效
 **/
  bool isSmooth;

/**
 * @brief 最后修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* CAMPAIGNBUDGET_H */
