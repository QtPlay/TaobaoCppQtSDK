#ifndef COUPONRESULT_H
#define COUPONRESULT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 发放成功的优惠券的信息，包括couponNumber和buyerNick
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CouponResult : public TaoDomain
{

public:
 virtual ~CouponResult() { }

  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  qlonglong getCouponNumber() const;
  void setCouponNumber (qlonglong couponNumber);
  
  virtual void parseResponse();

private:
/**
 * @brief 张三
 **/
  QString buyerNick;

/**
 * @brief 已经发放优惠券的编号
 **/
  qlonglong couponNumber;

};

#endif  /* COUPONRESULT_H */
