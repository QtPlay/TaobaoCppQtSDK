#ifndef ADGROUPPLACE_H
#define ADGROUPPLACE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 推广组与定向推广位置关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ADGroupPlace : public TaoDomain
{

public:
 virtual ~ADGroupPlace() { }

  qlonglong getAdgroupId() const;
  void setAdgroupId (qlonglong adgroupId);
  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  qlonglong getIsDefaultPrice() const;
  void setIsDefaultPrice (qlonglong isDefaultPrice);
  qlonglong getMaxPrice() const;
  void setMaxPrice (qlonglong maxPrice);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getPlaceId() const;
  void setPlaceId (qlonglong placeId);
  QString getPlaceName() const;
  void setPlaceName (QString placeName);
  
  virtual void parseResponse();

private:
/**
 * @brief 推广组ID
 **/
  qlonglong adgroupId;

/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 是否使用默认出价，0-不用；1-使用；
 **/
  qlonglong isDefaultPrice;

/**
 * @brief 出价
 **/
  qlonglong maxPrice;

/**
 * @brief 修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 位置标识
 **/
  qlonglong placeId;

/**
 * @brief 位置名称
 **/
  QString placeName;

};

#endif  /* ADGROUPPLACE_H */
