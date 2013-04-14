#ifndef CAMPAIGNAREA_H
#define CAMPAIGNAREA_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 推广计划的投放地域
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CampaignArea : public TaoDomain
{

public:
 virtual ~CampaignArea() { }

  QString getArea() const;
  void setArea (QString area);
  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  
  virtual void parseResponse();

private:
/**
 * @brief 值为：“all”；或者用“,”分割的数字，数字必须是直通车全国省市列表的AreaID，如果已经包含省、自治区id，请不要再包括省内市的id；
 **/
  QString area;

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

};

#endif  /* CAMPAIGNAREA_H */
