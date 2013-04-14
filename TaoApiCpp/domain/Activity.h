#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 活动数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Activity : public TaoDomain
{

public:
 virtual ~Activity() { }

  qlonglong getActivityId() const;
  void setActivityId (qlonglong activityId);
  QString getActivityUrl() const;
  void setActivityUrl (QString activityUrl);
  qlonglong getAppliedCount() const;
  void setAppliedCount (qlonglong appliedCount);
  qlonglong getCouponId() const;
  void setCouponId (qlonglong couponId);
  QString getCreateUser() const;
  void setCreateUser (QString createUser);
  qlonglong getPersonLimitCount() const;
  void setPersonLimitCount (qlonglong personLimitCount);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  
  virtual void parseResponse();

private:
/**
 * @brief 活动id
 **/
  qlonglong activityId;

/**
 * @brief 领用优惠券的链接
 **/
  QString activityUrl;

/**
 * @brief 已经领取的优惠券的数量
 **/
  qlonglong appliedCount;

/**
 * @brief 活动对应的优惠券ID
 **/
  qlonglong couponId;

/**
 * @brief self代表自己创建，other他人创建
 **/
  QString createUser;

/**
 * @brief 每个买家限领取优惠券的数量，1～5张
 **/
  qlonglong personLimitCount;

/**
 * @brief enabled代表有效，invalid代表失效。other代表空值
 **/
  QString status;

/**
 * @brief 卖家设置优惠券领取的总领用量
 **/
  qlonglong totalCount;

};

#endif  /* ACTIVITY_H */
