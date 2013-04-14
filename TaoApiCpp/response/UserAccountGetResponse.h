#ifndef USERACCOUNTGETRESPONSE_H
#define USERACCOUNTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/AlipayAccount.h>


/**
 * @brief TOP RESPONSE API: 查询支付宝账户余额
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserAccountGetResponse : public TaoResponse
{
public:
 virtual ~UserAccountGetResponse() { }

  AlipayAccount getAlipayAccount() const;
  void setAlipayAccount (AlipayAccount alipayAccount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 支付宝用户账户信息
 **/
  AlipayAccount alipayAccount;

};

#endif
