#ifndef DEMOGRAPHICSETTING_H
#define DEMOGRAPHICSETTING_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 投放人群设置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DemographicSetting : public TaoDomain
{

public:
 virtual ~DemographicSetting() { }

  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  qlonglong getDemographicId() const;
  void setDemographicId (qlonglong demographicId);
  qlonglong getIncrementalPrice() const;
  void setIncrementalPrice (qlonglong incrementalPrice);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  
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
 * @brief 投放人群ID
 **/
  qlonglong demographicId;

/**
 * @brief 加价
 **/
  qlonglong incrementalPrice;

/**
 * @brief 修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* DEMOGRAPHICSETTING_H */
