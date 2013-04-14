#ifndef COUPONDETAIL_H
#define COUPONDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 优惠券详细信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CouponDetail : public TaoDomain
{

public:
 virtual ~CouponDetail() { }

  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  QString getChannel() const;
  void setChannel (QString channel);
  qlonglong getCouponNumber() const;
  void setCouponNumber (qlonglong couponNumber);
  QString getState() const;
  void setState (QString state);
  
  virtual void parseResponse();

private:
/**
 * @brief 买家的昵称
 **/
  QString buyerNick;

/**
 * @brief 优惠券的发放渠道：渠道有rewardforgifts：满就送，marketingMessage：营销消息，activityofget：活动领取，createActivity：创建活动，ISV
 **/
  QString channel;

/**
 * @brief 目前优惠券编号
 **/
  qlonglong couponNumber;

/**
 * @brief 优惠券使用情况Unused：未使用using：使用中used：已使用
 **/
  QString state;

};

#endif  /* COUPONDETAIL_H */
