#ifndef USERACCOUNTFREEZEGETREQUEST_H
#define USERACCOUNTFREEZEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UserAccountFreezeGetResponse.h>

/**
 * TOP API: 查询支付宝账户冻结类型的冻结金额。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserAccountFreezeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFreezeType() const
;  void setFreezeType (QString freezeType);


  virtual UserAccountFreezeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 冻结类型，多个用,分隔。不传返回所有类型的冻结金额。 
DEPOSIT_FREEZE,充值冻结 
WITHDRAW_FREEZE,提现冻结 
PAYMENT_FREEZE,支付冻结 
BAIL_FREEZE,保证金冻结 
CHARGE_FREEZE,收费冻结 
PRE_DEPOSIT_FREEZE,预存款冻结 
LOAN_FREEZE,贷款冻结 
OTHER_FREEZE,其它
 **/
  QString freezeType;

};

#endif  /* USERACCOUNTFREEZEGETREQUEST_H */
