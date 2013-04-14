#ifndef COUPON_H
#define COUPON_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 优惠券数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Coupon : public TaoDomain
{

public:
 virtual ~Coupon() { }

  qlonglong getCondition() const;
  void setCondition (qlonglong condition);
  qlonglong getCouponId() const;
  void setCouponId (qlonglong couponId);
  QDateTime getCreatTime() const;
  void setCreatTime (QDateTime creatTime);
  QString getCreateChannel() const;
  void setCreateChannel (QString createChannel);
  qlonglong getDenominations() const;
  void setDenominations (qlonglong denominations);
  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  
  virtual void parseResponse();

private:
/**
 * @brief 订单满多少分才能用这个优惠券，501就是满501分能使用。注意：返回的是“分”，不是“元”
 **/
  qlonglong condition;

/**
 * @brief 优惠券ID
 **/
  qlonglong couponId;

/**
 * @brief 优惠券创建时间
 **/
  QDateTime creatTime;

/**
 * @brief 优惠券的创建渠道，自己创建/他人创建
 **/
  QString createChannel;

/**
 * @brief 优惠券的面值，返回的是“分”，不是“元”，500代表500分相当于5元
 **/
  qlonglong denominations;

/**
 * @brief 优惠券的截止日期
 **/
  QDateTime endTime;

};

#endif  /* COUPON_H */
