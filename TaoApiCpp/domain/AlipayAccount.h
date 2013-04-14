#ifndef ALIPAYACCOUNT_H
#define ALIPAYACCOUNT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 支付宝用户账户信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AlipayAccount : public TaoDomain
{

public:
 virtual ~AlipayAccount() { }

  QString getAlipayUserId() const;
  void setAlipayUserId (QString alipayUserId);
  QString getAvailableAmount() const;
  void setAvailableAmount (QString availableAmount);
  QString getFreezeAmount() const;
  void setFreezeAmount (QString freezeAmount);
  QString getTotalAmount() const;
  void setTotalAmount (QString totalAmount);
  
  virtual void parseResponse();

private:
/**
 * @brief 支付宝用户ID
 **/
  QString alipayUserId;

/**
 * @brief 可用余额
 **/
  QString availableAmount;

/**
 * @brief 不可用余额
 **/
  QString freezeAmount;

/**
 * @brief 余额总额
 **/
  QString totalAmount;

};

#endif  /* ALIPAYACCOUNT_H */
