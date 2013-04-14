#ifndef ADGROUPCATMATCH_H
#define ADGROUPCATMATCH_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 推广组类目出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ADGroupCatmatch : public TaoDomain
{

public:
 virtual ~ADGroupCatmatch() { }

  qlonglong getAdgroupId() const;
  void setAdgroupId (qlonglong adgroupId);
  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  qlonglong getCatmatchId() const;
  void setCatmatchId (qlonglong catmatchId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  bool getIsDefaultPrice() const;
  void setIsDefaultPrice (bool isDefaultPrice);
  qlonglong getMaxPrice() const;
  void setMaxPrice (qlonglong maxPrice);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  QString getOnlineStatus() const;
  void setOnlineStatus (QString onlineStatus);
  QString getQscore() const;
  void setQscore (QString qscore);
  
  virtual void parseResponse();

private:
/**
 * @brief 推广组id
 **/
  qlonglong adgroupId;

/**
 * @brief 推广计划Id
 **/
  qlonglong campaignId;

/**
 * @brief 类目出价Id
 **/
  qlonglong catmatchId;

/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 是否使用推广组默认出价，false-不使用默认出价  true-使用默认出价；默认true
 **/
  bool isDefaultPrice;

/**
 * @brief 类目出价，单位为分，不能小于5
 **/
  qlonglong maxPrice;

/**
 * @brief 最后修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 推广组主人昵称
 **/
  QString nick;

/**
 * @brief 是否启用类目出价；offline-不启用；online-启用；默认启用
 **/
  QString onlineStatus;

/**
 * @brief 类目出价质量得分
 **/
  QString qscore;

};

#endif  /* ADGROUPCATMATCH_H */
