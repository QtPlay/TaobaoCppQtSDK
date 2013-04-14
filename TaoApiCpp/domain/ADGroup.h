#ifndef ADGROUP_H
#define ADGROUP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 推广组
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ADGroup : public TaoDomain
{

public:
 virtual ~ADGroup() { }

  qlonglong getAdgroupId() const;
  void setAdgroupId (qlonglong adgroupId);
  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QString getCategoryIds() const;
  void setCategoryIds (QString categoryIds);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  qlonglong getDefaultPrice() const;
  void setDefaultPrice (qlonglong defaultPrice);
  bool getIsNonsearchDefaultPrice() const;
  void setIsNonsearchDefaultPrice (bool isNonsearchDefaultPrice);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getNonsearchMaxPrice() const;
  void setNonsearchMaxPrice (qlonglong nonsearchMaxPrice);
  qlonglong getNonsearchStatus() const;
  void setNonsearchStatus (qlonglong nonsearchStatus);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  QString getOfflineType() const;
  void setOfflineType (QString offlineType);
  QString getOnlineStatus() const;
  void setOnlineStatus (QString onlineStatus);
  QString getReason() const;
  void setReason (QString reason);
  
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
 * @brief 商品类目id，从根类目到子类目，用空格分割
 **/
  QString categoryIds;

/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 默认出价，单位为分，不能小于5
 **/
  qlonglong defaultPrice;

/**
 * @brief 非搜索是否使用默认出价，false-不用；true-使用；默认为true;
 **/
  bool isNonsearchDefaultPrice;

/**
 * @brief 最后修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 推广组主人昵称
 **/
  QString nick;

/**
 * @brief 非搜索出价，单位为分，不能小于5
 **/
  qlonglong nonsearchMaxPrice;

/**
 * @brief 通投状态,1：开启；0：暂停；默认为1
 **/
  qlonglong nonsearchStatus;

/**
 * @brief 商品数字id
 **/
  qlonglong numIid;

/**
 * @brief online-上线；audit_offline-审核下线；crm_offline-CRM下线；默认为online
 **/
  QString offlineType;

/**
 * @brief 用户设置的上下线状态，offline-下线(暂停竞价)；online-上线；默认为online
 **/
  QString onlineStatus;

/**
 * @brief 审核下线原因
 **/
  QString reason;

};

#endif  /* ADGROUP_H */
