#ifndef CAMPAIGNPLATFORM_H
#define CAMPAIGNPLATFORM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>


/**
 * @brief 推广计划的投放平台
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CampaignPlatform : public TaoDomain
{

public:
 virtual ~CampaignPlatform() { }

  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  QList<qlonglong> getNonsearchChannels() const;
  void setNonsearchChannels (QList<qlonglong> nonsearchChannels);
  qlonglong getOutsideDiscount() const;
  void setOutsideDiscount (qlonglong outsideDiscount);
  QList<qlonglong> getSearchChannels() const;
  void setSearchChannels (QList<qlonglong> searchChannels);
  
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
 * @brief 非搜索投放频道代码数组，频道代码必须是直通车非搜索类频道列表中的值。？
 **/
  QList<qlonglong> nonsearchChannels;

/**
 * @brief 溢价的百分比，必须是大于等于 1小于等于200的整数
 **/
  qlonglong outsideDiscount;

/**
 * @brief 搜索投放频道代码数组，频道代码必须是直通车搜索类频道列表中的值。
 **/
  QList<qlonglong> searchChannels;

};

#endif  /* CAMPAIGNPLATFORM_H */
